/*
 * XREFs of ?ApplyForegroundPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x140208A94
 * Callers:
 *     EditionApplyForegroundPolicyStartingApp @ 0x140208A60 (EditionApplyForegroundPolicyStartingApp.c)
 * Callees:
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB58C (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB5CC (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_sD @ 0x140159EDC (WPP_RECORDER_AND_TRACE_SF_sD.c)
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x14016475C (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x1401A4B68 (-GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?_AppStarting_Set@CForegroundLaunch@@AEAAXPEAUtagPROCESSINFO@@@Z @ 0x1402AB138 (-_AppStarting_Set@CForegroundLaunch@@AEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?_CheckAllowForeground@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z @ 0x1402ABE40 (-_CheckAllowForeground@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z.c)
 */

void __fastcall CForegroundLaunch::ApplyForegroundPolicy(CForegroundLaunch *this, struct tagPROCESSINFO *a2)
{
  char v2; // r13
  CForegroundLaunch *v4; // r14
  bool v5; // di
  bool v6; // r14
  int v7; // ebx
  __int64 v8; // rax
  int v9; // r8d
  int v10; // edx
  char v11; // di
  int v12; // r12d
  __int64 v13; // rdx
  unsigned int i; // r15d
  char *v15; // r14
  struct MOVESIZEDATA *v16; // rcx
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
  bool v49; // r14
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
  v4 = this;
  if ( !*((_BYTE *)this + 440) )
  {
    W32AcquirePushLockExclusiveEx(this, 0);
    CForegroundLaunch::_AppStarting_Set(v4, a2);
    v11 = 1;
    v12 = 1;
    ProcessId = (unsigned __int8)PsGetProcessId(*(PEPROCESS *)a2);
    for ( i = 0; i < 0xA; ++i )
    {
      v15 = (char *)v4 + 32 * i + 96;
      if ( (struct tagPROCESSINFO *)CProcessAsPid::GetProcessInfo((CProcessAsPid *)v15) == a2 )
      {
        v12 = *((_DWORD *)v15 + 4);
        if ( !v12 || v12 == 4 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 421LL);
        if ( !*((_DWORD *)v15 + 5) )
        {
          *(_QWORD *)v15 = 0LL;
          *((_QWORD *)v15 + 1) = 0LL;
          *((_QWORD *)v15 + 2) = 0LL;
          *((_QWORD *)v15 + 3) = 0LL;
        }
        break;
      }
      v4 = this;
    }
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    {
      v2 = 1;
    }
    v57 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v2 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
      LOBYTE(v18) = v2;
      LOBYTE(v19) = v57;
      WPP_RECORDER_AND_TRACE_SF_dD(*((_QWORD *)WPP_GLOBAL_Control + 3), v18, v19, *(_QWORD *)(UserSessionState + 69152));
    }
    if ( (*(_DWORD *)(W32GetUserSessionState(v16, v13) + 66792) & 0x8000000) == 0 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v11 = 0;
      }
      v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_109;
      v25 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v20) + 69152);
      v55 = ProcessId;
      v54 = 22;
      goto LABEL_108;
    }
    if ( (unsigned int)IsImmersiveAppRestricted(a2) )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v11 = 0;
      }
      v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_109;
      v25 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v21) + 69152);
      v55 = ProcessId;
      v54 = 23;
LABEL_108:
      LOBYTE(v24) = v22;
      LOBYTE(v23) = v11;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v23,
        v24,
        v25,
        4,
        2,
        v54,
        (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
        v55);
LABEL_109:
      v41 = this;
LABEL_110:
      W32ReleasePushLockExclusiveEx(v41, 0LL);
      return;
    }
    v26 = *((unsigned int *)a2 + 3);
    if ( (v26 & 0x40) == 0 )
    {
      if ( v12 != 1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 460LL);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v11 = 0;
      }
      v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_109;
      v25 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v26) + 69152);
      v55 = ProcessId;
      v54 = 24;
      goto LABEL_108;
    }
    if ( v12 == 2 )
    {
      if ( (v26 & 0x100) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 475LL);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v11 = 0;
      }
      v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_109;
      v25 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v26) + 69152);
      v55 = ProcessId;
      v54 = 25;
      goto LABEL_108;
    }
    if ( v12 == 3 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v11 = 0;
      }
      v49 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v50 = W32GetUserSessionState(WPP_GLOBAL_Control, v26);
        LOBYTE(v51) = v49;
        LOBYTE(v52) = v11;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v52,
          v51,
          *(_QWORD *)(v50 + 69152),
          4,
          2,
          26,
          (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
          ProcessId);
      }
      *((_DWORD *)a2 + 3) |= 0x100u;
      goto LABEL_109;
    }
    if ( v12 != 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 494LL);
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v27 = 0;
    }
    v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v27 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v29 = W32GetUserSessionState(WPP_GLOBAL_Control, v26);
      LOBYTE(v30) = v28;
      LOBYTE(v31) = v27;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v31,
        v30,
        *(_QWORD *)(v29 + 69152),
        4,
        2,
        27,
        (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
        ProcessId);
    }
    v32 = *((_DWORD *)a2 + 3);
    if ( (v32 & 0x100) != 0 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v11 = 0;
      }
      v33 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v34 = W32GetUserSessionState(WPP_GLOBAL_Control, v26);
        LOBYTE(v35) = v33;
        LOBYTE(v36) = v11;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v36,
          v35,
          *(_QWORD *)(v34 + 69152),
          4,
          2,
          28,
          (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids);
      }
      goto LABEL_109;
    }
    if ( v32 >= 0 )
    {
      v41 = this;
      if ( !CForegroundLaunch::_CheckAllowForeground(this, a2) )
        goto LABEL_75;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v37 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v37 = 0;
      }
      v58 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v37 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v38 = W32GetUserSessionState(WPP_GLOBAL_Control, v26);
        LOBYTE(v39) = v37;
        LOBYTE(v40) = v58;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v39,
          v40,
          *(_QWORD *)(v38 + 69152),
          4,
          2,
          29,
          (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
          ProcessId);
      }
      v41 = this;
    }
    *((_DWORD *)a2 + 3) |= 0x100u;
LABEL_75:
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v11 = 0;
    }
    v42 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v43 = *((_DWORD *)a2 + 3);
      v44 = W32GetUserSessionState(WPP_GLOBAL_Control, v26);
      LOBYTE(v45) = v42;
      LOBYTE(v46) = v11;
      v47 = *(_QWORD *)(v44 + 69152);
      v48 = "given";
      if ( (v43 & 0x100) == 0 )
        v48 = "NOT given";
      WPP_RECORDER_AND_TRACE_SF_sD(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v46,
        v45,
        v47,
        v53,
        2,
        30,
        (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
        (__int64)v48,
        ProcessId);
    }
    goto LABEL_110;
  }
  v5 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v7 = *((_DWORD *)a2 + 14);
    v8 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v9) = v6;
    LOBYTE(v10) = v5;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(v8 + 69152),
      4,
      2,
      20,
      (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
      v7);
  }
}
