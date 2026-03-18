/*
 * XREFs of ?PushForegroundPolicy@CForegroundLaunch@@QEAAXPEAU_EPROCESS@@UtagProcessLaunchPolicy@@@Z @ 0x1402AA868
 * Callers:
 *     EditionPushProcessLaunchForegroundPolicyEx @ 0x1402AC9E0 (EditionPushProcessLaunchForegroundPolicyEx.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Ddd @ 0x14009A2FC (WPP_RECORDER_AND_TRACE_SF_Ddd.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB58C (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB5CC (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Add@PID_LAUNCH_POLICY@CForegroundLaunch@@QEAA?AW4AddEntryResult@2@PEAU_EPROCESS@@W4_PROCESS_LAUNCH_FOREGROUND_POLICY_INTERNAL@@W4LaunchBoostState@2@@Z @ 0x1402AA7CC (-Add@PID_LAUNCH_POLICY@CForegroundLaunch@@QEAA-AW4AddEntryResult@2@PEAU_EPROCESS@@W4_PROCESS_LAU.c)
 */

void __fastcall CForegroundLaunch::PushForegroundPolicy(__int64 a1, struct _KPROCESS *a2, __int64 a3)
{
  char v3; // r14
  int v4; // ebx
  __int64 v7; // rdx
  bool v8; // di
  bool v9; // bl
  __int64 v10; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // rcx
  char v14; // di
  BOOL v15; // eax
  bool v16; // r15
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  unsigned int v20; // r14d
  int v21; // eax
  __int64 v22; // rdx
  bool v23; // bl
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  bool v27; // r14
  bool v28; // r15
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  bool v32; // bl
  bool v33; // si
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  __int64 ProcessWin32Process; // rax
  __int64 v38; // rcx
  int v40; // [rsp+C4h] [rbp+1Ch]
  char ProcessId; // [rsp+C8h] [rbp+20h]

  v40 = HIDWORD(a3);
  v3 = 0;
  v4 = a3;
  if ( !(_DWORD)a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 254);
  if ( v4 == 4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 255);
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1, 0);
  if ( *(_BYTE *)(a1 + 440) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 260);
  if ( *(_BYTE *)(a1 + 416) )
  {
    ProcessId = (unsigned __int8)PsGetProcessId(a2);
    v14 = 1;
    v15 = v40 == 1;
    if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control )
    {
      v13 = *((unsigned int *)WPP_GLOBAL_Control + 11);
      if ( (v13 & 2) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
        v3 = 1;
    }
    v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(v13, WPP_GLOBAL_Control);
      LOBYTE(v18) = v16;
      LOBYTE(v19) = v3;
      WPP_RECORDER_AND_TRACE_SF_Ddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v18,
        *(_QWORD *)(UserSessionState + 69152),
        4,
        2,
        11,
        (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
        ProcessId,
        v4,
        v40);
      v15 = v40 == 1;
    }
    v20 = 0;
    while ( 1 )
    {
      v21 = CForegroundLaunch::PID_LAUNCH_POLICY::Add(a1 + 32 * (v20 + 3LL), a2, v4, v15);
      if ( v21 == 2 )
      {
LABEL_27:
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
        {
          v14 = 0;
        }
        v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v24 = W32GetUserSessionState(WPP_GLOBAL_Control, v22);
          LOBYTE(v25) = v23;
          LOBYTE(v26) = v14;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v26,
            v25,
            *(_QWORD *)(v24 + 69152),
            3,
            2,
            14,
            (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
            ProcessId);
        }
        goto LABEL_34;
      }
      if ( v21 != 1 )
        break;
      v15 = v40 == 1;
      if ( ++v20 >= 0xA )
        goto LABEL_27;
    }
    v27 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v27 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v29 = W32GetUserSessionState(WPP_GLOBAL_Control, v22);
      LOBYTE(v30) = v28;
      LOBYTE(v31) = v27;
      WPP_RECORDER_AND_TRACE_SF_Ddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v31,
        v30,
        *(_QWORD *)(v29 + 69152),
        4,
        2,
        12,
        (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
        ProcessId,
        v4,
        v40);
    }
    if ( v40 == 1 )
    {
      v32 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v33 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v32 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v34 = W32GetUserSessionState(WPP_GLOBAL_Control, v22);
        LOBYTE(v35) = v33;
        LOBYTE(v36) = v32;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v36,
          v35,
          *(_QWORD *)(v34 + 69152),
          4,
          2,
          13,
          (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
          ProcessId);
      }
      ProcessWin32Process = PsGetProcessWin32Process(a2);
      v38 = ProcessWin32Process;
      if ( ProcessWin32Process )
        v38 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process;
      ForegroundBoost::SetForegroundPriority(v38, 1LL, 1LL);
    }
  }
  else
  {
    v8 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v10 = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v8;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v11,
        *(_QWORD *)(v10 + 69152),
        3,
        2,
        10,
        (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids);
    }
  }
LABEL_34:
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1, 0LL);
}
