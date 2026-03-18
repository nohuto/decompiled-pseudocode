/*
 * XREFs of Feature_DolbyVisionForcePresent__private_IsEnabledFallback @ 0x1401D60D0
 * Callers:
 *     Feature_DolbyVisionForcePresent__private_IsEnabledDeviceUsageNoInline @ 0x1401D6094 (Feature_DolbyVisionForcePresent__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1400BCD84 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_DolbyVisionForcePresent__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_DolbyVisionForcePresent__private_descriptor);
}
