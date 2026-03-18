/*
 * XREFs of Feature_DisplayDitheringSupport__private_IsEnabledFallback @ 0x1401E03C4
 * Callers:
 *     Feature_DisplayDitheringSupport__private_IsEnabledDeviceUsageNoInline @ 0x1401E0388 (Feature_DisplayDitheringSupport__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1400BCD84 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_DisplayDitheringSupport__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_DisplayDitheringSupport__private_descriptor);
}
