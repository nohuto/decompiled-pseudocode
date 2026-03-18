/*
 * XREFs of Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline @ 0x140227FAC
 * Callers:
 *     ?ConfirmFrame@CConnection@DirectComposition@@QEAAJPEAUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z @ 0x140197EF0 (-ConfirmFrame@CConnection@DirectComposition@@QEAAJPEAUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z.c)
 * Callees:
 *     Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledFallback @ 0x140227FE4 (Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledFallback.c)
 */

__int64 Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CompSwapchainRenderAndPresentSync__private_featureState & 0x10) != 0 )
    return Feature_CompSwapchainRenderAndPresentSync__private_featureState & 1;
  else
    return Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledFallback(
             (unsigned int)Feature_CompSwapchainRenderAndPresentSync__private_featureState,
             3LL);
}
