/*
 * XREFs of _anonymous_namespace_::OnForegroundWindowChanged @ 0x14023A23C
 * Callers:
 *     ?SetNewForegroundQueue@@YAXPEAUtagQ@@@Z @ 0x14023A398 (-SetNewForegroundQueue@@YAXPEAUtagQ@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x14023ABE8 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?ResetForegroundQueue@@YAXW4SetFgQueueOption@@@Z @ 0x1402786A8 (-ResetForegroundQueue@@YAXW4SetFgQueueOption@@@Z.c)
 *     ?SetNewForegroundQueue2@@YAXPEAUtagQ@@W4SetFgQueueOption@@@Z @ 0x1402787E8 (-SetNewForegroundQueue2@@YAXPEAUtagQ@@W4SetFgQueueOption@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400D897C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 */

__int64 __fastcall anonymous_namespace_::OnForegroundWindowChanged(
        GroupedProcessForegroundBoost *a1,
        const struct tagWND *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  char v6; // bp
  bool v7; // r12
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  __int64 result; // rax

  v4 = *(_QWORD *)&WPP_GLOBAL_Control;
  v5 = 0LL;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
    || (v6 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v6 = 0;
  }
  v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 0;
    if ( a2 )
      v8 = *(_QWORD *)a2;
    LOBYTE(v9) = 0;
    if ( a1 )
      v9 = *(_QWORD *)a1;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v11) = v7;
    LOBYTE(v12) = v6;
    WPP_RECORDER_AND_TRACE_SF_qq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      2,
      12,
      (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids,
      v9,
      v8);
  }
  if ( a1 )
  {
    GroupedProcessForegroundBoost::ApplyDeBoost(a1, a2);
    tagWND::ComputeDominantState(a1);
  }
  if ( a2 )
  {
    GroupedProcessForegroundBoost::ApplyBoost(a2, a2);
    tagWND::ComputeDominantState(a2);
    v5 = *(_QWORD *)a2;
  }
  result = W32GetUserSessionState(v4, a2);
  *(_QWORD *)(*(_QWORD *)(result + 19872) + 7648LL) = v5;
  return result;
}
