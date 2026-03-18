/*
 * XREFs of ?ClearAnchorPosition@CRecalcProp@@AEAAXXZ @ 0x140206524
 * Callers:
 *     ??1CRecalcProp@@AEAA@XZ @ 0x1402C392C (--1CRecalcProp@@AEAA@XZ.c)
 *     ?SetAnchorPosition@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1402C57B8 (-SetAnchorPosition@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     ?UpdateActionForAnchor@CRecalcProp@@AEAAXPEAVCWindowAction@AdvancedWindowPos@@PEAPEBUMonitorData@CMonitorTopology@@PEAW4Result@CRecalcContext@@PEAVCRecalcState@@_N@Z @ 0x1402C6604 (-UpdateActionForAnchor@CRecalcProp@@AEAAXPEAVCWindowAction@AdvancedWindowPos@@PEAPEBUMonitorData.c)
 *     ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402C8210 (-xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z.c)
 *     ?xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402C8868 (-xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcCo.c)
 * Callees:
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x1400229F8 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
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
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
        || (v6 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v6 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
      {
        v5 = 0;
      }
      if ( v6 || v5 )
      {
        v7 = *v4;
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v3);
        LOBYTE(v9) = v5;
        LOBYTE(v10) = v6;
        WPP_RECORDER_AND_TRACE_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v10,
          v9,
          *(_QWORD *)(UserSessionState + 69160),
          5,
          7,
          108,
          (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
          v7);
      }
    }
  }
}
