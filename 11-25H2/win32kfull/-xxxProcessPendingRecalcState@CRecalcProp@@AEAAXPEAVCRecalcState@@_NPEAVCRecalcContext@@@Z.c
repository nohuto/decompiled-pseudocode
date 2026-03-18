/*
 * XREFs of ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402C8210
 * Callers:
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1402C6EFC (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 * Callees:
 *     ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@W4CompareType@1@@Z @ 0x14002233C (-CompareToCurrent@CMonitorTopology@@QEBA-AW4CompareResult@1@W4CompareType@1@@Z.c)
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x1400227A8 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z.c)
 *     IsImmersiveBand @ 0x140025E6C (IsImmersiveBand.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x1401A48DC (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     ?ClearAnchorPosition@CRecalcProp@@AEAAXXZ @ 0x140206524 (-ClearAnchorPosition@CRecalcProp@@AEAAXXZ.c)
 *     ?GetCurrentMonitorDataFromId@CMonitorTopology@@SAPEBUMonitorData@1@AEBUMonitorId@1@_N@Z @ 0x14020CDA0 (-GetCurrentMonitorDataFromId@CMonitorTopology@@SAPEBUMonitorData@1@AEBUMonitorId@1@_N@Z.c)
 *     ??1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x140217238 (--1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     ?GetResultString@CRecalcContext@@QEAAPEBDXZ @ 0x140259854 (-GetResultString@CRecalcContext@@QEAAPEBDXZ.c)
 *     ??0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z @ 0x1402A67FC (--0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z.c)
 *     ?SetMonitor@CWindowAction@AdvancedWindowPos@@QEAAXPEAUtagMONITOR@@_NPEBUtagWND@@@Z @ 0x1402A8174 (-SetMonitor@CWindowAction@AdvancedWindowPos@@QEAAXPEAUtagMONITOR@@_NPEBUtagWND@@@Z.c)
 *     ?GetMigrateMonitor@CRecalcState@@QEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@PEBUMonitorData@CMonitorTopology@@@Z @ 0x1402C4458 (-GetMigrateMonitor@CRecalcState@@QEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@PEBUMonitor.c)
 *     ?SetPreviousMonitorData@CWindowAction@AdvancedWindowPos@@QEAAXPEBUMonitorData@CMonitorTopology@@PEAUtagWND@@@Z @ 0x1402C5B14 (-SetPreviousMonitorData@CWindowAction@AdvancedWindowPos@@QEAAXPEBUMonitorData@CMonitorTopology@@.c)
 *     ?UpdateActionForAnchor@CRecalcProp@@AEAAXPEAVCWindowAction@AdvancedWindowPos@@PEAPEBUMonitorData@CMonitorTopology@@PEAW4Result@CRecalcContext@@PEAVCRecalcState@@_N@Z @ 0x1402C6604 (-UpdateActionForAnchor@CRecalcProp@@AEAAXPEAVCWindowAction@AdvancedWindowPos@@PEAPEBUMonitorData.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddd @ 0x1402C90F0 (WPP_RECORDER_AND_TRACE_SF_qdddd.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D775C (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 *     ?GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z @ 0x1402DCB7C (-GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall CRecalcProp::xxxProcessPendingRecalcState(
        CRecalcProp *this,
        struct CRecalcState *a2,
        bool a3,
        struct CRecalcContext *a4)
{
  __int64 v4; // rbx
  char v7; // si
  struct CRecalcContext *v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rdx
  struct tagWND *v11; // r8
  int v12; // r9d
  char v13; // di
  char v14; // bl
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  int v18; // ebx
  _DWORD *v19; // r8
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  int v23; // r13d
  char v24; // di
  char v25; // bl
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  unsigned __int16 *v29; // rdi
  const struct CMonitorTopology::MonitorData *CurrentMonitorDataFromId; // rax
  struct tagMONITOR *MigrateMonitor; // r13
  __int64 v32; // rcx
  char v33; // r15
  char v34; // bl
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  int v38; // ecx
  int v39; // r9d
  __int128 v40; // xmm0
  int v41; // eax
  __int64 v42; // r8
  int v43; // ecx
  int v44; // edx
  struct CHECKPOINT *IfValid; // rax
  struct tagRECT v46; // xmm0
  const struct tagWND *v47; // rdx
  CMonitorTopology *v48; // rcx
  const struct CMonitorTopology::MonitorData *v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  bool v54; // r15
  bool v55; // r12
  __int64 v56; // rax
  int v57; // r8d
  int v58; // edx
  __int64 v59; // rax
  int v60; // ecx
  bool v61; // r15
  const char *ResultString; // rax
  __int64 *v63; // rcx
  __int64 v64; // rdi
  __int64 v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // rax
  int v68; // r8d
  int v69; // edx
  __int64 v70; // rdx
  int v72; // [rsp+74h] [rbp-8Ch] BYREF
  int v73; // [rsp+78h] [rbp-88h]
  struct CRecalcContext *v74; // [rsp+80h] [rbp-80h]
  struct tagRECT v75; // [rsp+90h] [rbp-70h] BYREF
  struct tagRECT v76; // [rsp+A0h] [rbp-60h]
  int v77; // [rsp+B0h] [rbp-50h] BYREF
  int v78; // [rsp+B4h] [rbp-4Ch]
  int v79; // [rsp+BCh] [rbp-44h]
  int v80; // [rsp+C0h] [rbp-40h]
  int v81; // [rsp+C4h] [rbp-3Ch]
  int v82; // [rsp+C8h] [rbp-38h]
  int v83; // [rsp+D8h] [rbp-28h]
  __int128 v84; // [rsp+DCh] [rbp-24h]
  int v85; // [rsp+110h] [rbp+10h]
  __int64 v86[5]; // [rsp+158h] [rbp+58h] BYREF

  v4 = *((_QWORD *)this + 4);
  v74 = a4;
  v7 = 1;
  v8 = a4;
  v73 = *(_DWORD *)(*(_QWORD *)(v4 + 16) + 12LL);
  AdvancedWindowPos::CWindowAction::CWindowAction((__int64)&v77, 1);
  v9 = *((_QWORD *)this + 2);
  v77 |= 0x280u;
  if ( (unsigned int)IsImmersiveBand(v9) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || (v13 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v13 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v14 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v14 = 0;
    }
    if ( v13 || v14 )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v10);
      LOBYTE(v16) = v14;
      LOBYTE(v17) = v13;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v17,
        v16,
        *(_QWORD *)(UserSessionState + 69160),
        5,
        7,
        116,
        (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids);
      v12 = v77;
    }
    v18 = 9;
    v19 = *(_DWORD **)(*((_QWORD *)this + 2) + 40LL);
    v20 = v19[22];
    v21 = v19[23];
    v77 = v12 | 2;
    v79 = v20;
    v80 = v21;
    v22 = v19[25] - v19[23];
    v81 = v19[24] - v19[22];
    v77 = v12 | 6;
    v82 = v22;
  }
  else
  {
    if ( a2 )
    {
      v23 = *(_DWORD *)(*((_QWORD *)a2 + 2) + 12LL);
      v73 = v23;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
        || (v24 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v24 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v25 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v25 = 0;
      }
      if ( v24 || v25 )
      {
        v26 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
        LOBYTE(v27) = v25;
        LOBYTE(v28) = v24;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v28,
          v27,
          *(_QWORD *)(v26 + 69160),
          5,
          7,
          117,
          (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
          v23);
      }
      v29 = (unsigned __int16 *)*((_QWORD *)a2 + 9);
      CurrentMonitorDataFromId = CMonitorTopology::GetCurrentMonitorDataFromId(
                                   (const struct CMonitorTopology::MonitorId *)(v29 + 24),
                                   0LL);
      MigrateMonitor = (struct tagMONITOR *)ValidateHmonitor(*(_QWORD *)CurrentMonitorDataFromId);
      CRecalcProp::ClearAnchorPosition(this);
      if ( *((_BYTE *)a2 + 61) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (v32 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (v32 & 0x40) == 0)
          || (v33 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v33 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v34 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v34 = 0;
        }
        if ( v33 || v34 )
        {
          v35 = W32GetUserSessionState(v32, *(_QWORD *)&WPP_GLOBAL_Control);
          LOBYTE(v36) = v34;
          LOBYTE(v37) = v33;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v37,
            v36,
            *(_QWORD *)(v35 + 69160),
            5,
            7,
            118,
            (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids);
        }
        v18 = 8;
        if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 31LL) & 0x20) != 0 )
        {
          v77 |= 0x20u;
          v83 = 0;
        }
      }
      else
      {
        v18 = 7;
        v38 = *((_DWORD *)a2 + 6);
        v39 = v77 | 0x60;
        v40 = *(_OWORD *)((char *)a2 + 44);
        v77 |= 0x60u;
        v83 = v38;
        v84 = v40;
        v41 = v29[20];
        v78 |= 0x100u;
        v85 = v41;
        if ( v38 == 3 )
        {
          v42 = HIDWORD(*(_QWORD *)((char *)a2 + 28));
          v43 = *(_QWORD *)((char *)a2 + 36) - *(_QWORD *)((char *)a2 + 28);
          v44 = HIDWORD(*(_QWORD *)((char *)a2 + 36)) - v42;
          v79 = *(_QWORD *)((char *)a2 + 28);
          v80 = v42;
          v77 = v39 | 6;
          v81 = v43;
          v82 = v44;
        }
      }
    }
    else
    {
      IfValid = CHECKPOINT::GetIfValid(v11);
      if ( IfValid )
        v46 = *(struct tagRECT *)((char *)IfValid + 20);
      else
        v46 = *(struct tagRECT *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 88LL);
      v47 = (const struct tagWND *)*((_QWORD *)this + 2);
      v48 = *(CMonitorTopology **)(v4 + 16);
      v76 = v46;
      v75 = v46;
      v49 = CMonitorTopology::MonitorDataFromRect(v48, v47, &v75);
      *(_QWORD *)&v75.left = v49;
      v29 = (unsigned __int16 *)v49;
      if ( v49 )
      {
        MigrateMonitor = CRecalcState::GetMigrateMonitor((CRecalcState *)v4, *((struct tagWND **)this + 2), v8, v49);
        if ( MigrateMonitor )
        {
          v72 = 4;
          if ( (*(_DWORD *)(W32GetUserSessionState(v52, v51) + 66800) & 0x10000) != 0
            && !*(_DWORD *)(v4 + 64)
            && !*((_DWORD *)v74 + 8)
            && (unsigned int)CMonitorTopology::CompareToCurrent(*(_QWORD *)(v4 + 16), 0LL) == 16 )
          {
            v78 |= 0x1000u;
          }
        }
        else
        {
          v77 |= 0x20u;
          v72 = 3;
          v83 = 2;
          MigrateMonitor = *(struct tagMONITOR **)(GetDispInfo(v52) + 104);
        }
        CRecalcProp::UpdateActionForAnchor(
          this,
          (struct AdvancedWindowPos::CWindowAction *)&v77,
          (const struct CMonitorTopology::MonitorData **)&v75,
          (enum CRecalcContext::Result *)&v72,
          (struct CRecalcState *)v4,
          a3);
        v29 = *(unsigned __int16 **)&v75.left;
        v18 = v72;
      }
      else
      {
        v18 = 5;
        MigrateMonitor = *(struct tagMONITOR **)(GetDispInfo(v50) + 104);
        v54 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
        v55 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v54 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v56 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v53);
          LOBYTE(v57) = v55;
          LOBYTE(v58) = v54;
          WPP_RECORDER_AND_TRACE_SF_qdddd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v58,
            v57,
            *(_QWORD *)(v56 + 69160));
          v18 = 5;
        }
      }
    }
    if ( MigrateMonitor )
      AdvancedWindowPos::CWindowAction::SetMonitor(
        (AdvancedWindowPos::CWindowAction *)&v77,
        MigrateMonitor,
        1,
        *((const struct tagWND **)this + 2));
    if ( v29 )
      AdvancedWindowPos::CWindowAction::SetPreviousMonitorData(
        (AdvancedWindowPos::CWindowAction *)&v77,
        (const struct CMonitorTopology::MonitorData *)v29,
        *((struct tagWND **)this + 2));
    v8 = v74;
  }
  v59 = v86[0];
  *(_DWORD *)v8 = v18;
  v60 = *(_DWORD *)(v59 + 12);
  *((_DWORD *)v8 + 4) = v73;
  *((_DWORD *)v8 + 3) = v60;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v7 = 0;
  }
  v61 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    ResultString = CRecalcContext::GetResultString(v8);
    v63 = (__int64 *)*((_QWORD *)this + 2);
    v64 = (__int64)ResultString;
    v65 = *v63;
    v67 = W32GetUserSessionState(v63, v66);
    LOBYTE(v68) = v61;
    LOBYTE(v69) = v7;
    WPP_RECORDER_AND_TRACE_SF_qs(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v69,
      v68,
      *(_QWORD *)(v67 + 69160),
      4,
      7,
      120,
      (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
      v65,
      v64);
  }
  AdvancedWindowPos::xxxApplyWindowAction(*((_QWORD *)this + 2), &v77, 14LL);
  CThreadLockedCurrentMonitorTopologyPtr::~CThreadLockedCurrentMonitorTopologyPtr(
    (CThreadLockedCurrentMonitorTopologyPtr *)v86,
    v70);
}
