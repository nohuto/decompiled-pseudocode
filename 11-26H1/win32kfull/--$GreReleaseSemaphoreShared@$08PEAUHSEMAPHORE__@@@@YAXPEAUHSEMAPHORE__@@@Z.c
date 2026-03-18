/*
 * XREFs of ??$GreReleaseSemaphoreShared@$08PEAUHSEMAPHORE__@@@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14016A694
 * Callers:
 *     ?vUnlockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x14016A674 (-vUnlockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall GreReleaseSemaphoreShared<9,HSEMAPHORE__ *>(HSEMAPHORE a1)
{
  struct _GRETHREAD *v2; // rax

  EtwTraceGreLockReleaseSemaphore(L"SpriteRangeLock", a1);
  v2 = GreGetCurrentThreadCrossSessionCheck();
  if ( v2 )
  {
    if ( (*((_BYTE *)v2 + 17))-- == 1 )
      *(_QWORD *)v2 &= ~0x200uLL;
    if ( !*(_QWORD *)v2 )
      GrepOnAllLocksReleased();
  }
  GreReleaseSemaphoreSharedInternal(a1);
}
