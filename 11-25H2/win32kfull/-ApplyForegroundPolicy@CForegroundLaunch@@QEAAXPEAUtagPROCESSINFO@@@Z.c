/*
 * XREFs of ?ApplyForegroundPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1401D9F64
 * Callers:
 *     EditionApplyForegroundPolicyStartingApp @ 0x1401D9F30 (EditionApplyForegroundPolicyStartingApp.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140121A70 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140121C48 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x14014D250 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_sD @ 0x1401A4C78 (WPP_RECORDER_AND_TRACE_SF_sD.c)
 *     ?GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x1402267F0 (-GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?_AppStarting_Set@CForegroundLaunch@@AEAAXPEAUtagPROCESSINFO@@@Z @ 0x14028F7C8 (-_AppStarting_Set@CForegroundLaunch@@AEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?_CheckAllowForeground@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z @ 0x1402904D0 (-_CheckAllowForeground@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z.c)
 */

void __fastcall CForegroundLaunch::ApplyForegroundPolicy(CForegroundLaunch *this, struct tagPROCESSINFO *a2)
{
  char v2; // r13
  bool v5; // di
  bool v6; // r15
  int v7; // ebx
  __int64 v8; // rax
  int v9; // r8d
  int v10; // edx
  char v11; // di
  int v12; // r12d
  unsigned int v13; // ebp
  int *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 UserSessionState; // rax
  int v18; // edx
  int v19; // r8d
  __int64 v20; // rdx
  __int64 v21; // rdx
  bool v22; // bl
  int v23; // edx
  int v24; // r8d
  __int64 v25; // r9
  __int64 v26; // rdx
  char v27; // r12
  bool v28; // r13
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  int v32; // eax
  bool v33; // bl
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  char v37; // r13
  __int64 v38; // rax
  int v39; // edx
  int v40; // r8d
  struct W32_PUSH_LOCK *v41; // r13
  bool v42; // bp
  int v43; // ebx
  __int64 v44; // rax
  int v45; // r8d
  int v46; // edx
  __int64 v47; // r9
  const char *v48; // rax
  bool v49; // bl
  __int64 v50; // rax
  int v51; // r8d
  int v52; // edx
  int v53; // [rsp+20h] [rbp-68h]
  __int16 v54; // [rsp+30h] [rbp-58h]
  char v55; // [rsp+40h] [rbp-48h]
  bool v57; // [rsp+A0h] [rbp+18h]
  bool v58; // [rsp+A0h] [rbp+18h]
  char ProcessId; // [rsp+A8h] [rbp+20h]

  v2 = 0;
  if ( !*((_BYTE *)this + 440) )
  {
    W32AcquirePushLockExclusiveEx(this, 0);
    CForegroundLaunch::_AppStarting_Set(this, a2);
    v11 = 1;
    v12 = 1;
    ProcessId = (unsigned __int8)PsGetProcessId(*(PEPROCESS *)a2);
    v13 = 0;
    while ( 1 )
    {
      v14 = (int *)((char *)this + 32 * v13 + 96);
      if ( CProcessAsPid::GetProcessInfo((CProcessAsPid *)v14) == a2 )
        break;
      if ( ++v13 >= 0xA )
        goto LABEL_18;
    }
    v12 = v14[4];
    if ( (v12 & 0xFFFFFFFB) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 348LL);
    if ( !v14[5] )
    {
      *(_QWORD *)v14 = 0LL;
      *((_QWORD *)v14 + 1) = 0LL;
      *((_QWORD *)v14 + 2) = 0LL;
      *((_QWORD *)v14 + 3) = 0LL;
    }
LABEL_18:
    v16 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u )
    {
      v2 = 1;
    }
    v57 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v2 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v15);
      LOBYTE(v18) = v2;
      LOBYTE(v19) = v57;
      WPP_RECORDER_AND_TRACE_SF_dD(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v18,
        v19,
        *(_QWORD *)(UserSessionState + 69160));
    }
    if ( (*(_DWORD *)(W32GetUserSessionState(v16, v15) + 66800) & 0x8000000) == 0 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
      {
        v11 = 0;
      }
      v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_108;
      v25 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v20) + 69160);
      v55 = ProcessId;
      v54 = 17;
      goto LABEL_107;
    }
    if ( (unsigned int)IsImmersiveAppRestricted(a2) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
      {
        v11 = 0;
      }
      v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_108;
      v25 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v21) + 69160);
      v55 = ProcessId;
      v54 = 18;
