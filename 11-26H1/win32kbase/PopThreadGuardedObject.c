/*
 * XREFs of PopThreadGuardedObject @ 0x140019EE0
 * Callers:
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x140011400 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140013360 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 *     GreValidateVisrgn @ 0x1400149E8 (GreValidateVisrgn.c)
 *     GreSelectVisRgn @ 0x140016B80 (GreSelectVisRgn.c)
 *     GreSelectVisRgnShared @ 0x140017500 (GreSelectVisRgnShared.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x140017FB0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreIsRendering @ 0x1400196C0 (GreIsRendering.c)
 *     GreCombineRgn @ 0x140020BA0 (GreCombineRgn.c)
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1400239C0 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     ?GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z @ 0x140023DBC (-GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z.c)
 *     GreCreatePatternBrushInternal @ 0x1400243A0 (GreCreatePatternBrushInternal.c)
 *     ?GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV?$umptr_r@E@@@Z @ 0x140025D60 (-GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV-$umptr_r@E@@@Z.c)
 *     GreSetBitmapOwner @ 0x140026C00 (GreSetBitmapOwner.c)
 *     EngModifySurface @ 0x140027250 (EngModifySurface.c)
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x14002D790 (--1AUTO_TGO@@MEAA@XZ.c)
 *     DrvFunctionalizeDisplayConfig @ 0x14002E708 (DrvFunctionalizeDisplayConfig.c)
 *     bDfbSurfacesMigrated @ 0x14002EBF0 (bDfbSurfacesMigrated.c)
 *     bMigrateSurfaceForConversion @ 0x14002F4E0 (bMigrateSurfaceForConversion.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x14003029C (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     bDynamicModeChange @ 0x140030E68 (bDynamicModeChange.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x140033AE4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1400346C8 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     GreSetBrushGlobal @ 0x14003470C (GreSetBrushGlobal.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x140034C24 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     hCreateSolidBrushInternal @ 0x140034D00 (hCreateSolidBrushInternal.c)
 *     GreCreateCompatibleDC @ 0x14003AF40 (GreCreateCompatibleDC.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14003BBF4 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1400546C0 (--1SURFREF@@QEAA@XZ.c)
 *     ?GrepDeleteReferencedSurface@@YAJPEAUHSURF__@@_N@Z @ 0x14005537C (-GrepDeleteReferencedSurface@@YAJPEAUHSURF__@@_N@Z.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1400C2A7C (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1400C7A4C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1400C8390 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1400C85F0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1400C9FCC (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1400FEE38 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     NtGdiCreateRectRgn @ 0x140102C20 (NtGdiCreateRectRgn.c)
 *     GrePtInRegion @ 0x140106D90 (GrePtInRegion.c)
 *     GrepThreadCallout @ 0x14011A030 (GrepThreadCallout.c)
 *     GreEqualRgn @ 0x14012AF60 (GreEqualRgn.c)
 *     ?W32kCddSetDeviceBitmapAdapterLuid@@YAHPEAUHSURF__@@U_LUID@@@Z @ 0x140153340 (-W32kCddSetDeviceBitmapAdapterLuid@@YAHPEAUHSURF__@@U_LUID@@@Z.c)
 *     ??0DCMEMOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140164BA0 (--0DCMEMOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ??0DCMEMOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@KHH@Z @ 0x140164CD8 (--0DCMEMOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@KHH@Z.c)
 *     EngLockSurface @ 0x140166920 (EngLockSurface.c)
 *     DrvChangeDisplaySettings @ 0x140175A14 (DrvChangeDisplaySettings.c)
 *     ?GrepCreateDefaultBitmap@@YAPEAUHBITMAP__@@XZ @ 0x14017CDA0 (-GrepCreateDefaultBitmap@@YAPEAUHBITMAP__@@XZ.c)
 *     ?bDeleteSurface@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHSURF__@@@Z @ 0x14017D2A0 (-bDeleteSurface@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHSURF__@@@Z.c)
 *     bDeletePalette @ 0x14017D940 (bDeletePalette.c)
 *     ??1XEPALOBJ2@@QEAA@XZ @ 0x140191B8C (--1XEPALOBJ2@@QEAA@XZ.c)
 *     GreCreateRectRgn @ 0x140194400 (GreCreateRectRgn.c)
 *     ??1?$HmgShareLockResult@VBRUSH@@@@QEAA@XZ @ 0x1401975A8 (--1-$HmgShareLockResult@VBRUSH@@@@QEAA@XZ.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x14019BAFC (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ??1?$HmgShareLockResult@VSURFACE@@@@QEAA@XZ @ 0x1401F1200 (--1-$HmgShareLockResult@VSURFACE@@@@QEAA@XZ.c)
 *     ??1?$HmgLockResult@VDRVOBJ@@@@QEAA@XZ @ 0x1401F1C60 (--1-$HmgLockResult@VDRVOBJ@@@@QEAA@XZ.c)
 *     bInitBRUSHOBJ @ 0x1402F4354 (bInitBRUSHOBJ.c)
 *     bInitBrush @ 0x1402F4AF8 (bInitBrush.c)
 * Callees:
 *     <none>
 */

void __fastcall PopThreadGuardedObject(_QWORD *a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rdx

  if ( a1 )
  {
    v1 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v2 = (_QWORD *)a1[1], (_QWORD *)*v2 != a1) )
      __fastfail(3u);
    *v2 = v1;
    *(_QWORD *)(v1 + 8) = v2;
    a1[1] = a1;
    *a1 = a1;
  }
}
