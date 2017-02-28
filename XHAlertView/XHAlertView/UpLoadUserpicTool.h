//
//  UpLoadUserpicTool.h
//  JiaXiHeZi
//
//  Created by 郑信鸿 on 16/6/17.
//  Copyright © 2016年 郑信鸿. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^FinishSelectImageBlcok)(UIImage *image);

@interface UpLoadUserpicTool : NSObject

+ (UpLoadUserpicTool *)shareManager;


- (void)selectUserpicSourceWithViewController:(UIViewController *)viewController FinishSelectImageBlcok:(FinishSelectImageBlcok)finishSelectImageBlock;

@end
