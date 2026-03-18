/*
 * XREFs of ??0CMonitorClock@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180166330
 * Callers:
 *     ?UpdateCompositorClock@CComposition@@IEAAXXZ @ 0x180166298 (-UpdateCompositorClock@CComposition@@IEAAXXZ.c)
 * Callees:
 *     ?GetDefaultVBlankDuration@CScheduler@@SA_KPEBVIMonitorTarget@@@Z @ 0x180166840 (-GetDefaultVBlankDuration@CScheduler@@SA_KPEBVIMonitorTarget@@@Z.c)
 *     ??0CClockBase@@IEAA@XZ @ 0x1801668C0 (--0CClockBase@@IEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CMonitorClock *__fastcall CMonitorClock::CMonitorClock(CMonitorClock *this, struct IMonitorTarget *a2)
{
  __int64 v4; // rax

  CClockBase::CClockBase(this);
  *((_QWORD *)this + 12) = a2;
  *(_QWORD *)this = &CMonitorClock::`vftable';
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 3) = CScheduler::GetDefaultVBlankDuration(a2);
  v4 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 32LL))((char *)a2 + 8);
  *(_OWORD *)((char *)this + 56) = *(_OWORD *)v4;
  *((_QWORD *)this + 9) = *(_QWORD *)(v4 + 16);
  *((_DWORD *)this + 20) = *(_DWORD *)(v4 + 24);
  return this;
}
