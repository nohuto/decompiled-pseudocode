/*
 * XREFs of ?vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z @ 0x140315AA4
 * Callers:
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1400A5240 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x14016A02C (-bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTIO.c)
 * Callees:
 *     ?bRectl@RGNOBJ@@QEBAHXZ @ 0x1400AC900 (-bRectl@RGNOBJ@@QEBAHXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400ADDB8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E65B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E8CD4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z @ 0x1401FECF0 (-bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z.c)
 *     ?vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z @ 0x140315CAC (-vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall vSpAddAndCompactDirtyRect(volatile __int64 *a1, struct _RECTL *a2)
{
  int v4; // esi
  __int64 v5; // rdx
  struct REGION *v6; // rdx
  int v7; // edi
  __int64 v8; // [rsp+20h] [rbp-40h] BYREF
  __int64 v9; // [rsp+28h] [rbp-38h] BYREF
  __int64 v10; // [rsp+30h] [rbp-30h] BYREF
  __int64 v11; // [rsp+38h] [rbp-28h] BYREF
  struct _RECTL v12; // [rsp+40h] [rbp-20h] BYREF

  Gre::Base::Globals((Gre::Base *)a1);
  v4 = 0;
  v8 = _InterlockedExchange64(a1 + 24, 0LL);
  if ( !v8 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v9);
    if ( !v9 )
      goto LABEL_20;
    RGNOBJ::vSet((RGNOBJ *)&v9, a2);
    v5 = v9;
    v8 = v9;
    goto LABEL_16;
  }
  if ( (unsigned int)RGNOBJ::bRectl((RGNOBJ *)&v8) && RGNOBJ::bContain((RGNOBJ *)&v8, a2) )
  {
    v6 = (struct REGION *)_InterlockedExchange64(a1 + 24, v8);
    v8 = 0LL;
LABEL_18:
    if ( v6 )
      vSpAddAndCompactDirtyRegion((struct SPRITE *)a1, v6);
    goto LABEL_20;
  }
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v9);
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v10);
  if ( v9 )
  {
    if ( v10 )
    {
      RGNOBJ::vSet((RGNOBJ *)&v10, a2);
      v7 = RGNOBJ::iComplexity((RGNOBJ *)&v8);
      if ( RGNOBJ::bMerge((RGNOBJ *)&v9, (struct RGNOBJ *)&v8, (struct RGNOBJ *)&v10, 0xEu) )
      {
        RGNOBJ::vSwap((RGNOBJ *)&v9, (struct RGNOBJ *)&v8);
        v4 = 1;
        if ( v7 == 3 && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v8) == 2 )
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v11);
          if ( v11 )
          {
            v12 = 0LL;
            v12 = *(struct _RECTL *)(v8 + 52);
            RGNOBJ::vSet((RGNOBJ *)&v11, &v12);
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
            v8 = v11;
          }
        }
      }
    }
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v10);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v9);
  if ( v4 )
  {
    v5 = v8;
LABEL_16:
    if ( !v5 )
      goto LABEL_20;
    v6 = (struct REGION *)_InterlockedExchange64(a1 + 24, v5);
    v8 = 0LL;
    goto LABEL_18;
  }
LABEL_20:
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
}
