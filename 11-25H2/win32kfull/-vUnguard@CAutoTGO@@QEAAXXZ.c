/*
 * XREFs of ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x140079978
 * Callers:
 *     ?SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x140010410 (-SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_P.c)
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x140014230 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKA.c)
 *     ??1PATHSTACKOBJ@@QEAA@XZ @ 0x140079098 (--1PATHSTACKOBJ@@QEAA@XZ.c)
 *     ?GrepLineTo@@YAHAEAVXDCOBJ@@HH@Z @ 0x1400790D8 (-GrepLineTo@@YAHAEAVXDCOBJ@@HH@Z.c)
 *     GrePolyBezierTo @ 0x1400799B0 (GrePolyBezierTo.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x140086C60 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?GrepPolyPolygon@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@PEAHHI@Z @ 0x1400A1F34 (-GrepPolyPolygon@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@PEAHHI@Z.c)
 *     ?GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z @ 0x1400A7B74 (-GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400D66EC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     NtGdiStrokeAndFillPath @ 0x1400E5050 (NtGdiStrokeAndFillPath.c)
 *     NtGdiSelectClipPath @ 0x1400E5210 (NtGdiSelectClipPath.c)
 *     NtGdiWidenPath @ 0x1400E53B0 (NtGdiWidenPath.c)
 *     NtGdiStrokePath @ 0x1400E5B50 (NtGdiStrokePath.c)
 *     NtGdiPathToRegion @ 0x1400E5CB0 (NtGdiPathToRegion.c)
 *     NtGdiFillPath @ 0x1400E5DF0 (NtGdiFillPath.c)
 *     NtGdiCloseFigure @ 0x1400E5F50 (NtGdiCloseFigure.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1400E61B8 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     NtGdiRoundRect @ 0x1400E6A70 (NtGdiRoundRect.c)
 *     GreEllipse @ 0x1400E6D70 (GreEllipse.c)
 *     ?GrepRectangle@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400E7180 (-GrepRectangle@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     NtGdiArcInternal @ 0x1400E8410 (NtGdiArcInternal.c)
 *     ?GrePolyDraw@@YAHPEAUHDC__@@AEAV?$umptr_r@UtagPOINT@@@@AEAV?$umptr_r@E@@K@Z @ 0x140179C90 (-GrePolyDraw@@YAHPEAUHDC__@@AEAV-$umptr_r@UtagPOINT@@@@AEAV-$umptr_r@E@@K@Z.c)
 *     ?GrepPolyPolyline@@YAHAEAVXDCOBJ@@PEBUtagPOINT@@PEBKKI@Z @ 0x1401C62B4 (-GrepPolyPolyline@@YAHAEAVXDCOBJ@@PEBUtagPOINT@@PEBKKI@Z.c)
 *     ??1SURFFAKEOBJ@@QEAA@XZ @ 0x1401D3F50 (--1SURFFAKEOBJ@@QEAA@XZ.c)
 *     ?SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1401DC270 (-SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@.c)
 *     GrePolylineTo @ 0x1401DFD20 (GrePolylineTo.c)
 *     NtGdiEngCheckAbort @ 0x1401F8490 (NtGdiEngCheckAbort.c)
 *     ?DoFontManagement@@YAKAEAVUDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z @ 0x1403270C8 (-DoFontManagement@@YAKAEAVUDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoTGO::vUnguard(CAutoTGO *this)
{
  if ( *((_DWORD *)this + 8) )
  {
    PopThreadGuardedObject(this);
    *((_DWORD *)this + 8) = 0;
  }
}
