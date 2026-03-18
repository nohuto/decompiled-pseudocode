/*
 * XREFs of ??1CRecalcProp@@AEAA@XZ @ 0x1402102EC
 * Callers:
 *     ??_GCRecalcProp@@AEAAPEAXI@Z @ 0x1402102BC (--_GCRecalcProp@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x14015FDB4 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     ?ClearAnchorPosition@CRecalcProp@@AEAAXXZ @ 0x140210358 (-ClearAnchorPosition@CRecalcProp@@AEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall CRecalcProp::~CRecalcProp(CRecalcProp *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx
  CMonitorTopology *v4; // rcx

  *(_QWORD *)this = &CRecalcProp::`vftable';
  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 4);
  if ( v2 )
    (**v2)(v2, 1LL);
  v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 5);
  if ( v3 )
    (**v3)(v3, 1LL);
  v4 = (CMonitorTopology *)*((_QWORD *)this + 6);
  if ( v4 )
    CMonitorTopology::Release(v4);
  CRecalcProp::ClearAnchorPosition(this);
}
