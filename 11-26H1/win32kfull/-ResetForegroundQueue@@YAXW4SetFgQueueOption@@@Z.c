/*
 * XREFs of ?ResetForegroundQueue@@YAXW4SetFgQueueOption@@@Z @ 0x140271878
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x140271C80 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ClearForegroundQueue @ 0x1402728E0 (ClearForegroundQueue.c)
 *     zzzReattachThreads @ 0x140277664 (zzzReattachThreads.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _anonymous_namespace_::OnForegroundWindowChanged @ 0x14026D3B8 (_anonymous_namespace_--OnForegroundWindowChanged.c)
 */

__int64 __fastcall ResetForegroundQueue(__int64 a1, __int64 a2)
{
  char v2; // r14
  __int64 v3; // rdx
  __int64 v4; // rdi
  GroupedProcessForegroundBoost *v5; // rbx
  struct MOVESIZEDATA *v6; // rcx
  bool v7; // si
  bool v8; // bp
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 result; // rax

  v2 = a1;
  v4 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18928);
  if ( v4 )
    v5 = *(GroupedProcessForegroundBoost **)(v4 + 128);
  else
    v5 = 0LL;
  v6 = WPP_GLOBAL_Control;
  v7 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v3);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      2,
      86,
      (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids);
  }
  if ( (v2 & 1) != 0 )
    *(_QWORD *)(W32GetUserSessionState(v6, v3) + 18936) = v4;
  *(_QWORD *)(W32GetUserSessionState(v6, v3) + 18928) = 0LL;
  result = W32GetUserSessionState(v13, v12);
  *(_DWORD *)(result + 16308) = 0;
  if ( v5 )
    return anonymous_namespace_::OnForegroundWindowChanged(v5, 0LL);
  return result;
}
