/*
 * XREFs of Feature_1251264824__private_IsEnabledFallback @ 0x14030F40C
 * Callers:
 *     Feature_1251264824__private_IsEnabledDeviceUsageNoInline @ 0x14030F3D4 (Feature_1251264824__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140269C88 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_1251264824__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_1251264824__private_descriptor);
}
