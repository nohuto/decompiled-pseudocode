/*
 * XREFs of ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1400182D8
 * Callers:
 *     GreSelectRedirectionBitmap @ 0x1400151B0 (GreSelectRedirectionBitmap.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x140017A80 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     GreSetRedirection @ 0x140018AE4 (GreSetRedirection.c)
 *     RecreateRedirectionBitmap @ 0x140041830 (RecreateRedirectionBitmap.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x14009D9B0 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     ?GetLockedSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z @ 0x1400F66A8 (-GetLockedSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z.c)
 *     GreSetBitmapContentOwner @ 0x14014BC6C (GreSetBitmapContentOwner.c)
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x14016B868 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 *     ??0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z @ 0x14016DF04 (--0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z.c)
 *     ?MulCreateDeviceBitmap@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@K@Z @ 0x14017E8E0 (-MulCreateDeviceBitmap@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@K@Z.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1401ED678 (zzzUpdateWindowsAfterModeChange.c)
 *     GreGetBitmapDimension @ 0x14020F9FC (GreGetBitmapDimension.c)
 *     GreSetBitmapDimension @ 0x140226114 (GreSetBitmapDimension.c)
 *     NtGdiEngCreateBitmap @ 0x140230890 (NtGdiEngCreateBitmap.c)
 *     ?TryUnlockSurface@UMPDOBJ@@SA_NPEAU_SURFOBJ@@@Z @ 0x1402513F0 (-TryUnlockSurface@UMPDOBJ@@SA_NPEAU_SURFOBJ@@@Z.c)
 *     NtGdiMonoBitmap @ 0x14025EFD0 (NtGdiMonoBitmap.c)
 *     GreGetBitmapDpiScaleValue @ 0x14029582C (GreGetBitmapDpiScaleValue.c)
 *     ?GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z @ 0x14031D908 (-GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z.c)
 *     NtGdiEngDeleteSurface @ 0x14032CFB0 (NtGdiEngDeleteSurface.c)
 *     NtGdiEngMarkBandingSurface @ 0x14032D6F0 (NtGdiEngMarkBandingSurface.c)
 *     NtGdiGetColorSpaceforBitmap @ 0x140333690 (NtGdiGetColorSpaceforBitmap.c)
 *     ?UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x14034B010 (-UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     <none>
 */

SURFREF *__fastcall SURFREF::SURFREF(SURFREF *this, HSURF a2)
{
  Gre::Base *v4; // rcx
  struct Gre::Base::SESSION_GLOBALS *v5; // rax
  __int64 v6; // r8

  *(_OWORD *)this = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  PushThreadGuardedObject(
    this,
    this,
    UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
  v5 = Gre::Base::Globals(v4);
  LOBYTE(v6) = 5;
  *((_QWORD *)this + 4) = HmgShareLock(v5, a2, v6, 0LL);
  return this;
}
