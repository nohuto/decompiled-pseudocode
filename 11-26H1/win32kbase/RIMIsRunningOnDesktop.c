/*
 * XREFs of RIMIsRunningOnDesktop @ 0x1400F0800
 * Callers:
 *     RIMOpenDev @ 0x1400944B4 (RIMOpenDev.c)
 *     RIMApiSetCheckForLegacyTouchPad @ 0x1400EE6CC (RIMApiSetCheckForLegacyTouchPad.c)
 *     RIMApiSetValidateDeviceSignature @ 0x1400EE9C4 (RIMApiSetValidateDeviceSignature.c)
 *     RIMApiSetIsMouseDeviceOnIgnoreList @ 0x1400EEEBC (RIMApiSetIsMouseDeviceOnIgnoreList.c)
 *     RIMApiSetSetUserPTPEnabledPreference @ 0x1400F074C (RIMApiSetSetUserPTPEnabledPreference.c)
 *     RIMCreatePointerDeviceInfo @ 0x14012EC08 (RIMCreatePointerDeviceInfo.c)
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1401546A0 (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x140207AC4 (RIMIDECreatePointerDeviceInfo.c)
 *     ShouldEnableInputVirtualization @ 0x14021FC0C (ShouldEnableInputVirtualization.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RIMIsRunningOnDesktop(int a1, int a2, int a3)
{
  return *(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 36) == 3;
}
