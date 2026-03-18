/*
 * XREFs of ??1CCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x1400232B8
 * Callers:
 *     ?NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z @ 0x140024CF0 (-NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x140197AB8 (xxxSystemParametersInfoWorker.c)
 *     ??1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x140217238 (--1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     ?s_OnRecalcReenabled@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1402C68FC (-s_OnRecalcReenabled@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 *     ?GetActionTopology@@YA_NAEBU_WINDOW_ACTION@@_NPEAUtagWND@@PEAPEAVCMonitorTopology@@@Z @ 0x1402CAEB8 (-GetActionTopology@@YA_NAEBU_WINDOW_ACTION@@_NPEAUtagWND@@PEAPEAVCMonitorTopology@@@Z.c)
 * Callees:
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x1400229F8 (-Release@CMonitorTopology@@QEAAXXZ.c)
 */

void __fastcall CCurrentMonitorTopologyPtr::~CCurrentMonitorTopologyPtr(CMonitorTopology **this)
{
  CMonitorTopology *v1; // rcx

  v1 = *this;
  if ( v1 )
    CMonitorTopology::Release(v1);
}
