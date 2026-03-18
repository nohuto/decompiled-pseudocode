/*
 * XREFs of Feature_Capture_ExpandCapturableWindows__private_IsEnabledFallback @ 0x1402289C0
 * Callers:
 *     Feature_Capture_ExpandCapturableWindows__private_IsEnabledDeviceUsageNoInline @ 0x140228984 (Feature_Capture_ExpandCapturableWindows__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1400BCD84 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Capture_ExpandCapturableWindows__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Capture_ExpandCapturableWindows__private_descriptor);
}
