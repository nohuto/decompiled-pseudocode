/*
 * XREFs of ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x14018A09C
 * Callers:
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x14006D6CC (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1400AD828 (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     EngPlgBlt @ 0x1400EA130 (EngPlgBlt.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x140169778 (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     DxgkEngBltViaGDI @ 0x1401A9910 (DxgkEngBltViaGDI.c)
 *     ?GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z @ 0x14023DAF4 (-GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z.c)
 *     ?vSpAdjustSpriteDirtyAccum@@YAXPEAVSPRITE@@PEAU_RECTL@@1PEAU_POINTL@@2@Z @ 0x14031602C (-vSpAdjustSpriteDirtyAccum@@YAXPEAVSPRITE@@PEAU_RECTL@@1PEAU_POINTL@@2@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x14031912C (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?vOffset@EWNDOBJ@@QEAAXJJ@Z @ 0x1403195DC (-vOffset@EWNDOBJ@@QEAAXJJ@Z.c)
 *     GreSetClientRgn @ 0x14031A314 (GreSetClientRgn.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@AEAVSURFMEM@@1KK@Z @ 0x14031E140 (-bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@AEAVSURFMEM@@1KK@Z.c)
 *     ??$NtGdiExtFloodFillImpl@$0A@@@YAHPEAUHDC__@@HHKI@Z @ 0x140331F58 (--$NtGdiExtFloodFillImpl@$0A@@@YAHPEAUHDC__@@HHKI@Z.c)
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x140348168 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
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
