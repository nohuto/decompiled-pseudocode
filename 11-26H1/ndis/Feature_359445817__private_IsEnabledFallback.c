/*
 * XREFs of Feature_359445817__private_IsEnabledFallback @ 0x1400A6100
 * Callers:
 *     Feature_359445817__private_IsEnabledDeviceUsageNoInline @ 0x1400A60C4 (Feature_359445817__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14008D920 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_359445817__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_359445817__private_descriptor);
}
