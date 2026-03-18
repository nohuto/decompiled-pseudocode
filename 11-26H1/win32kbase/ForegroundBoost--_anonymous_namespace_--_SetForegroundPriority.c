/*
 * XREFs of ForegroundBoost::_anonymous_namespace_::_SetForegroundPriority @ 0x1401D47B0
 * Callers:
 *     ?SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x1400CCB40 (-SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4Fore.c)
 *     ?SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x1401A88F0 (-SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@W4ForegroundPriorityClass@1@W4For.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDdd @ 0x14014BE54 (WPP_RECORDER_AND_TRACE_SF_dDdd.c)
 *     ApiSetEditionProcessForegroundPriorityChanged @ 0x14015C750 (ApiSetEditionProcessForegroundPriorityChanged.c)
 *     ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass @ 0x1401D3B24 (ForegroundBoost--_anonymous_namespace_--GetProcessPriorityByClass.c)
 *     ForegroundBoost::_anonymous_namespace_::IsBoostAllowed @ 0x1401D3C04 (ForegroundBoost--_anonymous_namespace_--IsBoostAllowed.c)
 *     ForegroundBoost::_anonymous_namespace_::SetForegroundPriorityProcess @ 0x1401D4108 (ForegroundBoost--_anonymous_namespace_--SetForegroundPriorityProcess.c)
 */

char __fastcall ForegroundBoost::_anonymous_namespace_::_SetForegroundPriority(__int64 a1, int a2, int a3)
{
  unsigned int v3; // edi
  char v5; // bp
  int v6; // esi
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // r8d
  int ProcessPriorityByClass; // r12d
  char v11; // r15
  char v12; // r13
  __int64 UserSessionState; // rax
  int v14; // ebx
  __int64 v15; // rdx
  int v16; // edx
  int v17; // esi
  int v18; // r8d
  bool v19; // r15
  int v20; // ebx
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  char result; // al
  bool v28; // zf
  __int64 v29; // [rsp+20h] [rbp-78h]
  struct W32_PUSH_LOCK *v31; // [rsp+B8h] [rbp+20h]

  v3 = 0;
  v5 = 1;
  if ( a2 == 1 )
    v6 = ((*(_DWORD *)(a1 + 12) & 0x800) != 0) + 1;
  else
    v6 = 0;
  v31 = (struct W32_PUSH_LOCK *)(W32GetUserSessionState(a1, a2, a3) + 18904);
  W32AcquirePushLockExclusiveEx(v31);
  ProcessPriorityByClass = ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass(a1, v7);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0
    || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v11 = 0;
  }
  v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = a3;
  }
  else
  {
    UserSessionState = W32GetUserSessionState(v8, (_DWORD)WPP_GLOBAL_Control, v9);
    v14 = a3;
    WPP_RECORDER_AND_TRACE_SF_dDdd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v12,
      *(_QWORD *)(UserSessionState + 69136),
      v29,
      0xDu,
      0x10u,
      (__int64)&WPP_385c7bc0c4aa39805304af27af14d1cc_Traceguids);
  }
  ForegroundBoost::_anonymous_namespace_::SetForegroundPriorityProcess(a1, v6, v14);
  v17 = ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass(a1, v15);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v5 = 0;
  }
  v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = *(_DWORD *)(a1 + 56);
    v21 = W32GetUserSessionState((unsigned int)&WPP_GLOBAL_Control, v16, v18);
    LOBYTE(v22) = v19;
    LOBYTE(v23) = v5;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v23,
      v22,
      *(_QWORD *)(v21 + 69136),
      4,
      13,
      17,
      (__int64)&WPP_385c7bc0c4aa39805304af27af14d1cc_Traceguids,
      v20,
      v17);
  }
  W32ReleasePushLockExclusiveEx(v31);
  result = ForegroundBoost::_anonymous_namespace_::IsBoostAllowed(v25, v24, v26);
  if ( result && v17 != ProcessPriorityByClass )
  {
    v28 = v17 == 0;
    if ( v17 )
    {
      if ( ProcessPriorityByClass )
        return result;
      v28 = v17 == 0;
    }
    LOBYTE(v3) = !v28;
    return (unsigned __int8)ApiSetEditionProcessForegroundPriorityChanged(a1, v3);
  }
  return result;
}
