/*
 * XREFs of ??0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1400E6A38
 * Callers:
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x140014230 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKA.c)
 *     EngFillPath @ 0x1400A3A10 (EngFillPath.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1400DDA04 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU.c)
 *     GreFillRgn @ 0x1400E2308 (GreFillRgn.c)
 *     EngStrokeAndFillPath @ 0x1400E48A0 (EngStrokeAndFillPath.c)
 *     NtGdiCreateEllipticRgn @ 0x1400E5970 (NtGdiCreateEllipticRgn.c)
 *     NtGdiPathToRegion @ 0x1400E5CB0 (NtGdiPathToRegion.c)
 *     NtGdiCreateRoundRectRgn @ 0x1400E6250 (NtGdiCreateRoundRectRgn.c)
 *     ?GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z @ 0x140209018 (-GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     <none>
 */

RGNMEMOBJ *__fastcall RGNMEMOBJ::RGNMEMOBJ(RGNMEMOBJ *this, struct EPATHOBJ *a2, unsigned int a3, struct _RECTL *a4)
{
  *(_QWORD *)this = 0LL;
  RGNMEMOBJ::vCreate(this, a2, a3, a4);
  return this;
}
