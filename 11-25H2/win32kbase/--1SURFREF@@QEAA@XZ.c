/*
 * XREFs of ??1SURFREF@@QEAA@XZ @ 0x14008D2D8
 * Callers:
 *     ?W32kCddSetDeviceBitmapAdapterLuid@@YAHPEAUHSURF__@@U_LUID@@@Z @ 0x14006EDE0 (-W32kCddSetDeviceBitmapAdapterLuid@@YAHPEAUHSURF__@@U_LUID@@@Z.c)
 *     EngModifySurface @ 0x14006EE50 (EngModifySurface.c)
 *     bDfbSurfacesMigrated @ 0x14006FE30 (bDfbSurfacesMigrated.c)
 *     bMigrateSurfaceForConversion @ 0x140070324 (bMigrateSurfaceForConversion.c)
 *     ?vCleanupSurfaces@@YAXK@Z @ 0x140086260 (-vCleanupSurfaces@@YAXK@Z.c)
 *     GreCreatePatternBrushInternal @ 0x140086E10 (GreCreatePatternBrushInternal.c)
 *     ?GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV?$umptr_r@E@@@Z @ 0x14008BE60 (-GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV-$umptr_r@E@@@Z.c)
 *     GreSetBitmapOwner @ 0x14008CDB0 (GreSetBitmapOwner.c)
 *     bDeleteSurface @ 0x14008CE40 (bDeleteSurface.c)
 *     EngLockSurface @ 0x14008D090 (EngLockSurface.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXE@Z @ 0x140092BB0 (-vDisableSurface@PDEVOBJ@@QEAAXE@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x140093688 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1400939A0 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?GrepCreateDefaultBitmap@@YAPEAUHBITMAP__@@XZ @ 0x140093BC0 (-GrepCreateDefaultBitmap@@YAPEAUHBITMAP__@@XZ.c)
 *     EngAssociateSurface @ 0x1400C72B0 (EngAssociateSurface.c)
 *     ?DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z @ 0x140137160 (-DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z.c)
 *     ??1SURFREFGC@@QEAA@XZ @ 0x140157B88 (--1SURFREFGC@@QEAA@XZ.c)
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140177760 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x14019E190 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     _SURFREF::vTryDeleteSurface_::_8_::_lambda_1_::_lambda_invoker_cdecl_ @ 0x1401C5D70 (_SURFREF--vTryDeleteSurface_--_8_--_lambda_1_--_lambda_invoker_cdecl_.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1401C66EC (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1401C7230 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1401D07C0 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401D1498 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     bInitBMOBJ @ 0x1402E8494 (bInitBMOBJ.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x14000E350 (PopThreadGuardedObject.c)
 *     HmgDecrementShareReferenceCountEx @ 0x14001CA40 (HmgDecrementShareReferenceCountEx.c)
 */

void __fastcall SURFREF::~SURFREF(SURFREF *this)
{
  struct _BASEOBJECT *v2; // rcx

  v2 = (struct _BASEOBJECT *)*((_QWORD *)this + 4);
  if ( v2 )
    HmgDecrementShareReferenceCountEx(v2, 0LL);
  PopThreadGuardedObject(this);
}
