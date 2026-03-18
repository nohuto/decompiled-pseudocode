/*
 * XREFs of ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x140089AA4
 * Callers:
 *     RecreateRedirectionBitmap @ 0x140057DF8 (RecreateRedirectionBitmap.c)
 *     GreReferenceObject @ 0x14005CDA4 (GreReferenceObject.c)
 *     GreSetBitmapContentOwner @ 0x14005D9DC (GreSetBitmapContentOwner.c)
 *     GreSetRedirection @ 0x14005DB50 (GreSetRedirection.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x140063BF8 (zzzUpdateWindowsAfterModeChange.c)
 *     GreDereferenceObject @ 0x14007BF50 (GreDereferenceObject.c)
 *     GreExtGetObjectW @ 0x14007D99C (GreExtGetObjectW.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x14007DE28 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     ?GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x14008952C (-GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV-$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z.c)
 *     GreBeginGdiRenderingToDxSurface @ 0x140092A38 (GreBeginGdiRenderingToDxSurface.c)
 *     GreEndGdiRenderingToDxSurface @ 0x140092BA0 (GreEndGdiRenderingToDxSurface.c)
 *     ?GreSetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV?$umptr_r@E@@PEAJ@Z @ 0x140093084 (-GreSetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV-$umptr_r@E@@PEAJ@Z.c)
 *     ?GreGetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV?$umptr_w@E@@PEAJ@Z @ 0x140094658 (-GreGetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV-$umptr_w@E@@PEAJ@Z.c)
 *     GreSelectRedirectionBitmap @ 0x14009A2A0 (GreSelectRedirectionBitmap.c)
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x1400A15A8 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 *     ?GreCreateDIBBrush@@YAPEAUHBRUSH__@@PEAXKIHH0@Z @ 0x1400E3DC0 (-GreCreateDIBBrush@@YAPEAUHBRUSH__@@PEAXKIHH0@Z.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x140117B90 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     NtGdiMonoBitmap @ 0x14016BE80 (NtGdiMonoBitmap.c)
 *     ?MulCreateDeviceBitmap@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@K@Z @ 0x1401818C0 (-MulCreateDeviceBitmap@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@K@Z.c)
 *     NtGdiGetDCforBitmap @ 0x1401A9150 (NtGdiGetDCforBitmap.c)
 *     ??0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z @ 0x1401D3E88 (--0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z.c)
 *     GreGetBitmapDimension @ 0x1401DB998 (GreGetBitmapDimension.c)
 *     ?GetLockedSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z @ 0x1401EB878 (-GetLockedSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z.c)
 *     GreSetBitmapDimension @ 0x1401F4250 (GreSetBitmapDimension.c)
 *     NtGdiEngCreateBitmap @ 0x140202D60 (NtGdiEngCreateBitmap.c)
 *     ?UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1402164F0 (-UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     ?TryUnlockSurface@UMPDOBJ@@SA_NPEAU_SURFOBJ@@@Z @ 0x140216E60 (-TryUnlockSurface@UMPDOBJ@@SA_NPEAU_SURFOBJ@@@Z.c)
 *     ?ValidUmpdHsurfAndUnSecure@@YAHPEAUHSURF__@@@Z @ 0x14026E3B4 (-ValidUmpdHsurfAndUnSecure@@YAHPEAUHSURF__@@@Z.c)
 *     NtGdiEngMarkBandingSurface @ 0x14026EB30 (NtGdiEngMarkBandingSurface.c)
 *     ?GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z @ 0x140306398 (-GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z.c)
 *     NtGdiGetColorSpaceforBitmap @ 0x1403113B0 (NtGdiGetColorSpaceforBitmap.c)
 *     GreGetBitmapDpiScaleValue @ 0x1403329C8 (GreGetBitmapDpiScaleValue.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1402FBBE4 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

SURFREF *__fastcall SURFREF::SURFREF(SURFREF *this, HSURF a2)
{
  __int64 v4; // rdx

  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>();
  LOBYTE(v4) = 5;
  *((_QWORD *)this + 4) = HmgShareLockCheck(a2, v4);
  return this;
}
