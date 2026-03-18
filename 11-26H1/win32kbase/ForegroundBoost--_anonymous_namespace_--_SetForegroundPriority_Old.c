/*
 * XREFs of ForegroundBoost::_anonymous_namespace_::_SetForegroundPriority_Old @ 0x1401D49C4
 * Callers:
 *     ?SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x1400CCB40 (-SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4Fore.c)
 *     ?SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x1401A88F0 (-SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@W4ForegroundPriorityClass@1@W4For.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDdd @ 0x14014BE54 (WPP_RECORDER_AND_TRACE_SF_dDdd.c)
 *     ApiSetEditionProcessForegroundPriorityChanged @ 0x14015C750 (ApiSetEditionProcessForegroundPriorityChanged.c)
 *     ForegroundBoost::_anonymous_namespace_::CanAdjustPriority @ 0x1401D3798 (ForegroundBoost--_anonymous_namespace_--CanAdjustPriority.c)
 *     ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass @ 0x1401D3B24 (ForegroundBoost--_anonymous_namespace_--GetProcessPriorityByClass.c)
 *     ForegroundBoost::_anonymous_namespace_::SetForegroundPriorityProcess @ 0x1401D4108 (ForegroundBoost--_anonymous_namespace_--SetForegroundPriorityProcess.c)
 */

void __fastcall ForegroundBoost::_anonymous_namespace_::_SetForegroundPriority_Old(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4)
{
  unsigned int v4; // edi
  __int64 v5; // rbx
  char v7; // bp
  int v8; // esi
  struct W32_PUSH_LOCK *v9; // r12
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // r8d
  int ProcessPriorityByClass; // r13d
  char v14; // r15
  __int64 UserSessionState; // rax
  __int64 v16; // rdx
  int v17; // edx
  int v18; // esi
  int v19; // r8d
  bool v20; // r15
  int v21; // ebx
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  bool v25; // zf
  __int64 v26; // [rsp+20h] [rbp-78h]
  char v28; // [rsp+B0h] [rbp+18h]

  v4 = 0;
  v5 = a2;
  v7 = 1;
  if ( a3 == 1 )
    v8 = ((*(_DWORD *)(a1 + 12) & 0x800) != 0) + 1;
  else
    v8 = 0;
  v9 = (struct W32_PUSH_LOCK *)(W32GetUserSessionState(a1, a2, a3) + 18904);
  W32AcquirePushLockExclusiveEx(v9);
  ProcessPriorityByClass = ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass(a1, v10);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0
    || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v14 = 0;
  }
  v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(v11, (_DWORD)WPP_GLOBAL_Control, v12);
    WPP_RECORDER_AND_TRACE_SF_dDdd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v14,
      v28,
      *(_QWORD *)(UserSessionState + 69136),
      v26,
      0xDu,
      0x12u,
      (__int64)&WPP_385c7bc0c4aa39805304af27af14d1cc_Traceguids);
    v5 = a2;
  }
  if ( v5 && !ForegroundBoost::_anonymous_namespace_::CanAdjustPriority(v5) )
  {
    W32ReleasePushLockExclusiveEx(v9);
    return;
  }
  ForegroundBoost::_anonymous_namespace_::SetForegroundPriorityProcess(a1, v8, a4);
  v18 = ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass(a1, v16);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v7 = 0;
  }
  v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = *(_DWORD *)(a1 + 56);
    v22 = W32GetUserSessionState((unsigned int)&WPP_GLOBAL_Control, v17, v19);
    LOBYTE(v23) = v20;
    LOBYTE(v24) = v7;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v24,
      v23,
      *(_QWORD *)(v22 + 69136),
      4,
      13,
      19,
      (__int64)&WPP_385c7bc0c4aa39805304af27af14d1cc_Traceguids,
      v21,
      v18);
  }
  W32ReleasePushLockExclusiveEx(v9);
  if ( v18 != ProcessPriorityByClass )
  {
    v25 = v18 == 0;
    if ( v18 )
    {
      if ( ProcessPriorityByClass )
        return;
      v25 = v18 == 0;
    }
    LOBYTE(v4) = !v25;
    ApiSetEditionProcessForegroundPriorityChanged(a1, v4);
  }
}
