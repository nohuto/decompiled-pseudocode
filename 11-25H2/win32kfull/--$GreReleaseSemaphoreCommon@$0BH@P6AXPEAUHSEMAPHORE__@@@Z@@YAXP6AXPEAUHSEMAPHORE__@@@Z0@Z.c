/*
 * XREFs of ??$GreReleaseSemaphoreCommon@$0BH@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1401BD10C
 * Callers:
 *     UnmapPrintKView @ 0x1401BD088 (UnmapPrintKView.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreReleaseSemaphoreCommon<23,void (*)(HSEMAPHORE__ *)>(
        __int64 (__fastcall *a1)(__int64),
        __int64 a2)
{
  struct _GRETHREAD *v4; // rax
  bool v5; // zf

  EtwTraceGreLockReleaseSemaphore(L"PrintKView", a2);
  v4 = GreGetCurrentThreadCrossSessionCheck();
  if ( v4 )
  {
    v5 = (*(_QWORD *)v4 & 0xFFFFFFFFFF7FFFFFuLL) == 0;
    *(_QWORD *)v4 &= ~0x800000uLL;
    if ( v5 )
      GrepOnAllLocksReleased();
  }
  return a1(a2);
}
