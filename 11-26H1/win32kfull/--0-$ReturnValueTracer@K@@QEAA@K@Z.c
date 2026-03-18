/*
 * XREFs of ??0?$ReturnValueTracer@K@@QEAA@K@Z @ 0x1400C5FFC
 * Callers:
 *     ?GrepCreateDIBitmap@@YA?AVSURFREF@@AEAVOPTAPIDCOBJ@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x1400167D4 (-GrepCreateDIBitmap@@YA-AVSURFREF@@AEAVOPTAPIDCOBJ@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK.c)
 *     ?ExtTextOutRect@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x14007B620 (-ExtTextOutRect@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@Z @ 0x1400BC904 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@.c)
 *     ?GrepGetRealizationInfo@@YA?AV?$ReturnValueTracer@H@@AEAVDCOBJ@@PEAUtagFONT_REALIZATION_INFO2@@@Z @ 0x1400C2D54 (-GrepGetRealizationInfo@@YA-AV-$ReturnValueTracer@H@@AEAVDCOBJ@@PEAUtagFONT_REALIZATION_INFO2@@@.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?GetRealizationInfo@RFONTOBJ@@QEAA?AV?$ReturnValueTracer@H@@PEAUtagFONT_REALIZATION_INFO2@@@Z @ 0x1400C5D6C (-GetRealizationInfo@RFONTOBJ@@QEAA-AV-$ReturnValueTracer@H@@PEAUtagFONT_REALIZATION_INFO2@@@Z.c)
 *     ?bProxyDrvTextOut@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAUHDEV__@@K4@Z @ 0x1400D4898 (-bProxyDrvTextOut@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOB.c)
 *     EngTextOut @ 0x1400DA230 (EngTextOut.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x14010651C (-bRealizeFont@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_X.c)
 *     ?EPATHOBJ_bSimpleFill@@YA?AV?$ReturnValueTracer@H@@PEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1401170D8 (-EPATHOBJ_bSimpleFill@@YA-AV-$ReturnValueTracer@H@@PEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_.c)
 *     ?GrepGetGlyphIndicesW@@YA?AV?$ReturnValueTracer@K@@AEAVDCOBJ@@PEBGKPEAGKH@Z @ 0x1401835D8 (-GrepGetGlyphIndicesW@@YA-AV-$ReturnValueTracer@K@@AEAVDCOBJ@@PEBGKPEAGKH@Z.c)
 *     GreGetDCDpiScaleValue @ 0x1401C0220 (GreGetDCDpiScaleValue.c)
 *     ?GrepExtTextOutW@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHPEAXK@Z @ 0x1401C8584 (-GrepExtTextOutW@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHPEAXK@Z.c)
 *     ?GreExtTextOutRect@@YA?AV?$ReturnValueTracer@H@@PEAUHDC__@@PEAUtagRECT@@@Z @ 0x140205B04 (-GreExtTextOutRect@@YA-AV-$ReturnValueTracer@H@@PEAUHDC__@@PEAUtagRECT@@@Z.c)
 *     NtGdiGetGlyphIndicesWInternal @ 0x14020CC00 (NtGdiGetGlyphIndicesWInternal.c)
 *     ?EPATHOBJ_bTextOutSimpleFill@@YA?AV?$ReturnValueTracer@H@@PEAVEPATHOBJ@@AEAVXDCOBJ@@AEAVRFONTOBJ@@PEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x140265F74 (-EPATHOBJ_bTextOutSimpleFill@@YA-AV-$ReturnValueTracer@H@@PEAVEPATHOBJ@@AEAVXDCOBJ@@AEAVRFONTOBJ.c)
 *     NtGdiExtTextOutW @ 0x14027F4B0 (NtGdiExtTextOutW.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(_DWORD *a1, int a2)
{
  *a1 = a2;
  return a1;
}
