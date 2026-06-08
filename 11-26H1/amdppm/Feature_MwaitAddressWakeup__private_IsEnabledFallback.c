/*
 * XREFs of Feature_MwaitAddressWakeup__private_IsEnabledFallback @ 0x140003DAC
 * Callers:
 *     Feature_MwaitAddressWakeup__private_IsEnabledDeviceUsageNoInline @ 0x140003D70 (Feature_MwaitAddressWakeup__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1400045F8 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_MwaitAddressWakeup__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &wil_details_featureDescriptors_a);
}
