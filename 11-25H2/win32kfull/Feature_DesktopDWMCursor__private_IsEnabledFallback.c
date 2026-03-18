/*
 * XREFs of Feature_DesktopDWMCursor__private_IsEnabledFallback @ 0x140269C6C
 * Callers:
 *     Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline @ 0x14026D970 (Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140269C88 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_DesktopDWMCursor__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_DesktopDWMCursor__private_descriptor);
}
