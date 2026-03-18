/*
 * XREFs of Feature_FixMouseCoalescing__private_IsEnabledFallback @ 0x140222CD0
 * Callers:
 *     Feature_FixMouseCoalescing__private_IsEnabledDeviceUsageNoInline @ 0x140222C98 (Feature_FixMouseCoalescing__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14013A604 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_FixMouseCoalescing__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_FixMouseCoalescing__private_descriptor);
}
