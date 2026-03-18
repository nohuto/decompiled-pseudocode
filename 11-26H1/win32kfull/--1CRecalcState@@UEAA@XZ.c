/*
 * XREFs of ??1CRecalcState@@UEAA@XZ @ 0x14015F5F0
 * Callers:
 *     ??_GCRecalcState@@UEAAPEAXI@Z @ 0x14015F5B0 (--_GCRecalcState@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x14015FDB4 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
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
