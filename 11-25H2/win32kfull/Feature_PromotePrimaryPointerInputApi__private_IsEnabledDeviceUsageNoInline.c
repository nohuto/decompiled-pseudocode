/*
 * XREFs of Feature_PromotePrimaryPointerInputApi__private_IsEnabledDeviceUsageNoInline @ 0x140294450
 * Callers:
 *     NtUserPromotePrimaryPointerToDrag @ 0x14029BA10 (NtUserPromotePrimaryPointerToDrag.c)
 *     ?xxxCheckForMoveSizeTouchCapture@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1402A92F4 (-xxxCheckForMoveSizeTouchCapture@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     Feature_PromotePrimaryPointerInputApi__private_IsEnabledFallback @ 0x140294488 (Feature_PromotePrimaryPointerInputApi__private_IsEnabledFallback.c)
 */

__int64 Feature_PromotePrimaryPointerInputApi__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_PromotePrimaryPointerInputApi__private_featureState & 0x10) != 0 )
    return Feature_PromotePrimaryPointerInputApi__private_featureState & 1;
  else
    return Feature_PromotePrimaryPointerInputApi__private_IsEnabledFallback(
             (unsigned int)Feature_PromotePrimaryPointerInputApi__private_featureState,
             3LL);
}
