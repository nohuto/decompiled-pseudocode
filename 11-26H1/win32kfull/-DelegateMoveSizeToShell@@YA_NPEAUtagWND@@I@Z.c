/*
 * XREFs of ?DelegateMoveSizeToShell@@YA_NPEAUtagWND@@I@Z @ 0x1402D0DB8
 * Callers:
 *     xxxSysCommand @ 0x1402D135C (xxxSysCommand.c)
 * Callees:
 *     _GetMessagePos @ 0x1401C790C (_GetMessagePos.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?PostButtonUpToWindowForIntercept@@YAXPEAUtagWND@@@Z @ 0x1402D0F94 (-PostButtonUpToWindowForIntercept@@YAXPEAUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_sqddd @ 0x1402D1198 (WPP_RECORDER_AND_TRACE_SF_sqddd.c)
 *     DwmAsyncNotifyWindowMoveSizeIntercepted @ 0x1403470E4 (DwmAsyncNotifyWindowMoveSizeIntercepted.c)
 */

char __fastcall DelegateMoveSizeToShell(struct tagWND *a1, __int64 a2)
{
  int v3; // r8d
  __int64 v4; // rcx
  int MessagePos; // eax
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v7; // rdx
  struct MOVESIZEDATA *v8; // rcx
  char v9; // di
  bool v10; // bp
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  void *v14; // rax
  int v16; // [rsp+A0h] [rbp+18h] BYREF
  int v17; // [rsp+A4h] [rbp+1Ch]

  if ( (unsigned int)(a2 - 1) > 8 )
    return 0;
  v3 = 2;
  if ( (_DWORD)a2 != 9 )
    v3 = 4;
  if ( (v3 & *((_DWORD *)a1 + 97)) != v3 )
    return 0;
  v4 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19176);
  if ( (*(_DWORD *)(v4 + 48) & 0x400) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 361);
  MessagePos = GetMessagePos(v4);
  v17 = SHIWORD(MessagePos);
  v16 = (__int16)MessagePos;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext((unsigned int)(__int16)MessagePos);
  LogicalToPhysicalDPIPoint(&v16, &v16, CurrentThreadDpiAwarenessContext, 0LL);
  v8 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v9 = 0;
  }
  v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
    LOBYTE(v12) = v10;
    LOBYTE(v13) = v9;
    WPP_RECORDER_AND_TRACE_SF_sqddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 69152));
  }
  v14 = (void *)ReferenceDwmApiPort(v8, v7);
  DwmAsyncNotifyWindowMoveSizeIntercepted(v14);
  PostButtonUpToWindowForIntercept(a1);
  ForceCapture(3LL);
  return 1;
}
