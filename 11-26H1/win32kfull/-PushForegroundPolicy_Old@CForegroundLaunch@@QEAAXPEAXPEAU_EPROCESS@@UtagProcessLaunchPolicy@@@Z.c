/*
 * XREFs of ?PushForegroundPolicy_Old@CForegroundLaunch@@QEAAXPEAXPEAU_EPROCESS@@UtagProcessLaunchPolicy@@@Z @ 0x1402AACDC
 * Callers:
 *     EditionPushProcessLaunchForegroundPolicy @ 0x140245740 (EditionPushProcessLaunchForegroundPolicy.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Ddd @ 0x14009A2FC (WPP_RECORDER_AND_TRACE_SF_Ddd.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB58C (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB5CC (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Add@PID_LAUNCH_POLICY@CForegroundLaunch@@QEAA?AW4AddEntryResult@2@PEAU_EPROCESS@@W4_PROCESS_LAUNCH_FOREGROUND_POLICY_INTERNAL@@W4LaunchBoostState@2@@Z @ 0x1402AA7CC (-Add@PID_LAUNCH_POLICY@CForegroundLaunch@@QEAA-AW4AddEntryResult@2@PEAU_EPROCESS@@W4_PROCESS_LAU.c)
 */

void __fastcall CForegroundLaunch::PushForegroundPolicy_Old(__int64 a1, char a2, struct _KPROCESS *a3, __int64 a4)
{
  char v4; // r14
  int v5; // ebx
  __int64 v7; // rdx
  bool v8; // di
  bool v9; // bl
  __int64 v10; // rax
  int v11; // r8d
  int v12; // edx
  char v13; // di
  _BOOL8 v14; // rdx
  bool v15; // r15
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  unsigned int v19; // r14d
  int v20; // eax
  bool v21; // bl
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  bool v25; // r14
  bool v26; // r15
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  bool v30; // bl
  bool v31; // si
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  __int64 ProcessWin32Process; // rax
  __int64 v36; // rcx
  int v39; // [rsp+CCh] [rbp+24h]

  v39 = HIDWORD(a4);
  v4 = 0;
  v5 = a4;
  if ( !(_DWORD)a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 329);
  if ( v5 == 4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 330);
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1, 0);
  if ( *(_BYTE *)(a1 + 440) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 335);
  if ( *(_BYTE *)(a1 + 416) )
  {
    v13 = 1;
    v14 = v39 == 1;
    if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    {
      v4 = 1;
    }
    v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
      LOBYTE(v17) = v15;
      LOBYTE(v18) = v4;
      WPP_RECORDER_AND_TRACE_SF_Ddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v18,
        v17,
        *(_QWORD *)(UserSessionState + 69152),
        4,
        2,
        16,
        (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
        a2,
        v5,
        v39);
      LODWORD(v14) = v39 == 1;
    }
    v19 = 0;
    while ( 1 )
    {
      v20 = CForegroundLaunch::PID_LAUNCH_POLICY::Add(a1 + 32 * (v19 + 3LL), a3, v5, v14);
      if ( v20 == 2 )
      {
LABEL_27:
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
        {
          v13 = 0;
        }
        v21 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v13 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v22 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
          LOBYTE(v23) = v21;
          LOBYTE(v24) = v13;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v24,
            v23,
            *(_QWORD *)(v22 + 69152),
            3,
            2,
            19,
            (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
            a2);
        }
        goto LABEL_34;
      }
      if ( v20 != 1 )
        break;
      v14 = v39 == 1;
      if ( ++v19 >= 0xA )
        goto LABEL_27;
    }
    v25 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v25 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v27 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
      LOBYTE(v28) = v26;
      LOBYTE(v29) = v25;
      WPP_RECORDER_AND_TRACE_SF_Ddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v29,
        v28,
        *(_QWORD *)(v27 + 69152),
        4,
        2,
        17,
        (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
        a2,
        v5,
        v39);
    }
    if ( v39 == 1 )
    {
      v30 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v31 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v30 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v32 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
        LOBYTE(v33) = v31;
        LOBYTE(v34) = v30;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v34,
          v33,
          *(_QWORD *)(v32 + 69152),
          4,
          2,
          18,
          (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
          a2);
      }
      ProcessWin32Process = PsGetProcessWin32Process(a3);
      v36 = ProcessWin32Process;
      if ( ProcessWin32Process )
        v36 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process;
      ForegroundBoost::SetForegroundPriority(v36, 1LL, 1LL);
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
        15,
        (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids);
    }
  }
LABEL_34:
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1, 0LL);
}
