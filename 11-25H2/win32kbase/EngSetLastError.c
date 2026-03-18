/*
 * XREFs of EngSetLastError @ 0x140015E30
 * Callers:
 *     GreCombineRgn @ 0x14000DFC0 (GreCombineRgn.c)
 *     GrePtInRegion @ 0x140013490 (GrePtInRegion.c)
 *     GreGetRegionData @ 0x140013A10 (GreGetRegionData.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x140013CA0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     GreOffsetRgn @ 0x140014370 (GreOffsetRgn.c)
 *     GreCreateRectRgnIndirect @ 0x140015720 (GreCreateRectRgnIndirect.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEBU_POINTL@@@Z @ 0x140015B60 (-bOffset@RGNOBJ@@QEAAHPEBU_POINTL@@@Z.c)
 *     GrepDeleteDC @ 0x14001CC30 (GrepDeleteDC.c)
 *     NtGdiGetRegionData @ 0x1400207A0 (NtGdiGetRegionData.c)
 *     GreGetDeviceCaps @ 0x140043070 (GreGetDeviceCaps.c)
 *     GreIntersectClipRect @ 0x140043770 (GreIntersectClipRect.c)
 *     NtGdiGetDeviceCaps @ 0x140043D20 (NtGdiGetDeviceCaps.c)
 *     GreCreatePatternBrushInternal @ 0x140086E10 (GreCreatePatternBrushInternal.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x14008AA94 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreCreateBitmap @ 0x14008BDE0 (GreCreateBitmap.c)
 *     ?GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV?$umptr_r@E@@@Z @ 0x14008BE60 (-GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV-$umptr_r@E@@@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x14008D360 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     NtGdiCreateRectRgn @ 0x14008EAB0 (NtGdiCreateRectRgn.c)
 *     ?bOldPenNominal@DC@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x140091EDC (-bOldPenNominal@DC@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 *     ?bXform@EXFORMOBJ@@QEBA_NPEBU_VECTORL@@PEAU_VECTORFX@@_K@Z @ 0x140092EA0 (-bXform@EXFORMOBJ@@QEBA_NPEBU_VECTORL@@PEAU_VECTORFX@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEBA_NPEBU_VECTORFX@@PEAU_VECTORL@@_K@Z @ 0x140093110 (-bXform@EXFORMOBJ@@QEBA_NPEBU_VECTORFX@@PEAU_VECTORL@@_K@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x140094980 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     GreExtCreateRegion @ 0x140096D00 (GreExtCreateRegion.c)
 *     hdcOpenDCW @ 0x140097720 (hdcOpenDCW.c)
 *     NtGdiPolyPolyDraw @ 0x140097BD0 (NtGdiPolyPolyDraw.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z @ 0x140098DA0 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z.c)
 *     bPolyPolygon @ 0x140099400 (bPolyPolygon.c)
 *     ?createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z @ 0x14009A2B8 (-createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z.c)
 *     ?bXformRound@EXFORMOBJR@@QEBA_NAEAV?$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z @ 0x14009A520 (-bXformRound@EXFORMOBJR@@QEBA_NAEAV-$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEBA_NPEBU_POINTFIX@@PEAU_POINTL@@_K@Z @ 0x14009C3B0 (-bXform@EXFORMOBJ@@QEBA_NPEBU_POINTFIX@@PEAU_POINTL@@_K@Z.c)
 *     _GetDCEx @ 0x1400A2500 (_GetDCEx.c)
 *     ?GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z @ 0x1400D9C88 (-GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z.c)
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1400D9D40 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 *     NtGdiGetDeviceCapsAll @ 0x1400E76C0 (NtGdiGetDeviceCapsAll.c)
 *     GreCreateRectRgn @ 0x1400EF790 (GreCreateRectRgn.c)
 *     ?bXform@EXFORMOBJ@@QEBA_NPEBVVECTORFL@@PEAV2@_K@Z @ 0x140107390 (-bXform@EXFORMOBJ@@QEBA_NPEBVVECTORFL@@PEAV2@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEBA_NPEBU_POINTL@@PEAU2@_K@Z @ 0x1401075A0 (-bXform@EXFORMOBJ@@QEBA_NPEBU_POINTL@@PEAU2@_K@Z.c)
 *     GreRestoreDC @ 0x140124580 (GreRestoreDC.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401245F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?bXform@EXFORMOBJ@@QEBA_NPEBU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x14013E8A0 (-bXform@EXFORMOBJ@@QEBA_NPEBU_POINTL@@PEAU_POINTFIX@@_K@Z.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x14014C7D0 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z @ 0x140159390 (-iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x14016028C (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     GreIntersectVisRect @ 0x14017D540 (GreIntersectVisRect.c)
 *     ?bOffset@RGNOBJ@@QEAAHAEBVRustAutoHotpatchLockSH@@PEBU_POINTL@@@Z @ 0x1401C4680 (-bOffset@RGNOBJ@@QEAAHAEBVRustAutoHotpatchLockSH@@PEBU_POINTL@@@Z.c)
 *     ?AllocateObjectFast@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@KK@Z @ 0x1401C4C34 (-AllocateObjectFast@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@KK@Z.c)
 *     ?bXform@EXFORMOBJ@@QEBA_NPEBU_VECTORL@@PEAU2@_K@Z @ 0x1401C6BE0 (-bXform@EXFORMOBJ@@QEBA_NPEBU_VECTORL@@PEAU2@_K@Z.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1401D1F78 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 *     ?bOffset@RGNCOREOBJ@@QEAA_NPEBU_POINTL@@@Z @ 0x1401D2450 (-bOffset@RGNCOREOBJ@@QEAA_NPEBU_POINTL@@@Z.c)
 *     ??$GrepGetRegionData@$0A@VRGNCOREOBJ@@@@YAKAEAVRGNCOREOBJ@@KPEAU_RGNDATA@@@Z @ 0x1401D2700 (--$GrepGetRegionData@$0A@VRGNCOREOBJ@@@@YAKAEAVRGNCOREOBJ@@KPEAU_RGNDATA@@@Z.c)
 *     CddEngCombineRgn @ 0x1401D27B0 (CddEngCombineRgn.c)
 * Callees:
 *     <none>
 */

void __stdcall EngSetLastError(ULONG iError)
{
  _DWORD *CurrentThreadTeb; // rax

  CurrentThreadTeb = PsGetCurrentThreadTeb();
  if ( CurrentThreadTeb )
    CurrentThreadTeb[26] = iError;
}
