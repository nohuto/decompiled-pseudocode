/*
 * XREFs of ?EndApplyWindowAction@CRecalcProp@@QEAAXPEAUtagWND@@PEBVCMonitorTopology@@_N@Z @ 0x1402DD64C
 * Callers:
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402EAA34 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     ?PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x14011D2A8 (-PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x14015E97C (-CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@.c)
 *     ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@W4CompareType@1@@Z @ 0x14015F6F8 (-CompareToCurrent@CMonitorTopology@@QEBA-AW4CompareResult@1@W4CompareType@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140162868 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z @ 0x14023DE70 (-SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z.c)
 *     ?SetLastMoveRect@CRecalcProp@@AEAAXXZ @ 0x140263754 (-SetLastMoveRect@CRecalcProp@@AEAAXXZ.c)
 *     ?PostRecalcMessages@CRecalcProp@@AEAAXPEAUtagWND@@PEBVCMonitorTopology@@1@Z @ 0x1402DDEAC (-PostRecalcMessages@CRecalcProp@@AEAAXPEAUtagWND@@PEBVCMonitorTopology@@1@Z.c)
 */

void __fastcall CRecalcProp::EndApplyWindowAction(
        __int64 **this,
        struct tagWND *a2,
        const struct CMonitorTopology *a3,
        char a4)
{
  int v7; // r13d
  char v8; // si
  bool v9; // r14
  bool v10; // r15
  __int64 v11; // rbx
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  bool v15; // r14
  __int64 v16; // rbx
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  CRecalcProp *v20; // rcx

  if ( a4 )
  {
    CRecalcProp::PostRecalcMessages((CRecalcProp *)this, a2, a3, 0LL);
  }
  else
  {
    v7 = CMonitorTopology::CompareToCurrent((__int64)a3, 0LL);
    *((_DWORD *)this + 6) = 0;
    v8 = 1;
    if ( v7 )
    {
      v9 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v11 = *this[2];
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
        LOBYTE(v13) = v10;
        LOBYTE(v14) = v9;
        WPP_RECORDER_AND_TRACE_SF_qd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v14,
          v13,
          *(_QWORD *)(UserSessionState + 69152),
          4,
          7,
          100,
          (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
          v11,
          v7);
      }
      if ( CRecalcProp::CreateForTopologyChange(*this[2], (__int64)a3, 3u) )
        CRecalcProp::SignalRecalcWork((__int64)this, 0);
    }
    if ( this[4] )
    {
      *((_DWORD *)this + 6) = 1;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v8 = 0;
      }
      v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v16 = *this[2];
        v17 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
        LOBYTE(v18) = v15;
        LOBYTE(v19) = v8;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v19,
          v18,
          *(_QWORD *)(v17 + 69152),
          4,
          7,
          101,
          (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
          v16);
      }
      CRecalcProp::SetLastMoveRect((CRecalcProp *)this);
      CRecalcProp::PostRecalcMessages(v20, a2, a3, (const struct CMonitorTopology *)this[5][2]);
    }
    CRecalcProp::PruneRecalcStateList((const struct tagWND **)this, 0LL);
  }
}