LABEL_107:
      LOBYTE(v24) = v22;
      LOBYTE(v23) = v11;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v23,
        v24,
        v25,
        4,
        2,
        v54,
        (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids,
        v55);
LABEL_108:
      v41 = this;
LABEL_109:
      W32ReleasePushLockExclusiveEx(v41, 0LL);
      return;
    }
    v26 = *((unsigned int *)a2 + 3);
    if ( (v26 & 0x40) == 0 )
    {
      if ( v12 != 1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 387LL);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
      {
        v11 = 0;
      }
      v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_108;
      v25 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v26) + 69160);
      v55 = ProcessId;
      v54 = 19;
      goto LABEL_107;
    }
    if ( v12 == 2 )
    {
      if ( (v26 & 0x100) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 402LL);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
      {
        v11 = 0;
      }
      v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_108;
      v25 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v26) + 69160);
      v55 = ProcessId;
      v54 = 20;
      goto LABEL_107;
    }
    if ( v12 == 3 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
      {
        v11 = 0;
      }
      v49 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v50 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v26);
        LOBYTE(v51) = v49;
        LOBYTE(v52) = v11;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v52,
          v51,
          *(_QWORD *)(v50 + 69160),
          4,
          2,
          21,
          (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids,
          ProcessId);
      }
      *((_DWORD *)a2 + 3) |= 0x100u;
      goto LABEL_108;
    }
    if ( v12 != 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 421LL);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || (v27 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v27 = 0;
    }
    v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v27 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v29 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v26);
      LOBYTE(v30) = v28;
      LOBYTE(v31) = v27;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v31,
        v30,
        *(_QWORD *)(v29 + 69160),
        4,
        2,
        22,
        (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids,
        ProcessId);
    }
    v32 = *((_DWORD *)a2 + 3);
    if ( (v32 & 0x100) != 0 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
      {
        v11 = 0;
      }
      v33 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v34 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v26);
        LOBYTE(v35) = v33;
        LOBYTE(v36) = v11;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v36,
          v35,
          *(_QWORD *)(v34 + 69160),
          4,
          2,
          23,
          (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids);
      }
      goto LABEL_108;
    }
    if ( v32 >= 0 )
    {
      v41 = this;
      if ( !CForegroundLaunch::_CheckAllowForeground(this, a2) )
        goto LABEL_74;
    }
    else
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
        || (v37 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v37 = 0;
      }
      v58 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v37 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v38 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v26);
        LOBYTE(v39) = v37;
        LOBYTE(v40) = v58;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v39,
          v40,
          *(_QWORD *)(v38 + 69160),
          4,
          2,
          24,
          (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids,
          ProcessId);
      }
      v41 = this;
    }
    *((_DWORD *)a2 + 3) |= 0x100u;
LABEL_74:
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v11 = 0;
    }
    v42 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v43 = *((_DWORD *)a2 + 3);
      v44 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v26);
      LOBYTE(v45) = v42;
      LOBYTE(v46) = v11;
      v47 = *(_QWORD *)(v44 + 69160);
      v48 = "given";
      if ( (v43 & 0x100) == 0 )
        v48 = "NOT given";
      WPP_RECORDER_AND_TRACE_SF_sD(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v46,
        v45,
        v47,
        v53,
        2,
        25,
        (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids,
        (__int64)v48,
        ProcessId);
    }
    goto LABEL_109;
  }
  v5 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v7 = *((_DWORD *)a2 + 14);
    v8 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v9) = v6;
    LOBYTE(v10) = v5;
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v10,
      v9,
      *(_QWORD *)(v8 + 69160),
      4,
      2,
      15,
      (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids,
      v7);
  }
}
