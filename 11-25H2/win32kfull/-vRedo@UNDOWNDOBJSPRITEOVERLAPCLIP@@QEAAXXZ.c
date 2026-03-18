/*
 * XREFs of ?vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x1402192B0
 * Callers:
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x140007408 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z @ 0x1401DCFCC (-GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z.c)
 *     ??0?$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140267460 (--0-$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x140329A38 (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x140329AEC (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 *     ?vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z @ 0x14032F540 (-vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z.c)
 */

void __fastcall UNDOWNDOBJSPRITEOVERLAPCLIP::vRedo(UNDOWNDOBJSPRITEOVERLAPCLIP *this)
{
  struct _SPRITESTATE *v1; // rsi
  struct Gre::Base::SESSION_GLOBALS *v2; // rax
  __int64 v3; // rdx
  int v4; // ecx
  __int64 i; // rdi
  __int64 j; // rbx
  HSEMAPHORE v7; // rbx
  const wchar_t *GlobalLockName; // rax
  struct _GRETHREAD *v9; // rax
  bool v10; // zf
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF
  HSEMAPHORE v12; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(struct _SPRITESTATE **)(*(_QWORD *)this + 16LL);
  v2 = Gre::Base::Globals(this);
  SEMOBJ<33>::SEMOBJ<33>(&v12, v2);
  for ( i = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v4, v3) + 96) + 4824LL); i; i = *(_QWORD *)(i + 8) )
  {
    for ( j = *(_QWORD *)(i + 24); j; j = *(_QWORD *)(j + 160) )
    {
      UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v11, (struct EWNDOBJ *)j, v1);
      if ( (*(_DWORD *)(j + 184) & 0x800200) == 0x800200 )
      {
        *(_DWORD *)(j + 184) &= ~0x800000u;
        vSpUpdateWndobjOverlap(v1, (struct EWNDOBJ *)j);
      }
      UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v11);
    }
  }
  v7 = v12;
  if ( v12 )
  {
    GlobalLockName = GrepGetGlobalLockName(33);
    EtwTraceGreLockReleaseSemaphore(GlobalLockName, v7);
    v9 = GreGetCurrentThreadCrossSessionCheck();
    if ( v9 )
    {
      v10 = (*(_QWORD *)v9 & 0xFFFFFFFDFFFFFFFFuLL) == 0;
      *(_QWORD *)v9 &= ~0x200000000uLL;
      if ( v10 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v7);
  }
}
