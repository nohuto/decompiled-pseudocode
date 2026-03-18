/*
 * XREFs of Feature_UnifiedMsNotification__private_IsEnabledFallback @ 0x140065C0C
 * Callers:
 *     Feature_UnifiedMsNotification__private_IsEnabledDeviceUsageNoInline @ 0x140065BD0 (Feature_UnifiedMsNotification__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1400646CC (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_UnifiedMsNotification__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&wil_details_featureDescriptors_a);
}
