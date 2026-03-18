/*
 * XREFs of ??$GreReleaseSemaphoreCommon@$09P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FEE80
 * Callers:
 *     EngHTBlt @ 0x14006F20C (EngHTBlt.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1400FE4C0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x1400FEE48 (-vRelease@HTSEMOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreReleaseSemaphoreCommon<10,void (*)(HSEMAPHORE__ *)>(
        __int64 (__fastcall *a1)(__int64),
        __int64 a2)
{
  struct _GRETHREAD *v4; // rax

  EtwTraceGreLockReleaseSemaphore(L"HT", a2);
  v4 = GreGetCurrentThreadCrossSessionCheck();
  if ( v4 )
  {
    if ( (*((_BYTE *)v4 + 18))-- == 1 )
      *(_QWORD *)v4 &= ~0x400uLL;
    if ( !*(_QWORD *)v4 )
      GrepOnAllLocksReleased();
  }
  return a1(a2);
}
