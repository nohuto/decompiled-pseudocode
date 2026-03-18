/*
 * XREFs of ?IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z @ 0x140046FE4
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x14003BDE8 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x140046B68 (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     _anonymous_namespace_::NotifyPartExit @ 0x140046D64 (_anonymous_namespace_--NotifyPartExit.c)
 *     xxxInterSendMsgEx @ 0x140051EE4 (xxxInterSendMsgEx.c)
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1401D6BB8 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     ?ShellHotKey@NotifyShell@@YA_NPEBUtagWND@@_J_KW4SHELLHOTKEYADDITIONACTIONRESULT@@@Z @ 0x14025D948 (-ShellHotKey@NotifyShell@@YA_NPEBUtagWND@@_J_KW4SHELLHOTKEYADDITIONACTIONRESULT@@@Z.c)
 *     ?WindowPosAndStateApplied@NotifyShell@@YAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z @ 0x140265DD0 (-WindowPosAndStateApplied@NotifyShell@@YAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z.c)
 *     ?Execute@ShellHangDetection@@YAXXZ @ 0x140289468 (-Execute@ShellHangDetection@@YAXXZ.c)
 *     ?xxxSwitchToThisWindow@@YAXPEAUtagWND@@W4SwitchToThisWindowOptions@@@Z @ 0x14029D7A0 (-xxxSwitchToThisWindow@@YAXPEAUtagWND@@W4SwitchToThisWindowOptions@@@Z.c)
 *     NtUserGetWindowTrackInfoAsync @ 0x1402B5D30 (NtUserGetWindowTrackInfoAsync.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall IsThreadHung(const struct tagTHREADINFO *a1, __int64 a2)
{
  char v3; // bl
  unsigned int v4; // esi
  __int64 v5; // rdx

  v3 = 0;
  v4 = *(_DWORD *)(W32GetUserSessionState(a1, a2) + 69104);
  if ( !v4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 271LL);
  v5 = *((_QWORD *)a1 + 60);
  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
     - *(_DWORD *)(v5 + 20) > v4
    && (*(_DWORD *)(v5 + 16) & 0x1C07) == 0
    && !(unsigned int)PsGetThreadFreezeCount(*(_QWORD *)a1)
    && (*(_DWORD *)(*((_QWORD *)a1 + 57) + 12LL) & 0x40) == 0 )
  {
    return 1;
  }
  return v3;
}
