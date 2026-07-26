/*
 * XREFs of Feature_NDPSfiSpring2026__private_IsEnabledFallback @ 0x1400A1FCC
 * Callers:
 *     Feature_NDPSfiSpring2026__private_IsEnabledDeviceUsageNoInline @ 0x1400A1F90 (Feature_NDPSfiSpring2026__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14008D920 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_NDPSfiSpring2026__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_NDPSfiSpring2026__private_descriptor);
}
