/*
 * XREFs of ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x140152CAC
 * Callers:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400872EC (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x14009B018 (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1400DEF8C (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     EngPlgBlt @ 0x1400E89F0 (EngPlgBlt.c)
 *     NtGdiExtFloodFill @ 0x14015F420 (NtGdiExtFloodFill.c)
 *     DxgkEngBltViaGDI @ 0x1401B4070 (DxgkEngBltViaGDI.c)
 *     ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x1401B4D84 (-GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z.c)
 *     ?GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z @ 0x140209018 (-GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x140301A98 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?vOffset@EWNDOBJ@@QEAAXJJ@Z @ 0x140301F5C (-vOffset@EWNDOBJ@@QEAAXJJ@Z.c)
 *     GreSetClientRgn @ 0x140302BC8 (GreSetClientRgn.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@AEAVSURFMEM@@1KK@Z @ 0x140306BB8 (-bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@AEAVSURFMEM@@1KK@Z.c)
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x140325E04 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 *     ?vSpAdjustSpriteDirtyAccum@@YAXPEAVSPRITE@@PEAU_RECTL@@1PEAU_POINTL@@2@Z @ 0x14032D464 (-vSpAdjustSpriteDirtyAccum@@YAXPEAVSPRITE@@PEAU_RECTL@@1PEAU_POINTL@@2@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ERECTL::bOffsetAdd(ERECTL *this, const struct _POINTL *a2, int a3)
{
  __int64 x; // r8
  __int64 y; // r8

  if ( a3 )
  {
    x = a2->x;
    if ( (unsigned __int64)(x + *(int *)this + 0x80000000LL) > 0xFFFFFFFF )
      return 0LL;
    if ( (unsigned __int64)(x + *((int *)this + 2) + 0x80000000LL) > 0xFFFFFFFF )
      return 0LL;
    y = a2->y;
    if ( (unsigned __int64)(y + *((int *)this + 1) + 0x80000000LL) > 0xFFFFFFFF
      || (unsigned __int64)(y + *((int *)this + 3) + 0x80000000LL) > 0xFFFFFFFF )
    {
      return 0LL;
    }
  }
  *(_DWORD *)this += a2->x;
  *((_DWORD *)this + 2) += a2->x;
  *((_DWORD *)this + 1) += a2->y;
  *((_DWORD *)this + 3) += a2->y;
  return 1LL;
}
