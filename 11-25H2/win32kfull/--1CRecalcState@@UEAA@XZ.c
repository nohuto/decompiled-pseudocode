/*
 * XREFs of ??1CRecalcState@@UEAA@XZ @ 0x140023D64
 * Callers:
 *     ??_GCRecalcState@@UEAAPEAXI@Z @ 0x140023F60 (--_GCRecalcState@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x1400229F8 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

void __fastcall CRecalcState::~CRecalcState(CMonitorTopology **this)
{
  CMonitorTopology *v2; // rcx

  *this = (CMonitorTopology *)&CRecalcState::`vftable';
  CMonitorTopology::Release(this[2]);
  v2 = this[1];
  if ( v2 )
    (**(void (__fastcall ***)(CMonitorTopology *, __int64))v2)(v2, 1LL);
}
