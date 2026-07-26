/*
 * XREFs of Feature_NDPQualitySummer26__private_IsEnabledFallback @ 0x1400A4B9C
 * Callers:
 *     Feature_NDPQualitySummer26__private_IsEnabledDeviceUsageNoInline @ 0x1400A4B60 (Feature_NDPQualitySummer26__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14008D920 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_NDPQualitySummer26__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_NDPQualitySummer26__private_descriptor);
}
