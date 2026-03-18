/*
 * XREFs of ?ClearLastInterceptedTopology@CRecalcProp@@QEAAXXZ @ 0x1402DD620
 * Callers:
 *     ?BeginApplyWindowActionOld@CRecalcProp@@QEAA_NPEAUtagWND@@I@Z @ 0x1402DD234 (-BeginApplyWindowActionOld@CRecalcProp@@QEAA_NPEAUtagWND@@I@Z.c)
 *     ?xxxEndApplyWindowActionOld@CRecalcProp@@QEAAXPEAUtagWND@@PEAVCMonitorTopology@@@Z @ 0x1402DF288 (-xxxEndApplyWindowActionOld@CRecalcProp@@QEAAXPEAUtagWND@@PEAVCMonitorTopology@@@Z.c)
 *     ?xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402E01BC (-xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcCo.c)
 * Callees:
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x14015FDB4 (-Release@CMonitorTopology@@QEAAXXZ.c)
 */

void __fastcall CRecalcProp::ClearLastInterceptedTopology(CRecalcProp *this)
{
  CMonitorTopology *v2; // rcx

  v2 = (CMonitorTopology *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    CMonitorTopology::Release(v2);
    *((_QWORD *)this + 6) = 0LL;
  }
}
