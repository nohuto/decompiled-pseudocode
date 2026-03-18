/*
 * XREFs of Feature_HotKeyForegroundSwitchKbdFix__private_IsEnabledFallback @ 0x14027A16C
 * Callers:
 *     Feature_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsageNoInline @ 0x14027A134 (Feature_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140269C88 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_HotKeyForegroundSwitchKbdFix__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_HotKeyForegroundSwitchKbdFix__private_descriptor);
}
