/*
 * XREFs of ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x14032D6E8
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1400DAB80 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400DC1D8 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z @ 0x1401DCFCC (-GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z.c)
 *     ??0?$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140267460 (--0-$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x140329A38 (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x140329AEC (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 *     ?vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z @ 0x14032F540 (-vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z.c)
 */

void __fastcall vSpCheckForWndobjOverlap(struct _SPRITESTATE *a1, struct _RECTL *a2, struct _RECTL *a3)
{
  struct Gre::Base::SESSION_GLOBALS *v6; // rax
  __int64 v7; // rdx
  int v8; // ecx
  __int64 i; // rdi
  struct EWNDOBJ *j; // rbx
  HSEMAPHORE v11; // rbx
  const wchar_t *GlobalLockName; // rax
  struct _GRETHREAD *v13; // rax
  bool v14; // zf
  _BYTE v15[40]; // [rsp+20h] [rbp-28h] BYREF
  HSEMAPHORE v16; // [rsp+50h] [rbp+8h] BYREF

  v6 = Gre::Base::Globals(a1);
  SEMOBJ<33>::SEMOBJ<33>(&v16, v6);
  for ( i = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v8, v7) + 96) + 4824LL); i; i = *(_QWORD *)(i + 8) )
  {
    for ( j = *(struct EWNDOBJ **)(i + 24); j; j = (struct EWNDOBJ *)*((_QWORD *)j + 20) )
    {
      UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v15, j, a1);
      if ( (unsigned int)bIntersect((char *)j + 4, a2) || (unsigned int)bIntersect((char *)j + 4, a3) )
        vSpUpdateWndobjOverlap(a1, j);
      UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v15);
    }
  }
  v11 = v16;
  if ( v16 )
  {
    GlobalLockName = GrepGetGlobalLockName(33);
    EtwTraceGreLockReleaseSemaphore(GlobalLockName, v11);
    v13 = GreGetCurrentThreadCrossSessionCheck();
    if ( v13 )
    {
      v14 = (*(_QWORD *)v13 & 0xFFFFFFFDFFFFFFFFuLL) == 0;
      *(_QWORD *)v13 &= ~0x200000000uLL;
      if ( v14 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v11);
  }
}
