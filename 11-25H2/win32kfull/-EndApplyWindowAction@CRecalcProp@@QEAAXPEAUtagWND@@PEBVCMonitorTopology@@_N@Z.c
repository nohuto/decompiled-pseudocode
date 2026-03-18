/*
 * XREFs of ?EndApplyWindowAction@CRecalcProp@@QEAAXPEAUtagWND@@PEBVCMonitorTopology@@_N@Z @ 0x1402C4160
 * Callers:
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D775C (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@W4CompareType@1@@Z @ 0x14002233C (-CompareToCurrent@CMonitorTopology@@QEBA-AW4CompareResult@1@W4CompareType@1@@Z.c)
 *     ?PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x140027C50 (-PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x140029818 (-CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140127EFC (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ?PostRecalcMessages@CRecalcProp@@AEAAXPEAUtagWND@@PEBVCMonitorTopology@@1@Z @ 0x1402C5040 (-PostRecalcMessages@CRecalcProp@@AEAAXPEAUtagWND@@PEBVCMonitorTopology@@1@Z.c)
 *     ?SetLastMoveRect@CRecalcProp@@AEAAXXZ @ 0x1402C59A4 (-SetLastMoveRect@CRecalcProp@@AEAAXXZ.c)
 *     ?SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z @ 0x1402C6140 (-SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z.c)
 */

void __fastcall CRecalcProp::EndApplyWindowAction(
        __int64 **this,
        struct tagWND *a2,
        const struct CMonitorTopology *a3,
        char a4)
{
  int v7; // eax
  char v8; // r13
  char v9; // si
  bool v10; // r14
  bool v11; // r15
  __int64 v12; // rbx
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  bool v16; // r14
  __int64 v17; // rbx
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  CRecalcProp *v21; // rcx

  if ( a4 )
  {
    CRecalcProp::PostRecalcMessages((CRecalcProp *)this, a2, a3, 0LL);
  }
  else
  {
    v7 = CMonitorTopology::CompareToCurrent((__int64)a3, 0LL);
    *((_DWORD *)this + 6) = 0;
    v8 = v7;
    v9 = 1;
    if ( v7 )
    {
      v10 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v12 = *this[2];
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
        LOBYTE(v14) = v11;
        LOBYTE(v15) = v10;
        WPP_RECORDER_AND_TRACE_SF_qd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v15,
          v14,
          *(_QWORD *)(UserSessionState + 69160),
          4,
          7,
          100,
          (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
          v12,
          v8);
      }
      if ( CRecalcProp::CreateForTopologyChange(*this[2], (__int64)a3, 3u) )
        CRecalcProp::SignalRecalcWork(this, 0LL);
    }
    if ( this[4] )
    {
      *((_DWORD *)this + 6) = 1;
    }
    else
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
      {
        v9 = 0;
      }
      v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v17 = *this[2];
        v18 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
        LOBYTE(v19) = v16;
        LOBYTE(v20) = v9;
        WPP_RECORDER_AND_TRACE_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v20,
          v19,
          *(_QWORD *)(v18 + 69160),
          4,
          7,
          101,
          (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
          v17);
      }
      CRecalcProp::SetLastMoveRect((CRecalcProp *)this);
      CRecalcProp::PostRecalcMessages(v21, a2, a3, (const struct CMonitorTopology *)this[5][2]);
    }
    CRecalcProp::PruneRecalcStateList((const struct tagWND **)this, 0LL);
  }
}
