/*
 * XREFs of ForegroundBoost::_anonymous_namespace_::SetForegroundPriorityProcess @ 0x140168CE4
 * Callers:
 *     ?_SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@PEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x14009D1A0 (-_SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@PEBUtagTHREADINFO@@W4ForegroundP.c)
 *     ?UpdateProcessPriorityForSpinning@ForegroundBoost@@YAXPEAUtagTHREADINFO@@@Z @ 0x1401691E0 (-UpdateProcessPriorityForSpinning@ForegroundBoost@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass @ 0x140120934 (ForegroundBoost--_anonymous_namespace_--GetProcessPriorityByClass.c)
 *     ForegroundBoost::_anonymous_namespace_::CanAdjustPriority @ 0x140129B94 (ForegroundBoost--_anonymous_namespace_--CanAdjustPriority.c)
 *     ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClass @ 0x140168EE8 (ForegroundBoost--_anonymous_namespace_--SetProcessPriorityByClass.c)
 */

char __fastcall ForegroundBoost::_anonymous_namespace_::SetForegroundPriorityProcess(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  _UNKNOWN **v7; // rax
  __int64 v8; // rbp
  char v9; // bl
  __int64 v10; // rdx
  bool v11; // di
  bool v12; // bp
  int v13; // ebx
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  bool v17; // r14
  bool v18; // r15
  int v19; // ebx
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  char ProcessPriorityClass; // al
  __int64 v24; // rdx
  __int64 v25; // rdx

  if ( a2 )
  {
    LOBYTE(v7) = ForegroundBoost::_anonymous_namespace_::CanAdjustPriority(a2);
    if ( !(_BYTE)v7 )
      return (char)v7;
  }
  v8 = *(_QWORD *)a1;
  v9 = 0;
  if ( (*(_DWORD *)(a1 + 12) & 0x400000) != 0 )
  {
    if ( !(unsigned int)ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass(a1) )
    {
      v11 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v7 = &WPP_RECORDER_INITIALIZED;
      v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = *(_DWORD *)(a1 + 56);
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
        LOBYTE(v15) = v12;
        LOBYTE(v16) = v11;
        LOBYTE(v7) = WPP_RECORDER_AND_TRACE_SF_D(
                       *((_QWORD *)WPP_GLOBAL_Control + 3),
                       v16,
                       v15,
                       *(_QWORD *)(UserSessionState + 69144),
                       4,
                       13,
                       12,
                       (__int64)&WPP_9013cc159d3036d86bd9082f593c9e7a_Traceguids,
                       v13);
      }
      return (char)v7;
    }
    v17 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = *(_DWORD *)(a1 + 56);
      v20 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
      LOBYTE(v21) = v18;
      LOBYTE(v22) = v17;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v22,
        v21,
        *(_QWORD *)(v20 + 69144),
        4,
        13,
        13,
        (__int64)&WPP_9013cc159d3036d86bd9082f593c9e7a_Traceguids,
        v19);
    }
    a3 = 0;
    ProcessPriorityClass = PsGetProcessPriorityClass(v8);
    LOBYTE(v24) = 1;
    v9 = ProcessPriorityClass;
    PsSetProcessPriorityClass(v8, v24);
  }
  LOBYTE(v7) = ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClass(a1, a3, a4);
  if ( v9 )
  {
    LOBYTE(v25) = v9;
    LOBYTE(v7) = PsSetProcessPriorityClass(v8, v25);
  }
  return (char)v7;
}
