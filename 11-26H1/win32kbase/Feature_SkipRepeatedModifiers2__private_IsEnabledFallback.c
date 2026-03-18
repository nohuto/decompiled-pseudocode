/*
 * XREFs of Feature_SkipRepeatedModifiers2__private_IsEnabledFallback @ 0x14021CB10
 * Callers:
 *     Feature_SkipRepeatedModifiers2__private_IsEnabledDeviceUsageNoInline @ 0x14021CAD4 (Feature_SkipRepeatedModifiers2__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1400BCD84 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_SkipRepeatedModifiers2__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_SkipRepeatedModifiers2__private_descriptor);
}
