/*
 * XREFs of Feature_RestrictedFlagUpdate__private_IsEnabledFallback @ 0x1401CE830
 * Callers:
 *     Feature_RestrictedFlagUpdate__private_IsEnabledDeviceUsageNoInline @ 0x1401CE7F4 (Feature_RestrictedFlagUpdate__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1400BCD84 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_RestrictedFlagUpdate__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_RestrictedFlagUpdate__private_descriptor);
}
