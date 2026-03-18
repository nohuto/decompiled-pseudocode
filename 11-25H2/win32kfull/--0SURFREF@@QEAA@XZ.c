/*
 * XREFs of ??0SURFREF@@QEAA@XZ @ 0x14009A8F4
 * Callers:
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x14007DE28 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x140086C60 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x140088F00 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x140093B68 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 *     GreAccNotifyWindow @ 0x1400952C0 (GreAccNotifyWindow.c)
 *     GreSelectRedirectionBitmap @ 0x14009A2A0 (GreSelectRedirectionBitmap.c)
 *     UntrapAppContainerRenderingWrap @ 0x140143FC0 (UntrapAppContainerRenderingWrap.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x1401B0310 (NtGdiDdDDICreateDCFromMemory.c)
 *     DxgkEngBltViaGDI @ 0x1401B4070 (DxgkEngBltViaGDI.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1401C4020 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     NtGdiDdDDIDestroyDCFromMemory @ 0x1401C8C00 (NtGdiDdDDIDestroyDCFromMemory.c)
 *     NtGdiEngAssociateSurface @ 0x140217060 (NtGdiEngAssociateSurface.c)
 *     NtGdiEngMarkBandingSurface @ 0x14026EB30 (NtGdiEngMarkBandingSurface.c)
 *     EngMarkBandingSurface @ 0x140306310 (EngMarkBandingSurface.c)
 *     MulProcessChildRedirectionDfbSurfaces @ 0x140334210 (MulProcessChildRedirectionDfbSurfaces.c)
 *     ?GrepCreateColorTransform@@YAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x14033D594 (-GrepCreateColorTransform@@YAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1402FBBE4 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

SURFREF *__fastcall SURFREF::SURFREF(SURFREF *this)
{
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>();
  *((_QWORD *)this + 4) = 0LL;
  return this;
}
