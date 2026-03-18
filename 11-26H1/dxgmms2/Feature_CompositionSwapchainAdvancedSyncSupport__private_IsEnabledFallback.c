/*
 * XREFs of Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledFallback @ 0x14004B0C8
 * Callers:
 *     Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline @ 0x14004B08C (Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14004B0E4 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_CompositionSwapchainAdvancedSyncSupport__private_descriptor);
}
