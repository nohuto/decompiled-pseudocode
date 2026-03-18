/*
 * XREFs of ?vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z @ 0x140315CAC
 * Callers:
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140167254 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1401863C4 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z @ 0x140315AA4 (-vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400ADDB8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E65B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E8CD4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall vSpAddAndCompactDirtyRegion(struct SPRITE *a1, struct REGION *a2)
{
  int v4; // esi
  int v5; // ebx
  __int64 v6; // rbx
  __int64 v7; // [rsp+20h] [rbp-40h] BYREF
  __int64 v8; // [rsp+28h] [rbp-38h] BYREF
  __int64 v9; // [rsp+30h] [rbp-30h] BYREF
  struct REGION *v10; // [rsp+38h] [rbp-28h] BYREF
  struct _RECTL v11; // [rsp+40h] [rbp-20h] BYREF

  Gre::Base::Globals(a1);
  while ( 1 )
  {
    v4 = 0;
    v10 = a2;
    v7 = 0LL;
    if ( !a2 )
      break;
    v7 = _InterlockedExchange64((volatile __int64 *)a1 + 24, 0LL);
    if ( v7 )
    {
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v8);
      if ( v8 )
      {
        v5 = RGNOBJ::iComplexity((RGNOBJ *)&v7);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v8, (struct RGNOBJ *)&v7, (struct RGNOBJ *)&v10, 0xEu) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v8, (struct RGNOBJ *)&v7);
          v4 = 1;
          if ( v5 == 3 && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v7) == 2 )
          {
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v9);
            if ( v9 )
            {
              v11 = 0LL;
              v11 = *(struct _RECTL *)(v7 + 52);
              RGNOBJ::vSet((RGNOBJ *)&v9, &v11);
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v7);
              v7 = v9;
            }
          }
        }
      }
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v10);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v8);
      if ( !v4 )
        break;
      v6 = v7;
    }
    else
    {
      v6 = (__int64)v10;
      v7 = (__int64)v10;
    }
    if ( v6 )
    {
      a2 = (struct REGION *)_InterlockedExchange64((volatile __int64 *)a1 + 24, v6);
      v7 = 0LL;
      if ( a2 )
        continue;
    }
    break;
  }
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v7);
}
