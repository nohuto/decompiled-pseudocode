/*
 * XREFs of Feature_ScalarMultiplierForBrightness__private_IsEnabledFallback @ 0x1401E0490
 * Callers:
 *     Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline @ 0x140177A2C (Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1400BCD84 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_ScalarMultiplierForBrightness__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_ScalarMultiplierForBrightness__private_descriptor);
}
