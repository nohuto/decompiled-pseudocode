/*
 * XREFs of ?ClearAnchorPosition@CRecalcProp@@AEAAXXZ @ 0x140210358
 * Callers:
 *     ??1CRecalcProp@@AEAA@XZ @ 0x1402102EC (--1CRecalcProp@@AEAA@XZ.c)
 *     ?SetAnchorPosition@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x14027CAFC (-SetAnchorPosition@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     ?UpdateActionForAnchor@CRecalcProp@@AEAAXPEAVCWindowAction@AdvancedWindowPos@@PEAPEBUMonitorData@CMonitorTopology@@PEAW4Result@CRecalcContext@@PEAVCRecalcState@@_N@Z @ 0x1402DE810 (-UpdateActionForAnchor@CRecalcProp@@AEAAXPEAVCWindowAction@AdvancedWindowPos@@PEAPEBUMonitorData.c)
 *     ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402DFB54 (-xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z.c)
 *     ?xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402E01BC (-xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcCo.c)
 * Callees:
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x14015FDB4 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

void __fastcall CRecalcProp::ClearAnchorPosition(CRecalcProp *this)
{
  CMonitorTopology *v2; // rcx
  __int64 v3; // rdx
  __int64 *v4; // rbx
  char v5; // di
  char v6; // si
  __int64 v7; // rbx
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx

  v2 = (CMonitorTopology *)*((_QWORD *)this + 10);
  if ( v2 )
  {
    CMonitorTopology::Release(v2);
    *((_QWORD *)this + 10) = 0LL;
    v4 = (__int64 *)*((_QWORD *)this + 2);
    if ( v4 )
    {
      v5 = 1;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
        || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v6 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        v5 = 0;
      }
      if ( v6 || v5 )
      {
        v7 = *v4;
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v3);
        LOBYTE(v9) = v5;
        LOBYTE(v10) = v6;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v10,
          v9,
          *(_QWORD *)(UserSessionState + 69152),
          5,
          7,
          108,
          (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
          v7);
      }
    }
  }
}
