/*
 * XREFs of Feature_FixSizeFromArrangeNearTop__private_IsEnabledDeviceUsageNoInline @ 0x1402AC318
 * Callers:
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1402507C4 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUCHECKPOINT@@PEAK@Z @ 0x1402A7000 (-HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUCHECKPOINT@@PEAK@Z.c)
 *     ?UpdateDragRectForSizingAway@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@1W4FrameBoundsOverlapInfo@@@Z @ 0x1402A81F8 (-UpdateDragRectForSizingAway@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@1W4FrameBoundsOverlapInfo@@@Z.c)
 * Callees:
 *     Feature_FixSizeFromArrangeNearTop__private_IsEnabledFallback @ 0x1402AC350 (Feature_FixSizeFromArrangeNearTop__private_IsEnabledFallback.c)
 */

__int64 Feature_FixSizeFromArrangeNearTop__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixSizeFromArrangeNearTop__private_featureState & 0x10) != 0 )
    return Feature_FixSizeFromArrangeNearTop__private_featureState & 1;
  else
    return Feature_FixSizeFromArrangeNearTop__private_IsEnabledFallback(
             (unsigned int)Feature_FixSizeFromArrangeNearTop__private_featureState,
             3LL);
}
