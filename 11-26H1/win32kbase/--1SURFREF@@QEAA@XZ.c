/*
 * XREFs of ??1SURFREF@@QEAA@XZ @ 0x1400546C0
 * Callers:
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140013360 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1400239C0 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     EngModifySurface @ 0x140027250 (EngModifySurface.c)
 *     bDeleteBrush @ 0x140054210 (bDeleteBrush.c)
 *     ??1SURFREFGC@@QEAA@XZ @ 0x140054690 (--1SURFREFGC@@QEAA@XZ.c)
 *     ?GrepDeleteReferencedSurface@@YAJPEAUHSURF__@@_N@Z @ 0x14005537C (-GrepDeleteReferencedSurface@@YAJPEAUHSURF__@@_N@Z.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1401A02C8 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXE@Z @ 0x1401B9140 (-vDisableSurface@PDEVOBJ@@QEAAXE@Z.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1401ECCD0 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ?bGarbageCollect@BRUSHSELOBJGC@@QEAA_NAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401ECDBC (-bGarbageCollect@BRUSHSELOBJGC@@QEAA_NAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     _SURFREF::vTryDeleteSurface_::_8_::_lambda_1_::_lambda_invoker_cdecl_ @ 0x1401EE0F0 (_SURFREF--vTryDeleteSurface_--_8_--_lambda_1_--_lambda_invoker_cdecl_.c)
 *     EngAssociateSurface @ 0x1401F0E20 (EngAssociateSurface.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1401F12B0 (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F1F78 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z.c)
 *     ?vCleanupSurfaces@@YAXK@Z @ 0x1401FAB18 (-vCleanupSurfaces@@YAXK@Z.c)
 *     bInitBMOBJ @ 0x1402F039C (bInitBMOBJ.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 */

void __fastcall SURFREF::~SURFREF(unsigned int **this)
{
  __int64 SessionState; // rax

  if ( this[4] )
  {
    SessionState = W32GetSessionState(this);
    HmgDecrementShareReferenceCount(*(_QWORD *)(SessionState + 88), this[4]);
  }
  PopThreadGuardedObject(this);
}
