/*
 * XREFs of ??$GreReleaseSemaphoreExclusive@$08PEAUHSEMAPHORE__@@@@YAXPEAUHSEMAPHORE__@@@Z @ 0x1400DC080
 * Callers:
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1400DB37C (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ?vUnlockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1400DC060 (-vUnlockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall GreReleaseSemaphoreExclusive<9,HSEMAPHORE__ *>(HSEMAPHORE a1)
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
  GreReleaseSemaphoreExclusiveInternal(a1);
}
