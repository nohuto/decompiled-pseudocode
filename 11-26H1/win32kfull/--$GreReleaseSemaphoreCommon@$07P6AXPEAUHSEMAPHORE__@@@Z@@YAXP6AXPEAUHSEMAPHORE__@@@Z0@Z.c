/*
 * XREFs of ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1401BD5EC
 * Callers:
 *     ??1ENTER_GRE_DWM_CRIT@@QEAA@XZ @ 0x1400A8A5C (--1ENTER_GRE_DWM_CRIT@@QEAA@XZ.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(__int64 (__fastcall *a1)(__int64), __int64 a2)
{
  struct _GRETHREAD *v4; // rax

  EtwTraceGreLockReleaseSemaphore(L"DevLock", a2);
  v4 = GreGetCurrentThreadCrossSessionCheck();
  if ( v4 )
  {
    if ( (*((_BYTE *)v4 + 16))-- == 1 )
      *(_QWORD *)v4 &= ~0x100uLL;
    if ( !*(_QWORD *)v4 )
      GrepOnAllLocksReleased();
  }
  return a1(a2);
}
