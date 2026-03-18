/*
 * XREFs of ?vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x140253454
 * Callers:
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x140166D28 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z @ 0x1401F2424 (-GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0CB@@@YAXXZ @ 0x140288D1C (--$GrepAcquireLockValidate@$0CB@@@YAXXZ.c)
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x140312B4C (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x140312C04 (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 *     ?vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z @ 0x14031808C (-vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z.c)
 */

void __fastcall UNDOWNDOBJSPRITEOVERLAPCLIP::vRedo(UNDOWNDOBJSPRITEOVERLAPCLIP *this)
{
  struct _SPRITESTATE *v1; // rbp
  HSEMAPHORE v2; // rsi
  __int64 v3; // rdx
  int v4; // ecx
  __int64 i; // rdi
  __int64 j; // rbx
  const wchar_t *GlobalLockName; // rax
  struct _GRETHREAD *v8; // rax
  bool v9; // zf
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(struct _SPRITESTATE **)(*(_QWORD *)this + 16LL);
  v2 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(this) + 416LL);
  GreAcquireSemaphoreInternal(v2);
  GrepAcquireLockValidate<33>();
  for ( i = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v4, v3) + 96) + 4816LL); i; i = *(_QWORD *)(i + 8) )
  {
    for ( j = *(_QWORD *)(i + 24); j; j = *(_QWORD *)(j + 160) )
    {
      UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v10, (struct EWNDOBJ *)j, v1);
      if ( (*(_DWORD *)(j + 184) & 0x800200) == 0x800200 )
      {
        *(_DWORD *)(j + 184) &= ~0x800000u;
        vSpUpdateWndobjOverlap(v1, (struct EWNDOBJ *)j);
      }
      UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v10);
    }
  }
  if ( v2 )
  {
    GlobalLockName = GrepGetGlobalLockName(33);
    EtwTraceGreLockReleaseSemaphore(GlobalLockName, v2);
    v8 = GreGetCurrentThreadCrossSessionCheck();
    if ( v8 )
    {
      v9 = (*(_QWORD *)v8 & 0xFFFFFFFDFFFFFFFFuLL) == 0;
      *(_QWORD *)v8 &= ~0x200000000uLL;
      if ( v9 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v2);
  }
}
