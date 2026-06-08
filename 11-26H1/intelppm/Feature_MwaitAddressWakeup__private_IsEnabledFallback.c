/*
 * XREFs of Feature_MwaitAddressWakeup__private_IsEnabledFallback @ 0x140007DEC
 * Callers:
 *     Feature_MwaitAddressWakeup__private_IsEnabledDeviceUsageNoInline @ 0x140007DB0 (Feature_MwaitAddressWakeup__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1400057B8 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_MwaitAddressWakeup__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_MwaitAddressWakeup__private_descriptor);
}
