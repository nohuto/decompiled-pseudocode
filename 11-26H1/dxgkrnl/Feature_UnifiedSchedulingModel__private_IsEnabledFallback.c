/*
 * XREFs of Feature_UnifiedSchedulingModel__private_IsEnabledFallback @ 0x14009D9CC
 * Callers:
 *     Feature_UnifiedSchedulingModel__private_IsEnabledDeviceUsageNoInline @ 0x14009D990 (Feature_UnifiedSchedulingModel__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140067A54 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_UnifiedSchedulingModel__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_UnifiedSchedulingModel__private_descriptor);
}
