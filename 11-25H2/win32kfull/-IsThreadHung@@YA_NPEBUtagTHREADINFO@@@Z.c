/*
 * XREFs of ?IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z @ 0x14014BCD0
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x1400C6220 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     ?WindowPosAndStateApplied@NotifyShell@@YAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z @ 0x14014B5A4 (-WindowPosAndStateApplied@NotifyShell@@YAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z.c)
 *     ?ShellHotKey@NotifyShell@@YA_NPEBUtagWND@@_J_KW4SHELLHOTKEYADDITIONACTIONRESULT@@@Z @ 0x14014B798 (-ShellHotKey@NotifyShell@@YA_NPEBUtagWND@@_J_KW4SHELLHOTKEYADDITIONACTIONRESULT@@@Z.c)
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x14014BB20 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x14014BC9C (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxSwitchToThisWindow@@YAHPEAUtagWND@@H@Z @ 0x14023CE88 (-xxxSwitchToThisWindow@@YAHPEAUtagWND@@H@Z.c)
 *     ?Execute@ShellHangDetection@@YAXXZ @ 0x14026C150 (-Execute@ShellHangDetection@@YAXXZ.c)
 *     ?xxxSwitchToThisWindowEx@@YAXPEAUtagWND@@W4SwitchToThisWindowOptions@@@Z @ 0x140279CB8 (-xxxSwitchToThisWindowEx@@YAXPEAUtagWND@@W4SwitchToThisWindowOptions@@@Z.c)
 *     NtUserGetWindowTrackInfoAsync @ 0x140299A90 (NtUserGetWindowTrackInfoAsync.c)
 * Callees:
 *     ?IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z @ 0x1402AE7F4 (-IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z.c)
 */

bool __fastcall IsThreadHung(const struct tagTHREADINFO *a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  return IsThreadHungTimeCheck(a1, *(_DWORD *)(UserSessionState + 69112));
}
