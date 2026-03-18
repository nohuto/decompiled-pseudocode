/*
 * XREFs of ForegroundBoost::_anonymous_namespace_::SetForegroundPriorityProcess @ 0x1401D4108
 * Callers:
 *     ?UpdateProcessPriorityForSpinning@ForegroundBoost@@YAXPEAUtagTHREADINFO@@@Z @ 0x14019CF70 (-UpdateProcessPriorityForSpinning@ForegroundBoost@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ForegroundBoost::_anonymous_namespace_::_SetForegroundPriority @ 0x1401D47B0 (ForegroundBoost--_anonymous_namespace_--_SetForegroundPriority.c)
 *     ForegroundBoost::_anonymous_namespace_::_SetForegroundPriority_Old @ 0x1401D49C4 (ForegroundBoost--_anonymous_namespace_--_SetForegroundPriority_Old.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ForegroundBoost::_anonymous_namespace_::IsProcessBackground @ 0x1401630E0 (ForegroundBoost--_anonymous_namespace_--IsProcessBackground.c)
 *     ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClass @ 0x1401A8944 (ForegroundBoost--_anonymous_namespace_--SetProcessPriorityByClass.c)
 */

char __fastcall ForegroundBoost::_anonymous_namespace_::SetForegroundPriorityProcess(__int64 a1, int a2, int a3)
{
  __int64 v3; // r14
  char v4; // bl
  int v8; // edx
  int v9; // r8d
  bool v10; // di
  _UNKNOWN **v11; // rax
  bool v12; // bp
  int v13; // ebx
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  bool v17; // bp
  bool v18; // r15
  int v19; // ebx
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  char ProcessPriorityClass; // al
  __int64 v24; // rdx
  __int64 v25; // rdx

  v3 = *(_QWORD *)a1;
  v4 = 0;
  if ( (*(_DWORD *)(a1 + 12) & 0x400000) != 0 )
  {
    if ( ForegroundBoost::_anonymous_namespace_::IsProcessBackground() )
    {
      v10 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v11 = &WPP_RECORDER_INITIALIZED;
      v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = *(_DWORD *)(a1 + 56);
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v8, v9);
        LOBYTE(v15) = v12;
        LOBYTE(v16) = v10;
        LOBYTE(v11) = WPP_RECORDER_AND_TRACE_SF_D(
                        *((_QWORD *)WPP_GLOBAL_Control + 3),
                        v16,
                        v15,
                        *(_QWORD *)(UserSessionState + 69136),
                        4,
                        13,
                        14,
                        (__int64)&WPP_385c7bc0c4aa39805304af27af14d1cc_Traceguids,
                        v13);
      }
      return (char)v11;
    }
    v17 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = *(_DWORD *)(a1 + 56);
      v20 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v8, v9);
      LOBYTE(v21) = v18;
      LOBYTE(v22) = v17;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v22,
        v21,
        *(_QWORD *)(v20 + 69136),
        4,
        13,
        15,
        (__int64)&WPP_385c7bc0c4aa39805304af27af14d1cc_Traceguids,
        v19);
    }
    a2 = 0;
    ProcessPriorityClass = PsGetProcessPriorityClass(v3);
    LOBYTE(v24) = 1;
    v4 = ProcessPriorityClass;
    PsSetProcessPriorityClass(v3, v24);
  }
  LOBYTE(v11) = ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClass((__int64 *)a1, a2, a3);
  if ( v4 )
  {
    LOBYTE(v25) = v4;
    LOBYTE(v11) = PsSetProcessPriorityClass(v3, v25);
  }
  return (char)v11;
}
