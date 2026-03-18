/*
 * XREFs of ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1400E18C8
 * Callers:
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KAEAVOPTAPIDCOBJ@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1400DE37C (-bSpUpdateShape@@YAHPEAVSPRITE@@KAEAVOPTAPIDCOBJ@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1400E16A0 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1401DDCF0 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x14032C124 (-bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1400E188C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 */

void __fastcall vSpDeleteShape(struct SPRITE *a1)
{
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)a1 + 18) )
  {
    v3 = *((_QWORD *)a1 + 18);
    XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v3);
    *((_QWORD *)a1 + 18) = 0LL;
  }
  v2 = *((_QWORD *)a1 + 16);
  if ( v2 && (*(_DWORD *)a1 & 0x40) == 0 )
  {
    if ( (unsigned int)HmgQueryAltLock(*(_QWORD *)(v2 - 24)) == 1 )
      vSpDeleteSurface(*((struct _SURFOBJ **)a1 + 16));
    *((_QWORD *)a1 + 16) = 0LL;
  }
}
