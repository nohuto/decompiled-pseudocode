/*
 * XREFs of ?UpdateProcessPriorityForSpinning@ForegroundBoost@@YAXPEAUtagTHREADINFO@@@Z @ 0x1401691E0
 * Callers:
 *     <none>
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass @ 0x140120934 (ForegroundBoost--_anonymous_namespace_--GetProcessPriorityByClass.c)
 *     ForegroundBoost::_anonymous_namespace_::SetForegroundPriorityProcess @ 0x140168CE4 (ForegroundBoost--_anonymous_namespace_--SetForegroundPriorityProcess.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall ForegroundBoost::UpdateProcessPriorityForSpinning(ForegroundBoost *this, struct tagTHREADINFO *a2)
{
  struct W32_PUSH_LOCK *v3; // r12
  __int64 v4; // r15
  __int16 v5; // ax
  __int64 v6; // r8
  int v7; // ecx
  __int64 v8; // rdx
  char v9; // di
  bool v10; // r14
  int v11; // ebx
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // r8
  int ProcessPriorityByClass; // eax
  __int64 v18; // rdx
  char v19; // bp
  bool v20; // r14
  int v21; // ebx
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx

  v3 = (struct W32_PUSH_LOCK *)(W32GetUserSessionState(this, a2) + 18856);
  W32AcquirePushLockExclusiveEx(v3, 0);
  v4 = *((_QWORD *)this + 58);
  v5 = _InterlockedCompareExchange((volatile signed __int32 *)this + 132, 0, 0);
  v6 = *((_QWORD *)this + 58);
  v7 = *(_DWORD *)(v6 + 12);
  if ( (v5 & 0x400) != 0 )
  {
    if ( (v7 & 0x800) == 0 )
    {
      v9 = 1;
      if ( (unsigned int)ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass(*((_QWORD *)this + 58)) == 1 )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
        {
          v9 = 0;
        }
        v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v11 = *(_DWORD *)(v4 + 56);
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
          LOBYTE(v13) = v10;
          LOBYTE(v14) = v9;
          WPP_RECORDER_AND_TRACE_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v14,
            v13,
            *(_QWORD *)(UserSessionState + 69144),
            4,
            13,
            16,
            (__int64)&WPP_9013cc159d3036d86bd9082f593c9e7a_Traceguids,
            v11);
        }
        ForegroundBoost::_anonymous_namespace_::SetForegroundPriorityProcess(v4, (__int64)this, 2u, 0);
      }
      *(_DWORD *)(*((_QWORD *)this + 58) + 12LL) |= 0x800u;
    }
  }
  else if ( (v7 & 0x800) != 0 )
  {
    v15 = *(_QWORD *)(v6 + 320);
    if ( v15 )
    {
      while ( (_InterlockedCompareExchange((volatile signed __int32 *)(v15 + 528), 0, 0) & 0x400) == 0 )
      {
        v15 = *(_QWORD *)(v15 + 704);
        if ( !v15 )
          goto LABEL_17;
      }
    }
    else
    {
LABEL_17:
      if ( (unsigned int)ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass(v4) )
      {
        ProcessPriorityByClass = ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass(v16);
        v18 = 2LL;
        if ( ProcessPriorityByClass != 2 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 472LL);
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0
          || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v19 = 0;
        }
        v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v21 = *(_DWORD *)(v4 + 56);
          v22 = W32GetUserSessionState(WPP_GLOBAL_Control, v18);
          LOBYTE(v23) = v20;
          LOBYTE(v24) = v19;
          WPP_RECORDER_AND_TRACE_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v24,
            v23,
            *(_QWORD *)(v22 + 69144),
            4,
            13,
            17,
            (__int64)&WPP_9013cc159d3036d86bd9082f593c9e7a_Traceguids,
            v21);
        }
        ForegroundBoost::_anonymous_namespace_::SetForegroundPriorityProcess(v4, (__int64)this, 1u, 0);
      }
      *(_DWORD *)(*((_QWORD *)this + 58) + 12LL) &= ~0x800u;
    }
  }
  W32ReleasePushLockExclusiveEx(v3, 0LL);
}
