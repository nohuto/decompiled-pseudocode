/*
 * XREFs of Feature_ForegroundOnDesktopSwitchEx__private_IsEnabledFallback @ 0x140288690
 * Callers:
 *     Feature_ForegroundOnDesktopSwitchEx__private_IsEnabledDeviceUsageNoInline @ 0x140288658 (Feature_ForegroundOnDesktopSwitchEx__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140269C88 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_ForegroundOnDesktopSwitchEx__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_ForegroundOnDesktopSwitchEx__private_descriptor);
}
