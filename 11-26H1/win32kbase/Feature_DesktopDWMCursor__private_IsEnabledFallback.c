/*
 * XREFs of Feature_DesktopDWMCursor__private_IsEnabledFallback @ 0x140242DE4
 * Callers:
 *     Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline @ 0x140242DA8 (Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1400BCD84 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_DesktopDWMCursor__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_DesktopDWMCursor__private_descriptor);
}
