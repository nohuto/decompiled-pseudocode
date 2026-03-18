/*
 * XREFs of Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledFallback @ 0x1401D6128
 * Callers:
 *     Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline @ 0x1401D60EC (Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1400BCD84 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_ForceConnectionDetectionOnDcToAc__private_descriptor);
}
