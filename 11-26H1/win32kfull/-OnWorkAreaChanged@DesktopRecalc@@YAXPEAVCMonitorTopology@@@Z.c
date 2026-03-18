/*
 * XREFs of ?OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z @ 0x14015C41C
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     ?Cancel@CRapidHpdInfo@@SAPEAVCMonitorTopology@@XZ @ 0x14015C480 (-Cancel@CRapidHpdInfo@@SAPEAVCMonitorTopology@@XZ.c)
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x14015CCB0 (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z.c)
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x14015FDB4 (-Release@CMonitorTopology@@QEAAXXZ.c)
 */

void __fastcall DesktopRecalc::OnWorkAreaChanged(DesktopRecalc *this, struct CMonitorTopology *a2)
{
  DesktopRecalc *v3; // rax
  const struct _GUID *v4; // r9
  CMonitorTopology *v5; // rdi
  _BYTE v6[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v6);
  v3 = CRapidHpdInfo::Cancel();
  v5 = v3;
  if ( v3 )
    this = v3;
  DesktopRecalc::StartRecalc(0LL, this, 0LL, v4);
  if ( v5 )
    CMonitorTopology::Release(v5);
  if ( v6[0] )
    --*(_DWORD *)(v7 + 28);
}
