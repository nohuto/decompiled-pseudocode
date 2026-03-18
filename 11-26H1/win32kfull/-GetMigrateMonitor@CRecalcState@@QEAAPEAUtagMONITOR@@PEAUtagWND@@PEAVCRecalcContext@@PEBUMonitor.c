/*
 * XREFs of ?GetMigrateMonitor@CRecalcState@@QEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@PEBUMonitorData@CMonitorTopology@@@Z @ 0x1402876C4
 * Callers:
 *     ?xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAUtagRECT@@PEAVCMonitorTopology@@PEAVCRecalcContext@@@Z @ 0x1401624F0 (-xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAUtagRECT@@PEAVCMonitorTopology@@PEAVCRecalcContext.c)
 *     ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402DFB54 (-xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z.c)
 * Callees:
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1400494F0 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ShouldMinimizeOnMonitorRemove@CRecalcState@@AEAA_NPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEBVCRecalcContext@@@Z @ 0x14015BC24 (-ShouldMinimizeOnMonitorRemove@CRecalcState@@AEAA_NPEAUtagWND@@PEBUMonitorData@CMonitorTopology@.c)
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x14015FB64 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetCurrentMonitorDataFromId@CMonitorTopology@@SAPEBUMonitorData@1@AEBUMonitorId@1@_N@Z @ 0x14022A6FC (-GetCurrentMonitorDataFromId@CMonitorTopology@@SAPEBUMonitorData@1@AEBUMonitorId@1@_N@Z.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x14022A8E4 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x14025F6A4 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?xxxInterceptMinimizeOnMigrate@WindowActions@@YAXPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEAK@Z @ 0x1402E5C74 (-xxxInterceptMinimizeOnMigrate@WindowActions@@YAXPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@P.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

struct tagMONITOR *__fastcall CRecalcState::GetMigrateMonitor(
        CRecalcState *this,
        struct tagWND *a2,
        struct CRecalcContext *a3,
        const struct CMonitorTopology::MonitorData *a4)
{
  const struct CMonitorTopology::MonitorData *v4; // rdi
  __int64 v8; // rcx
  bool v9; // zf
  struct tagRECT *v10; // rax
  struct tagRECT *v11; // rcx
  struct tagRECT v12; // xmm0
  CMonitorTopology *v13; // rcx
  __int64 v14; // rdx
  bool v15; // r14
  bool v16; // di
  __int64 v17; // rbx
  __int64 UserSessionState; // rax
  int v19; // r8d
  int v20; // edx
  __int64 v22; // rdx
  char v23; // bl
  const struct CMonitorTopology::MonitorData *CurrentMonitorDataFromId; // rax
  __int64 v25; // rdx
  const struct CMonitorTopology::MonitorData *v26; // r10
  char v27; // r14
  char v28; // bl
  __int64 v29; // rax
  int v30; // edx
  int v31; // r8d
  const struct CMonitorTopology::MonitorData *v32; // rax
  char v33; // bl
  __int64 v34; // rax
  int v35; // edx
  int v36; // r8d
  const struct AdvancedWindowPos::WINDOWPOSANDSTATE *v37; // r8
  unsigned int *v38; // r9
  struct tagRECT v39; // xmm0
  bool v40; // r15
  char v41; // bl
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  bool v45; // r13
  __int64 v46; // rbx
  __int64 v47; // rax
  int v48; // r8d
  int v49; // edx
  __int64 v50; // rdx
  __int64 v51; // r15
  struct MOVESIZEDATA *v52; // rcx
  char v53; // r12
  _DWORD *v54; // rax
  int v55; // ebx
  int v56; // edi
  int v57; // esi
  int v58; // ebp
  __int64 v59; // rax
  struct MOVESIZEDATA *v60; // rcx
  bool v61; // bl
  __int64 v62; // rax
  int v63; // r8d
  int v64; // edx
  __int64 v65; // [rsp+40h] [rbp-B8h]
  bool v66; // [rsp+60h] [rbp-98h]
  bool v67; // [rsp+60h] [rbp-98h]
  const struct CMonitorTopology::MonitorData *v68; // [rsp+68h] [rbp-90h]
  struct tagRECT v69; // [rsp+70h] [rbp-88h] BYREF
  struct tagRECT v70[2]; // [rsp+80h] [rbp-78h] BYREF
  int v71; // [rsp+A0h] [rbp-58h]

  v4 = a4;
  v68 = a4;
  if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !*((_QWORD *)this + 9) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1369LL);
    v8 = *((_QWORD *)a2 + 5);
    v9 = (*(_BYTE *)(v8 + 31) & 0x20) == 0;
    v10 = (struct tagRECT *)(v8 + 88);
    v11 = (struct tagRECT *)((char *)this + 44);
    if ( v9 )
      v11 = v10;
    v12 = *v11;
    v13 = (CMonitorTopology *)*((_QWORD *)this + 2);
    v69 = v12;
    v68 = CMonitorTopology::MonitorDataFromRect(v13, a2, &v69);
    v4 = v68;
    if ( !v68 )
    {
      v15 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v15 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v17 = *(_QWORD *)a2;
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
        LOBYTE(v19) = v16;
        LOBYTE(v20) = v15;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v20,
          v19,
          *(_QWORD *)(UserSessionState + 69152),
          2,
          7,
          48,
          (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
          v17);
      }
      *(_DWORD *)a3 = 2;
      return 0LL;
    }
  }
  LOBYTE(v22) = CRecalcState::ShouldMinimizeOnMonitorRemove(this, a2, v4, a3);
  v23 = v22;
  CurrentMonitorDataFromId = CMonitorTopology::GetCurrentMonitorDataFromId(
                               (const struct CMonitorTopology::MonitorData *)((char *)v4 + 48),
                               v22);
  *(_QWORD *)&v69.left = CurrentMonitorDataFromId;
  v26 = CurrentMonitorDataFromId;
  v27 = 1;
  if ( v23 )
  {
    if ( !CurrentMonitorDataFromId
      || (v25 = *((_QWORD *)this + 2),
          (const struct CMonitorTopology::MonitorData *)(v25 + 8 * (9LL * *(unsigned int *)(v25 + 8) + 2)) == v68)
      || *((_DWORD *)CurrentMonitorDataFromId + 14) <= 1u )
    {
      if ( CurrentMonitorDataFromId )
        goto LABEL_60;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
        || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v28 = 0;
      }
      v66 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v28 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v29 = W32GetUserSessionState(WPP_GLOBAL_Control, v25);
        LOBYTE(v30) = v28;
        LOBYTE(v31) = v66;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v30,
          v31,
          *(_QWORD *)(v29 + 69152),
          4,
          7,
          49,
          (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
      }
      v32 = CMonitorTopology::GetCurrentMonitorDataFromId(
              (const struct CMonitorTopology::MonitorId *)(*((_QWORD *)this + 2)
                                                         + 8
                                                         * (*(unsigned int *)(*((_QWORD *)this + 2) + 8LL)
                                                          + 8 * (*(unsigned int *)(*((_QWORD *)this + 2) + 8LL) + 1LL))),
              0LL);
      v26 = *(const struct CMonitorTopology::MonitorData **)&v69.left;
      if ( v32 != *(const struct CMonitorTopology::MonitorData **)&v69.left )
        goto LABEL_61;
    }
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
      || (v33 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v33 = 0;
    }
    v67 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v33 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v34 = W32GetUserSessionState(WPP_GLOBAL_Control, v25);
      LOBYTE(v35) = v33;
      LOBYTE(v36) = v67;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v35,
        v36,
        *(_QWORD *)(v34 + 69152),
        4,
        7,
        50,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
    }
    if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
      return 0LL;
    if ( (*((_DWORD *)a2 + 96) & 0x10) != 0 )
    {
      WindowActions::xxxInterceptMinimizeOnMigrate(a2, v68, (struct CRecalcContext *)((char *)a3 + 4), v38);
      *(_DWORD *)a3 = 4;
      return 0LL;
    }
    v39 = *(struct tagRECT *)((char *)this + 28);
    *(_QWORD *)&v70[0].left = 0LL;
    v40 = 0;
    v70[0].right = 2;
    v70[0].bottom = 19;
    v70[1] = v39;
    v71 = 0;
    AdvancedWindowPos::xxxApplyWindowPos(a2, v70, v37);
    if ( (*(_BYTE *)(*((_QWORD *)a2 + 5) + 31LL) & 0x20) != 0 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
        || (v41 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v41 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        v27 = 0;
      }
      if ( v41 || v27 )
      {
        v42 = W32GetUserSessionState(WPP_GLOBAL_Control, v25);
        LOBYTE(v43) = v27;
        LOBYTE(v44) = v41;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v44,
          v43,
          *(_QWORD *)(v42 + 69152),
          5,
          7,
          51,
          (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
      }
      *(_DWORD *)a3 = 3;
      return 0LL;
    }
    if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0 )
    {
      v40 = *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    }
    v45 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v40 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v46 = *(_QWORD *)a2;
      v47 = W32GetUserSessionState(WPP_GLOBAL_Control, v25);
      LOBYTE(v48) = v45;
      LOBYTE(v49) = v40;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v49,
        v48,
        *(_QWORD *)(v47 + 69152),
        3,
        7,
        52,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
        v46);
    }
    v26 = *(const struct CMonitorTopology::MonitorData **)&v69.left;
  }
LABEL_60:
  if ( !v26 )
  {
    v60 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v27 = 0;
    }
    v61 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v27 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v62 = W32GetUserSessionState(WPP_GLOBAL_Control, v25);
      LOBYTE(v63) = v61;
      LOBYTE(v64) = v27;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v64,
        v63,
        *(_QWORD *)(v62 + 69152),
        4,
        7,
        54,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
    }
    return *(struct tagMONITOR **)(GetDispInfo(v60, v25) + 96);
  }
LABEL_61:
  v51 = ValidateHmonitor(*(_QWORD *)v26);
  v52 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v52 = 0LL;
    v27 = 0;
  }
  v53 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v27 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v54 = *(_DWORD **)(v51 + 40);
    v55 = v54[10];
    v56 = v54[9];
    v57 = v54[8];
    v58 = v54[7];
    v59 = W32GetUserSessionState(v52, v50);
    LODWORD(v65) = v58;
    WPP_RECORDER_AND_TRACE_SF_dddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v27,
      v53,
      *(_QWORD *)(v59 + 69152),
      4u,
      7u,
      0x35u,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      v65,
      v57,
      v56,
      v55);
  }
  return (struct tagMONITOR *)v51;
}
