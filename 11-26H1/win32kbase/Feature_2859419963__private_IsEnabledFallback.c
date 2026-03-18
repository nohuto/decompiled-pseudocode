/*
 * XREFs of Feature_2859419963__private_IsEnabledFallback @ 0x14022B224
 * Callers:
 *     Feature_2859419963__private_IsEnabledDeviceUsageNoInline @ 0x14022B1E8 (Feature_2859419963__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1400BCD84 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_2859419963__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_2859419963__private_descriptor);
}
