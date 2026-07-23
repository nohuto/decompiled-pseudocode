/*
 * XREFs of Feature_1811147066__private_IsEnabledFallback @ 0x18013F1D4
 * Callers:
 *     Feature_1811147066__private_IsEnabledDeviceUsageNoInline @ 0x18013F1A0 (Feature_1811147066__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_1811147066__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_1811147066__private_descriptor);
}
