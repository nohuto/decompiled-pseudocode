/*
 * XREFs of ?UpdateProcessPriorityForSpinning@ForegroundBoost@@YAXPEAUtagTHREADINFO@@@Z @ 0x14019CF70
 * Callers:
 *     <none>
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ForegroundBoost::_anonymous_namespace_::IsProcessBackground @ 0x1401630E0 (ForegroundBoost--_anonymous_namespace_--IsProcessBackground.c)
 *     ForegroundBoost::_anonymous_namespace_::IsProcessForegroundBoostedNoSpin @ 0x1401665C0 (ForegroundBoost--_anonymous_namespace_--IsProcessForegroundBoostedNoSpin.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass @ 0x1401D3B24 (ForegroundBoost--_anonymous_namespace_--GetProcessPriorityByClass.c)
 *     ForegroundBoost::_anonymous_namespace_::SetForegroundPriorityProcess @ 0x1401D4108 (ForegroundBoost--_anonymous_namespace_--SetForegroundPriorityProcess.c)
 */

void __fastcall ForegroundBoost::UpdateProcessPriorityForSpinning(
        ForegroundBoost *this,
        struct tagTHREADINFO *a2,
        int a3)
{
  struct W32_PUSH_LOCK *v4; // rbx
  __int64 v5; // r15
  __int16 v6; // ax
  __int64 v7; // rcx
  int v8; // edx
  int v9; // edx
  int v10; // r8d
  bool v11; // si
  bool v12; // bp
  int v13; // edi
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  __int64 i; // rcx
  int ProcessPriorityByClass; // eax
  int v19; // r8d
  int v20; // edx
  char v21; // bp
  bool v22; // r12
  int v23; // edi
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx

  v4 = (struct W32_PUSH_LOCK *)(W32GetUserSessionState((_DWORD)this, (_DWORD)a2, a3) + 18904);
  W32AcquirePushLockExclusiveEx(v4);
  v5 = *((_QWORD *)this + 57);
  v6 = _InterlockedCompareExchange((volatile signed __int32 *)this + 130, 0, 0);
  v7 = *((_QWORD *)this + 57);
  v8 = *(_DWORD *)(v7 + 12) & 0x800;
  if ( (v6 & 0x400) != 0 )
  {
    if ( !v8 )
    {
      if ( ForegroundBoost::_anonymous_namespace_::IsProcessForegroundBoostedNoSpin() )
      {
        v11 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v13 = *(_DWORD *)(v5 + 56);
          UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, v10);
          LOBYTE(v15) = v12;
          LOBYTE(v16) = v11;
          WPP_RECORDER_AND_TRACE_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v16,
            v15,
            *(_QWORD *)(UserSessionState + 69136),
            4,
            13,
            27,
            (__int64)&WPP_385c7bc0c4aa39805304af27af14d1cc_Traceguids,
            v13);
        }
        ForegroundBoost::_anonymous_namespace_::SetForegroundPriorityProcess(v5, 2LL, 0LL);
      }
      *(_DWORD *)(*((_QWORD *)this + 57) + 12LL) |= 0x800u;
    }
  }
  else if ( v8 )
  {
    for ( i = *(_QWORD *)(v7 + 328); i; i = *(_QWORD *)(i + 696) )
    {
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(i + 520), 0, 0) & 0x400) != 0 )
        goto LABEL_31;
    }
    if ( !ForegroundBoost::_anonymous_namespace_::IsProcessBackground() )
    {
      ProcessPriorityByClass = ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass(*((_QWORD *)this + 57));
      v20 = 2;
      if ( ProcessPriorityByClass != 2 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 883LL);
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0
        || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v21 = 0;
      }
      v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = *(_DWORD *)(v5 + 56);
        v24 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v20, v19);
        LOBYTE(v25) = v22;
        LOBYTE(v26) = v21;
        WPP_RECORDER_AND_TRACE_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v26,
          v25,
          *(_QWORD *)(v24 + 69136),
          4,
          13,
          28,
          (__int64)&WPP_385c7bc0c4aa39805304af27af14d1cc_Traceguids,
          v23);
      }
      ForegroundBoost::_anonymous_namespace_::SetForegroundPriorityProcess(v5, 1LL, 0LL);
    }
    *(_DWORD *)(*((_QWORD *)this + 57) + 12LL) &= ~0x800u;
  }
LABEL_31:
  W32ReleasePushLockExclusiveEx(v4);
}
