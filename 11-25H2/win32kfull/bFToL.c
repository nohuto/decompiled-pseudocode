/*
 * XREFs of bFToL @ 0x1400A4410
 * Callers:
 *     ?ExtTextOutRect@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAUtagRECT@@AEBUTag@RFONTOBJ@@@Z @ 0x14007629C (-ExtTextOutRect@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAUtagRECT@@AEBUTag@RFONTOBJ@@@Z.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x140097B7C (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     bCvtPts1 @ 0x1400A0334 (bCvtPts1.c)
 *     ?bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z @ 0x1400A419C (-bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z.c)
 *     ?ptlXform@EBOX@@QEAA?AU_POINTL@@AEAVEPOINTFL@@@Z @ 0x1400A429C (-ptlXform@EBOX@@QEAA-AU_POINTL@@AEAVEPOINTFL@@@Z.c)
 *     ?bComputeIntersect@pathwide@@YAHPEAVEVECTORFX@@0000@Z @ 0x1400A4D2C (-bComputeIntersect@pathwide@@YAHPEAVEVECTORFX@@0000@Z.c)
 *     ?vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z @ 0x1400A968C (-vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z @ 0x1400ACAC0 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z.c)
 *     ?lGetDefaultWorldHeight@@YAJAEAVUDCOBJ@@@Z @ 0x1400BADDC (-lGetDefaultWorldHeight@@YAJAEAVUDCOBJ@@@Z.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVUDCOBJ@@@Z @ 0x1400BC67C (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVUDCOBJ@@@Z.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1400BF550 (-bTextExtent@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 *     ?vCharPos_G2@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z @ 0x1400BF9D0 (-vCharPos_G2@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z.c)
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1400BFDD0 (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     ?vVecSquareCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z @ 0x1400C03B8 (-vVecSquareCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z.c)
 *     GreFillRgn @ 0x1400E2308 (GreFillRgn.c)
 *     GreFrameRgn @ 0x1400E295C (GreFrameRgn.c)
 *     ?cjGetBrushOrPen@@YAJPEAXH0@Z @ 0x1400E3294 (-cjGetBrushOrPen@@YAJPEAXH0@Z.c)
 *     ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x1400E6508 (-bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z.c)
 *     ?lfOrientation@IFIOBJ@@QEAAJXZ @ 0x1401038CC (-lfOrientation@IFIOBJ@@QEAAJXZ.c)
 *     ?vInitPageToDevice@DC@@QEAAXPEAUMATRIX@@@Z @ 0x14017C50C (-vInitPageToDevice@DC@@QEAAXPEAUMATRIX@@@Z.c)
 *     ?GrepScaleValues@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x14019E730 (-GrepScaleValues@@YAHAEAVXDCOBJ@@PEAJI@Z.c)
 *     ?bCalculateWishCell@MAPPER@@AEAAHXZ @ 0x1401ACDEC (-bCalculateWishCell@MAPPER@@AEAAHXZ.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1401DD684 (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 *     ?vCharPos_G3@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJPEBJPEAJ@Z @ 0x140230D24 (-vCharPos_G3@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJPEBJPEAJ@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x140261548 (-bRealizeFont@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_X.c)
 *     ?vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVUDCOBJ@@PEAU_IFIMETRICS@@@Z @ 0x1403048D4 (-vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVUDCOBJ@@PEAU_IFIMETRICS@@@Z.c)
 *     ?bSplitTriangle@@YAHPEAU_TRIVERTEX@@PEAKPEAU_GRADIENT_TRIANGLE@@1PEAE@Z @ 0x140304C34 (-bSplitTriangle@@YAHPEAU_TRIVERTEX@@PEAKPEAU_GRADIENT_TRIANGLE@@1PEAE@Z.c)
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x14031283C (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?vScale@EPOINTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1403130F0 (-vScale@EPOINTL@@QEAAXAEBVPOINTFL@@@Z.c)
 *     GreGetBitmapDpiScaleValue @ 0x1403329C8 (GreGetBitmapDpiScaleValue.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall bFToL(double a1, int *a2, unsigned int a3)
{
  int v3; // r10d
  signed int v5; // r9d
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // rdx
  int v11; // ecx

  v3 = _mm_cvtsi128_si32(*(__m128i *)&a1);
  v5 = (unsigned __int8)(v3 >> 23) + ((a3 >> 1) & 4 | 0xFFFFFF8A);
  if ( v5 > 40 )
    return 0LL;
  v6 = v3 & 0x7FFFFF | 0x800000LL;
  if ( v5 < 0 )
    v7 = v6 >> -(char)v5;
  else
    v7 = v6 << v5;
  v8 = v7 + 0x80000000LL;
  if ( (a3 & 1) != 0 )
    v8 = v7;
  result = 1LL;
  v10 = v8 >> 32;
  v11 = -(int)v10;
  if ( v3 >= 0 )
    v11 = v10;
  *a2 = v11;
  return result;
}
