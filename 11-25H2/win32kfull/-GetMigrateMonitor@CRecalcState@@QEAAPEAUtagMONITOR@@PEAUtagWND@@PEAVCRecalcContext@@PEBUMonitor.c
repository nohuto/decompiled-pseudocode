/*
 * XREFs of ?GetMigrateMonitor@CRecalcState@@QEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@PEBUMonitorData@CMonitorTopology@@@Z @ 0x1402C4458
 * Callers:
 *     ?xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAUtagRECT@@PEAVCMonitorTopology@@PEAVCRecalcContext@@@Z @ 0x1402C7E98 (-xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAUtagRECT@@PEAVCMonitorTopology@@PEAVCRecalcContext.c)
 *     ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402C8210 (-xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z.c)
 * Callees:
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x1400227A8 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z.c)
 *     ?ShouldMinimizeOnMonitorRemove@CRecalcState@@AEAA_NPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEBVCRecalcContext@@@Z @ 0x14002808C (-ShouldMinimizeOnMonitorRemove@CRecalcState@@AEAA_NPEAUtagWND@@PEBUMonitorData@CMonitorTopology@.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?GetCurrentMonitorDataFromId@CMonitorTopology@@SAPEBUMonitorData@1@AEBUMonitorId@1@_N@Z @ 0x14020CDA0 (-GetCurrentMonitorDataFromId@CMonitorTopology@@SAPEBUMonitorData@1@AEBUMonitorId@1@_N@Z.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x14022A2E8 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x14026BB14 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1402720AC (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ?xxxInterceptMinimizeOnMigrate@WindowActions@@YAXPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEAK@Z @ 0x1402D0E60 (-xxxInterceptMinimizeOnMigrate@WindowActions@@YAXPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@P.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

struct tagMONITOR *__fastcall CRecalcState::GetMigrateMonitor(
        CRecalcState *this,
        struct tagWND *a2,
        struct CRecalcContext *a3,
        const struct CMonitorTopology::MonitorData *a4)
{
  struct CRecalcContext *v4; // rbx
  __int64 v8; // rcx
  struct tagRECT *v9; // rax
  CMonitorTopology *v10; // rcx
  __int64 v11; // rdx
  bool v12; // r14
  bool v13; // di
  __int64 v14; // rbx
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  __int64 v19; // rdx
  char v20; // bl
  const struct CMonitorTopology::MonitorData *CurrentMonitorDataFromId; // rax
  __int64 v22; // rdx
  const struct CMonitorTopology::MonitorData *v23; // r10
  char v24; // r14
  char v25; // bl
  __int64 v26; // rax
  int v27; // edx
  int v28; // r8d
  const struct CMonitorTopology::MonitorData *v29; // rax
  char v30; // bl
  __int64 v31; // rax
  int v32; // edx
  int v33; // r8d
  const struct AdvancedWindowPos::WINDOWPOSANDSTATE *v34; // r8
  unsigned int *v35; // r9
  struct CRecalcContext *v36; // rbx
  struct tagRECT v37; // xmm0
  bool v38; // r12
  char v39; // bl
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  bool v43; // r13
  __int64 v44; // rbx
  __int64 v45; // rax
  int v46; // r8d
  int v47; // edx
  __int64 v48; // rdx
  __int64 v49; // r15
  __int64 v50; // rcx
  bool v51; // r12
  _DWORD *v52; // rax
  int v53; // ebx
  int v54; // edi
  int v55; // esi
  int v56; // ebp
  __int64 v57; // rax
  int v58; // r8d
  int v59; // edx
  __int64 v60; // rcx
  bool v61; // bl
  __int64 v62; // rax
  int v63; // r8d
  int v64; // edx
  bool v65; // [rsp+60h] [rbp-A8h]
  bool v66; // [rsp+60h] [rbp-A8h]
  struct tagRECT v67; // [rsp+70h] [rbp-98h] BYREF
  struct CRecalcContext *v68; // [rsp+80h] [rbp-88h]
  struct tagRECT v69[2]; // [rsp+88h] [rbp-80h] BYREF
  int v70; // [rsp+A8h] [rbp-60h]

  v4 = a3;
  v68 = a3;
  if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !*((_QWORD *)this + 9) )
    {
      v67.left = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1369);
    }
    v8 = *((_QWORD *)a2 + 5);
    v9 = (struct tagRECT *)((char *)this + 44);
    if ( (*(_BYTE *)(v8 + 31) & 0x20) == 0 )
      v9 = (struct tagRECT *)(v8 + 88);
    v10 = (CMonitorTopology *)*((_QWORD *)this + 2);
    v67 = *v9;
    a4 = CMonitorTopology::MonitorDataFromRect(v10, a2, &v67);
    if ( !a4 )
    {
      v12 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v14 = *(_QWORD *)a2;
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v11);
        LOBYTE(v16) = v13;
        LOBYTE(v17) = v12;
        WPP_RECORDER_AND_TRACE_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v17,
          v16,
          *(_QWORD *)(UserSessionState + 69160),
          2,
          7,
          48,
          (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
          v14);
        v4 = v68;
      }
      *(_DWORD *)v4 = 2;
      return 0LL;
    }
  }
  LOBYTE(v19) = CRecalcState::ShouldMinimizeOnMonitorRemove(this, a2, a4, v4);
  v20 = v19;
  CurrentMonitorDataFromId = CMonitorTopology::GetCurrentMonitorDataFromId(
                               (const struct CMonitorTopology::MonitorData *)((char *)a4 + 48),
                               v19);
  *(_QWORD *)&v67.left = CurrentMonitorDataFromId;
  v23 = CurrentMonitorDataFromId;
  v24 = 1;
  if ( v20 )
  {
    if ( !CurrentMonitorDataFromId
      || (v22 = *((_QWORD *)this + 2),
          (const struct CMonitorTopology::MonitorData *)(v22 + 8 * (9LL * *(unsigned int *)(v22 + 8) + 2)) == a4)
      || *((_DWORD *)CurrentMonitorDataFromId + 14) <= 1u )
    {
      if ( CurrentMonitorDataFromId )
        goto LABEL_60;
    }
    else
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
        || (v25 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v25 = 0;
      }
      v65 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v25 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v26 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v22);
        LOBYTE(v27) = v25;
        LOBYTE(v28) = v65;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v27,
          v28,
          *(_QWORD *)(v26 + 69160),
          4,
          7,
          49,
          (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids);
      }
      v29 = CMonitorTopology::GetCurrentMonitorDataFromId(
              (const struct CMonitorTopology::MonitorId *)(*((_QWORD *)this + 2)
                                                         + 8
                                                         * (*(unsigned int *)(*((_QWORD *)this + 2) + 8LL)
                                                          + 8 * (*(unsigned int *)(*((_QWORD *)this + 2) + 8LL) + 1LL))),
              0LL);
      v23 = *(const struct CMonitorTopology::MonitorData **)&v67.left;
      if ( v29 != *(const struct CMonitorTopology::MonitorData **)&v67.left )
        goto LABEL_61;
    }
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || (v30 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v30 = 0;
    }
    v66 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v30 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v31 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v22);
      LOBYTE(v32) = v30;
      LOBYTE(v33) = v66;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v32,
        v33,
        *(_QWORD *)(v31 + 69160),
        4,
        7,
        50,
        (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids);
    }
    if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
      return 0LL;
    if ( (*((_DWORD *)a2 + 96) & 0x10) != 0 )
    {
      v36 = v68;
      WindowActions::xxxInterceptMinimizeOnMigrate(a2, a4, (struct CRecalcContext *)((char *)v68 + 4), v35);
      *(_DWORD *)v36 = 4;
      return 0LL;
    }
    v37 = *(struct tagRECT *)((char *)this + 28);
    v38 = 0;
    v69[0].right = 2;
    *(_QWORD *)&v69[0].left = 0LL;
    v69[1] = v37;
    v69[0].bottom = 19;
    v70 = 0;
    AdvancedWindowPos::xxxApplyWindowPos(a2, v69, v34);
    if ( (*(_BYTE *)(*((_QWORD *)a2 + 5) + 31LL) & 0x20) != 0 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
        || (v39 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v39 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
      {
        v24 = 0;
      }
      if ( v39 || v24 )
      {
        v40 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v22);
        LOBYTE(v41) = v24;
        LOBYTE(v42) = v39;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v42,
          v41,
          *(_QWORD *)(v40 + 69160),
          5,
          7,
          51,
          (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids);
      }
      *(_DWORD *)v68 = 3;
      return 0LL;
    }
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0 )
    {
      v38 = *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
    }
    v43 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v38 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v44 = *(_QWORD *)a2;
      v45 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v22);
      LOBYTE(v46) = v43;
      LOBYTE(v47) = v38;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v47,
        v46,
        *(_QWORD *)(v45 + 69160),
        3,
        7,
        52,
        (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
        v44);
    }
    v23 = *(const struct CMonitorTopology::MonitorData **)&v67.left;
  }
LABEL_60:
  if ( !v23 )
  {
    v60 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v24 = 0;
    }
    v61 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v24 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v62 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v22);
      LOBYTE(v63) = v61;
      LOBYTE(v64) = v24;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v64,
        v63,
        *(_QWORD *)(v62 + 69160),
        4,
        7,
        54,
        (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids);
    }
    return *(struct tagMONITOR **)(GetDispInfo(v60) + 104);
  }
LABEL_61:
  v49 = ValidateHmonitor(*(_QWORD *)v23);
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (v50 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (v50 & 0x40) == 0)
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v50 = 0LL;
    v24 = 0;
  }
  v51 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v24 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v52 = *(_DWORD **)(v49 + 40);
    v53 = v52[10];
    v54 = v52[9];
    v55 = v52[8];
    v56 = v52[7];
    v57 = W32GetUserSessionState(v50, v48);
    LOBYTE(v58) = v51;
    LOBYTE(v59) = v24;
    WPP_RECORDER_AND_TRACE_SF_dddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v59,
      v58,
      *(_QWORD *)(v57 + 69160),
      4,
      7,
      53,
      (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
      v56,
      v55,
      v54,
      v53);
  }
  return (struct tagMONITOR *)v49;
}
