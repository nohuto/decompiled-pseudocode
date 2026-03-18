/*
 * XREFs of Feature_D3DKMT_BacklightOptimizationEDR__private_IsEnabledFallback @ 0x140091674
 * Callers:
 *     Feature_D3DKMT_BacklightOptimizationEDR__private_IsEnabledDeviceUsageNoInline @ 0x140091638 (Feature_D3DKMT_BacklightOptimizationEDR__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140067A54 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_D3DKMT_BacklightOptimizationEDR__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_D3DKMT_BacklightOptimizationEDR__private_descriptor);
}
