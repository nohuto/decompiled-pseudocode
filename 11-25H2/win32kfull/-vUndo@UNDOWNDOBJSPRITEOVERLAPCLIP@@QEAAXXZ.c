/*
 * XREFs of ?vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x14032FB18
 * Callers:
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x140007408 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z @ 0x1401DCFCC (-GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z.c)
 *     ??0?$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140267460 (--0-$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z @ 0x140302010 (-vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z.c)
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x140329A38 (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x140329AEC (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 */

void __fastcall UNDOWNDOBJSPRITEOVERLAPCLIP::vUndo(UNDOWNDOBJSPRITEOVERLAPCLIP *this)
{
  __int64 v2; // rbp
  struct Gre::Base::SESSION_GLOBALS *v3; // rax
  __int64 v4; // rdx
  int v5; // ecx
  __int64 i; // rdi
  __int64 j; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int k; // esi
  HSEMAPHORE v11; // rbx
  const wchar_t *GlobalLockName; // rax
  struct _GRETHREAD *v13; // rax
  bool v14; // zf
  _BYTE v15[56]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF
  HSEMAPHORE v18; // [rsp+70h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)this + 16LL);
  v3 = Gre::Base::Globals(this);
  SEMOBJ<33>::SEMOBJ<33>(&v18, v3);
  for ( i = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v5, v4) + 96) + 4824LL); i; i = *(_QWORD *)(i + 8) )
  {
    for ( j = *(_QWORD *)(i + 24); j; j = *(_QWORD *)(j + 160) )
    {
      UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v15, (struct EWNDOBJ *)j, (struct _SPRITESTATE *)v2);
      if ( (*(_DWORD *)(j + 184) & 0x200) != 0 )
      {
        v8 = *(_QWORD *)(j + 192);
        v9 = *(_QWORD *)(v2 + 712);
        v16 = v9;
        v17 = v8;
        if ( v8 )
        {
          if ( v9 )
          {
            for ( k = 0; k < *((_DWORD *)this + 2); ++k )
            {
              if ( RGNOBJ::bInside((RGNOBJ *)&v17, (struct _RECTL *)(*((_QWORD *)this + 2) + 16LL * k)) == 2 )
              {
                RGNOBJ::vSet((RGNOBJ *)&v16);
                vUpdateClientRgnOnSpriteOverlap((struct EWNDOBJ *)j, (struct RGNOBJ *)&v16);
                *(_QWORD *)(v2 + 712) = v16;
                *(_DWORD *)(j + 184) |= 0x800000u;
                break;
              }
            }
          }
        }
      }
      UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v15);
    }
  }
  v11 = v18;
  if ( v18 )
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
