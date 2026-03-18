/*
 * XREFs of ?ResetForegroundQueue@@YAXW4SetFgQueueOption@@@Z @ 0x1402786A8
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023C19C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ClearForegroundQueue @ 0x14023CFC0 (ClearForegroundQueue.c)
 *     zzzReattachThreads @ 0x14023FD24 (zzzReattachThreads.c)
 *     ?xxxNextWindow@@YAXPEAUtagQ@@K@Z @ 0x1402DCE18 (-xxxNextWindow@@YAXPEAUtagQ@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _anonymous_namespace_::OnForegroundWindowChanged @ 0x14023A23C (_anonymous_namespace_--OnForegroundWindowChanged.c)
 */

__int64 __fastcall ResetForegroundQueue(__int64 a1, __int64 a2)
{
  char v2; // r14
  __int64 v3; // rdx
  __int64 v4; // rdi
  GroupedProcessForegroundBoost *v5; // rbx
  __int64 v6; // rcx
  bool v7; // si
  bool v8; // bp
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 result; // rax

  v2 = a1;
  v4 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18888);
  if ( v4 )
    v5 = *(GroupedProcessForegroundBoost **)(v4 + 128);
  else
    v5 = 0LL;
  v6 = *(_QWORD *)&WPP_GLOBAL_Control;
  v7 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v3);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      2,
      87,
      (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids);
  }
  if ( (v2 & 1) != 0 )
    *(_QWORD *)(W32GetUserSessionState(v6, v3) + 18896) = v4;
  *(_QWORD *)(W32GetUserSessionState(v6, v3) + 18888) = 0LL;
  result = W32GetUserSessionState(v13, v12);
  *(_DWORD *)(result + 16316) = 0;
  if ( v5 )
    return anonymous_namespace_::OnForegroundWindowChanged(v5, 0LL);
  return result;
}
