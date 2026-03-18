/*
 * XREFs of ?SetNewForegroundQueue@@YAXPEAUtagQ@@@Z @ 0x14023A398
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023C19C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ClearForegroundQueue @ 0x14023CFC0 (ClearForegroundQueue.c)
 *     zzzReattachThreads @ 0x14023FD24 (zzzReattachThreads.c)
 *     ?xxxNextWindow@@YAXPEAUtagQ@@K@Z @ 0x1402DCE18 (-xxxNextWindow@@YAXPEAUtagQ@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400D897C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     EditionUpdateRawMouseMode @ 0x140121E10 (EditionUpdateRawMouseMode.c)
 *     _anonymous_namespace_::OnForegroundWindowChanged @ 0x14023A23C (_anonymous_namespace_--OnForegroundWindowChanged.c)
 */

void __fastcall SetNewForegroundQueue(const struct tagWND **a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdi
  GroupedProcessForegroundBoost *v5; // rbp
  const struct tagWND *v6; // r14
  __int64 v7; // rcx
  bool v8; // si
  bool v9; // r15
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // rdx
  __int64 v14; // rcx

  v4 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18888);
  if ( v4 )
    v5 = *(GroupedProcessForegroundBoost **)(v4 + 128);
  else
    v5 = 0LL;
  if ( a1 )
    v6 = a1[16];
  else
    v6 = 0LL;
  v7 = *(_QWORD *)&WPP_GLOBAL_Control;
  v8 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v3);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_qq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      2,
      85,
      (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids,
      v4,
      (char)a1);
  }
  *(_QWORD *)(W32GetUserSessionState(v7, v3) + 18888) = a1;
  if ( a1 )
    EditionUpdateRawMouseMode((__int64)a1, v13);
  else
    *(_DWORD *)(W32GetUserSessionState(v14, v13) + 16316) = 0;
  anonymous_namespace_::OnForegroundWindowChanged(v5, v6);
}
