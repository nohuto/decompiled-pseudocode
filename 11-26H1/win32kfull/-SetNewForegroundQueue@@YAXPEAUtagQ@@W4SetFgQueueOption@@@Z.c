/*
 * XREFs of ?SetNewForegroundQueue@@YAXPEAUtagQ@@W4SetFgQueueOption@@@Z @ 0x14029D3F8
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x140271C80 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     zzzReattachThreads @ 0x140277664 (zzzReattachThreads.c)
 * Callees:
 *     EditionUpdateRawMouseMode @ 0x1400548C0 (EditionUpdateRawMouseMode.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _anonymous_namespace_::OnForegroundWindowChanged @ 0x14026D3B8 (_anonymous_namespace_--OnForegroundWindowChanged.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall SetNewForegroundQueue(__int64 a1, __int64 a2)
{
  char v2; // r15
  GroupedProcessForegroundBoost *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rdi
  struct MOVESIZEDATA *v7; // rcx
  char v8; // bp
  bool v9; // r14
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // rdx
  __int64 result; // rax
  const struct tagWND *v15; // rdx

  v2 = a2;
  v4 = 0LL;
  v6 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18928);
  if ( a1 == v6 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2545);
  v7 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v8 = 0;
  }
  v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v5);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      2,
      85,
      (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids);
  }
  if ( (v2 & 1) != 0 )
    *(_QWORD *)(W32GetUserSessionState(v7, v5) + 18936) = v6;
  *(_QWORD *)(W32GetUserSessionState(v7, v5) + 18928) = a1;
  result = EditionUpdateRawMouseMode(a1, v13);
  if ( (v2 & 2) != 0 )
    *(_DWORD *)(v6 + 436) |= 1u;
  if ( v6 )
    v4 = *(GroupedProcessForegroundBoost **)(v6 + 128);
  v15 = *(const struct tagWND **)(a1 + 128);
  if ( v4 != v15 )
    return anonymous_namespace_::OnForegroundWindowChanged(v4, v15);
  return result;
}
