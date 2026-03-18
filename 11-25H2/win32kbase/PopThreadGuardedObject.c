/*
 * XREFs of PopThreadGuardedObject @ 0x14000E350
 * Callers:
 *     ??1PATHMEMOBJ@@QEAA@XZ @ 0x14000DC10 (--1PATHMEMOBJ@@QEAA@XZ.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x14000DC40 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     GreCombineRgn @ 0x14000DFC0 (GreCombineRgn.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x14001CE4C (--1DCOBJ@@QEAA@XZ.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x14001F850 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x140041880 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140043E9C (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x140071190 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x140073820 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x140087560 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x14008D2D8 (--1SURFREF@@QEAA@XZ.c)
 *     ??1DLODCOBJ@@QEAA@XZ @ 0x14008E354 (--1DLODCOBJ@@QEAA@XZ.c)
 *     GreExtCreateRegion @ 0x140096D00 (GreExtCreateRegion.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x14009ADAC (GreCreatePolyPolygonRgnInternal.c)
 *     GrepThreadCallout @ 0x1400C06D0 (GrepThreadCallout.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1400C6308 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x140112D38 (--1AUTO_TGO@@MEAA@XZ.c)
 *     DrvChangeDisplaySettings @ 0x14013C570 (DrvChangeDisplaySettings.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z @ 0x140159390 (-iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1401776F0 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??1XEPALOBJ2@@QEAA@XZ @ 0x1401C58F8 (--1XEPALOBJ2@@QEAA@XZ.c)
 *     ??1?$HmgShareLockResult@VSURFACE@@@@QEAA@XZ @ 0x1401C65D8 (--1-$HmgShareLockResult@VSURFACE@@@@QEAA@XZ.c)
 *     ??1?$HmgShareLockResult@VBRUSH@@@@QEAA@XZ @ 0x1401C919C (--1-$HmgShareLockResult@VBRUSH@@@@QEAA@XZ.c)
 *     ??1?$HmgLockResult@VDRVOBJ@@@@QEAA@XZ @ 0x1401D09D8 (--1-$HmgLockResult@VDRVOBJ@@@@QEAA@XZ.c)
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
