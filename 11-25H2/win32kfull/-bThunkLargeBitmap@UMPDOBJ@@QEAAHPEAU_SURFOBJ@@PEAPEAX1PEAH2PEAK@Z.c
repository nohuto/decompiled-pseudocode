/*
 * XREFs of ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1400CF7F8
 * Callers:
 *     ?UMPDDrvStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1400CE390 (-UMPDDrvStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUS.c)
 *     ?UMPDDrvStartBanding@@YAHPEAU_SURFOBJ@@PEAU_POINTL@@@Z @ 0x1400CE6B0 (-UMPDDrvStartBanding@@YAHPEAU_SURFOBJ@@PEAU_POINTL@@@Z.c)
 *     ?UMPDDrvQueryPerBandInfo@@YAKPEAU_SURFOBJ@@PEAU_PERBANDINFO@@@Z @ 0x1400CE860 (-UMPDDrvQueryPerBandInfo@@YAKPEAU_SURFOBJ@@PEAU_PERBANDINFO@@@Z.c)
 *     ?UMPDDrvNextBand@@YAHPEAU_SURFOBJ@@PEAU_POINTL@@@Z @ 0x1400CECC0 (-UMPDDrvNextBand@@YAHPEAU_SURFOBJ@@PEAU_POINTL@@@Z.c)
 *     ?bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z @ 0x1400CF678 (-bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z.c)
 *     ?UMPDDrvStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1400D1150 (-UMPDDrvStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@P.c)
 *     ?UMPDDrvStartPage@@YAHPEAU_SURFOBJ@@@Z @ 0x14020EA30 (-UMPDDrvStartPage@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?UMPDDrvDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z @ 0x140334EF0 (-UMPDDrvDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z.c)
 *     ?UMPDDrvEndDoc@@YAHPEAU_SURFOBJ@@K@Z @ 0x140335100 (-UMPDDrvEndDoc@@YAHPEAU_SURFOBJ@@K@Z.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1403352A0 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1403355A0 (-UMPDDrvGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_R.c)
 *     ?UMPDDrvIcmCheckBitmapBits@@YAHPEAUDHPDEV__@@PEAXPEAU_SURFOBJ@@PEAE@Z @ 0x1403358D0 (-UMPDDrvIcmCheckBitmapBits@@YAHPEAUDHPDEV__@@PEAXPEAU_SURFOBJ@@PEAE@Z.c)
 *     ?UMPDDrvLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x140335CE0 (-UMPDDrvLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?UMPDDrvPaint@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x140335F30 (-UMPDDrvPaint@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z.c)
 *     ?UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z @ 0x140336740 (-UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z.c)
 *     ?UMPDDrvSendPage@@YAHPEAU_SURFOBJ@@@Z @ 0x140336E00 (-UMPDDrvSendPage@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?UMPDDrvStartDoc@@YAHPEAU_SURFOBJ@@PEAGK@Z @ 0x140336FB0 (-UMPDDrvStartDoc@@YAHPEAU_SURFOBJ@@PEAGK@Z.c)
 * Callees:
 *     ?ulGetMaxSize@UMPDOBJ@@QEBAKXZ @ 0x1400D0CF8 (-ulGetMaxSize@UMPDOBJ@@QEBAKXZ.c)
 *     ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x140337A64 (-bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z.c)
 */

__int64 __fastcall UMPDOBJ::bThunkLargeBitmap(
        UMPDOBJ *this,
        struct _SURFOBJ *a2,
        void **a3,
        void **a4,
        int *a5,
        int *a6,
        unsigned int *a7)
{
  unsigned int v8; // r10d
  BOOL v10; // r8d
  struct _SURFOBJ *v11; // rdx
  int v12; // r8d
  unsigned int MaxSize; // r9d
  UMPDOBJ *v14; // r11
  unsigned int v15; // ebx
  unsigned int cjBits; // eax
  unsigned int v17; // ecx

  v8 = 1;
  if ( !a2 || !a2->pvBits )
    return v8;
  v10 = 0;
  if ( !a2->iType )
    v10 = SLOBYTE(a2->fjBitmap) < 0;
  *a5 = !v10;
  *a3 = a2->pvBits;
  *a4 = a2->pvScan0;
  MaxSize = UMPDOBJ::ulGetMaxSize(this);
  v15 = *a7 + 80;
  if ( *a7 < 0xFFFFFFB0 )
  {
    if ( v11->pvBits )
    {
      cjBits = v11->cjBits;
      if ( cjBits + 7 < cjBits )
        return 0LL;
      v17 = (cjBits + 7) & 0xFFFFFFF8;
      if ( v17 + v15 < v17 )
        return 0LL;
      if ( v17 + v15 <= MaxSize || v12 )
      {
        v15 += v17;
      }
      else
      {
        v8 = UMPDOBJ::bSendLargeBitmap(v14, v11, a6);
        if ( !v8 )
          return v8;
      }
    }
    *a7 = v15;
    return v8;
  }
  return 0LL;
}
