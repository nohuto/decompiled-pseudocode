/*
 * XREFs of Feature_766733627__private_IsEnabledFallback @ 0x1401E0314
 * Callers:
 *     Feature_766733627__private_IsEnabledDeviceUsageNoInline @ 0x1401E02D8 (Feature_766733627__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1400BCD84 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_766733627__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_766733627__private_descriptor);
}
