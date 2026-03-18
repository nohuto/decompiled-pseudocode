/*
 * XREFs of Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledFallback @ 0x1401E041C
 * Callers:
 *     Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline @ 0x1401E03E0 (Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1400BCD84 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_DolbyVisionAndUpdatedHdrUx__private_descriptor);
}
