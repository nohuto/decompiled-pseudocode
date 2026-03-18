/*
 * XREFs of ?SetNewForegroundQueue2@@YAXPEAUtagQ@@W4SetFgQueueOption@@@Z @ 0x1402787E8
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023C19C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     zzzReattachThreads @ 0x14023FD24 (zzzReattachThreads.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     EditionUpdateRawMouseMode @ 0x140121E10 (EditionUpdateRawMouseMode.c)
 *     _anonymous_namespace_::OnForegroundWindowChanged @ 0x14023A23C (_anonymous_namespace_--OnForegroundWindowChanged.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall SetNewForegroundQueue2(__int64 a1, __int64 a2)
{
  char v2; // r15
  GroupedProcessForegroundBoost *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rcx
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
  v6 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18888);
  if ( a1 == v6 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2604);
  v7 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
    || (v8 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v8 = 0;
  }
  v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v5);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      2,
      86,
      (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids);
  }
  if ( (v2 & 1) != 0 )
    *(_QWORD *)(W32GetUserSessionState(v7, v5) + 18896) = v6;
  *(_QWORD *)(W32GetUserSessionState(v7, v5) + 18888) = a1;
  result = EditionUpdateRawMouseMode(a1, v13);
  if ( (v2 & 2) != 0 )
    *(_DWORD *)(v6 + 412) |= 1u;
  if ( v6 )
    v4 = *(GroupedProcessForegroundBoost **)(v6 + 128);
  v15 = *(const struct tagWND **)(a1 + 128);
  if ( v4 != v15 )
    return anonymous_namespace_::OnForegroundWindowChanged(v4, v15);
  return result;
}
