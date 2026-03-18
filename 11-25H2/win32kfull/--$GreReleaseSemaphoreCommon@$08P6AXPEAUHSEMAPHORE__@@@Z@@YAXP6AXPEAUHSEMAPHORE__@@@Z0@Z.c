/*
 * XREFs of ??$GreReleaseSemaphoreCommon@$08P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400DD91C
 * Callers:
 *     GreUpdateSpriteVisRgn @ 0x14001BBB0 (GreUpdateSpriteVisRgn.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x14001C3E0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400DC1D8 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vUnlockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1400DD8F4 (-vUnlockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x140268220 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreReleaseSemaphoreCommon<9,void (*)(HSEMAPHORE__ *)>(__int64 (__fastcall *a1)(__int64), __int64 a2)
{
  struct _GRETHREAD *v4; // rax

  EtwTraceGreLockReleaseSemaphore(L"SpriteRangeLock", a2);
  v4 = GreGetCurrentThreadCrossSessionCheck();
  if ( v4 )
  {
    if ( (*((_BYTE *)v4 + 17))-- == 1 )
      *(_QWORD *)v4 &= ~0x200uLL;
    if ( !*(_QWORD *)v4 )
      GrepOnAllLocksReleased();
  }
  return a1(a2);
}
