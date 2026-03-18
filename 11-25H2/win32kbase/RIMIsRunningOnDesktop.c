/*
 * XREFs of RIMIsRunningOnDesktop @ 0x1400B29E8
 * Callers:
 *     RIMApiSetIsMouseDeviceOnIgnoreList @ 0x1400B1910 (RIMApiSetIsMouseDeviceOnIgnoreList.c)
 *     RIMApiSetValidateDeviceSignature @ 0x1400B25A8 (RIMApiSetValidateDeviceSignature.c)
 *     RIMApiSetSetUserPTPEnabledPreference @ 0x1400B2938 (RIMApiSetSetUserPTPEnabledPreference.c)
 *     RIMApiSetCheckForLegacyTouchPad @ 0x140180798 (RIMApiSetCheckForLegacyTouchPad.c)
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x140180A6C (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 *     ShouldEnableInputVirtualization @ 0x14018DC68 (ShouldEnableInputVirtualization.c)
 *     RIMOpenDev @ 0x1401D57E0 (RIMOpenDev.c)
 *     RIMCreatePointerDeviceInfo @ 0x1401E2528 (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E8734 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RIMIsRunningOnDesktop(__int64 a1, __int64 a2)
{
  return *(_DWORD *)(W32GetUserSessionState(a1, a2) + 36) == 3;
}
