/*
 * XREFs of ??0DEVLOCKOBJ@@QEAA@XZ @ 0x140087B54
 * Callers:
 *     NtGdiFastPolyPolyline @ 0x14000F6D0 (NtGdiFastPolyPolyline.c)
 *     GreExtTextOutW @ 0x140057230 (GreExtTextOutW.c)
 *     ?GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1400807B8 (-GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1400835D0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400872EC (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1400962F4 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     GreFillRgn @ 0x1400E2308 (GreFillRgn.c)
 *     GreFrameRgn @ 0x1400E295C (GreFrameRgn.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1401178F4 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x140117B90 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     GreGetRandomRgn @ 0x140158D50 (GreGetRandomRgn.c)
 *     ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x14015EFA0 (-pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z.c)
 *     NtGdiExtFloodFill @ 0x14015F420 (NtGdiExtFloodFill.c)
 *     ?GrepGetBoundsRect@@YAKAEAVXDCOBJ@@PEAUtagRECT@@K@Z @ 0x14016CDE0 (-GrepGetBoundsRect@@YAKAEAVXDCOBJ@@PEAUtagRECT@@K@Z.c)
 *     GreSetDIBColorTable @ 0x1401760E0 (GreSetDIBColorTable.c)
 *     GreGetDIBColorTable @ 0x140176390 (GreGetDIBColorTable.c)
 *     NtGdiOffsetClipRgn @ 0x1401D3310 (NtGdiOffsetClipRgn.c)
 *     ?GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z @ 0x1401D371C (-GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z.c)
 *     NtGdiPtVisible @ 0x1401F0880 (NtGdiPtVisible.c)
 *     ?GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z @ 0x140209018 (-GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z.c)
 *     ?GrepPolyTextOutW@@YAHAEAVXDCOBJ@@PEAUtagPOLYTEXTW@@IKW4EntryPoint@RFONTOBJ@@@Z @ 0x140231A74 (-GrepPolyTextOutW@@YAHAEAVXDCOBJ@@PEAUtagPOLYTEXTW@@IKW4EntryPoint@RFONTOBJ@@@Z.c)
 *     NtGdiUpdateColors @ 0x140310CB0 (NtGdiUpdateColors.c)
 *     ??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140326D78 (--0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?GrepDrawEscape@@YAHAEAVXDCOBJ@@HAEBV?$umptr_r@D@@@Z @ 0x140327864 (-GrepDrawEscape@@YAHAEAVXDCOBJ@@HAEBV-$umptr_r@D@@@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z @ 0x1403287C8 (-iWndObjSetupExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z.c)
 *     ??$GreDrawStream@VAPIDCOBJ_NoOp_vUnlock@@$00@@YAHPEAUHDC__@@KPEAX@Z @ 0x140330900 (--$GreDrawStream@VAPIDCOBJ_NoOp_vUnlock@@$00@@YAHPEAUHDC__@@KPEAX@Z.c)
 *     ??$GreDrawStream@VXDCOBJ_NoCtor@@$0A@@@YAHPEAUHDC__@@KPEAX@Z @ 0x1403310AC (--$GreDrawStream@VXDCOBJ_NoCtor@@$0A@@@YAHPEAUHDC__@@KPEAX@Z.c)
 *     ?GrepCheckBitmapBits@@YAHAEAVXDCOBJ@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x14033D42C (-GrepCheckBitmapBits@@YAHAEAVXDCOBJ@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 *     NtGdiSetPixelFormat @ 0x14033EC60 (NtGdiSetPixelFormat.c)
 * Callees:
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x140087BA4 (--0DLODCOBJ@@QEAA@XZ.c)
 */

DEVLOCKOBJ *__fastcall DEVLOCKOBJ::DEVLOCKOBJ(DEVLOCKOBJ *this)
{
  DLODCOBJ::DLODCOBJ((DEVLOCKOBJ *)((char *)this + 32));
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  return this;
}
