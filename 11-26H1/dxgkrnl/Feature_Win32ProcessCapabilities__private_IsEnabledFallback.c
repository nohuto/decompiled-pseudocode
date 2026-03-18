/*
 * XREFs of Feature_Win32ProcessCapabilities__private_IsEnabledFallback @ 0x1400677B0
 * Callers:
 *     Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x14005CD8C (Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140067A54 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Win32ProcessCapabilities__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Win32ProcessCapabilities__private_descriptor);
}
