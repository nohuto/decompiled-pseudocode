/*
 * XREFs of Feature_Win32ProcessCapabilities__private_IsEnabledFallback @ 0x1401A72C8
 * Callers:
 *     Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x1401A7290 (Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14013A604 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Win32ProcessCapabilities__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Win32ProcessCapabilities__private_descriptor);
}
