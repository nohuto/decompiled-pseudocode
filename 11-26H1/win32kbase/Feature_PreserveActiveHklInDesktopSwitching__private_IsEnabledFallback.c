/*
 * XREFs of Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledFallback @ 0x1401B5900
 * Callers:
 *     Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledDeviceUsageNoInline @ 0x1401B58C4 (Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1400BCD84 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_PreserveActiveHklInDesktopSwitching__private_descriptor);
}
