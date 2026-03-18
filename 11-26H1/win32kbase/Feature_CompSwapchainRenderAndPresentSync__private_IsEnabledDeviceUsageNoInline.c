/*
 * XREFs of Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline @ 0x140042EF0
 * Callers:
 *     NtDCompositionConfirmFrame @ 0x140042310 (NtDCompositionConfirmFrame.c)
 * Callees:
 *     Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledFallback @ 0x1401C6058 (Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledFallback.c)
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
