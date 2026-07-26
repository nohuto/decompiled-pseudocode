/*
 * XREFs of Feature_3014440251__private_IsEnabledFallback @ 0x1400A60A8
 * Callers:
 *     Feature_3014440251__private_IsEnabledDeviceUsageNoInline @ 0x1400A606C (Feature_3014440251__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14008D920 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_3014440251__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_3014440251__private_descriptor);
}
