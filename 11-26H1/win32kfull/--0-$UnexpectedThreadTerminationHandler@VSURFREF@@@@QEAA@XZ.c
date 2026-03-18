/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x14001811C
 * Callers:
 *     ?GrepCreateDIBitmap@@YA?AVSURFREF@@AEAVOPTAPIDCOBJ@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x1400167D4 (-GrepCreateDIBitmap@@YA-AVSURFREF@@AEAVOPTAPIDCOBJ@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x140017A80 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1400181B8 (--0SURFREF@@QEAA@XZ.c)
 *     GrePtInSprite @ 0x14008CE2C (GrePtInSprite.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1401C32E0 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401D7CF0 (--0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x1402931A8 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 *     EngMarkBandingSurface @ 0x14031D840 (EngMarkBandingSurface.c)
 *     MulProcessChildRedirectionDfbSurfaces @ 0x140329530 (MulProcessChildRedirectionDfbSurfaces.c)
 *     NtGdiEngAssociateSurface @ 0x14032CA10 (NtGdiEngAssociateSurface.c)
 *     NtGdiEngMarkBandingSurface @ 0x14032D6F0 (NtGdiEngMarkBandingSurface.c)
 *     ?GrepCreateColorTransform@@YAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x14032FFF0 (-GrepCreateColorTransform@@YAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(_OWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  PushThreadGuardedObject(
    a1,
    a1,
    UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
