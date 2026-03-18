/*
 * XREFs of ??0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140025488
 * Callers:
 *     bDeleteBrush @ 0x140054210 (bDeleteBrush.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1401A02C8 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     _SURFREF::vTryDeleteSurface_::_8_::_lambda_1_::_lambda_invoker_cdecl_ @ 0x1401EE0F0 (_SURFREF--vTryDeleteSurface_--_8_--_lambda_1_--_lambda_invoker_cdecl_.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1401F12B0 (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 *     ?vCleanupSurfaces@@YAXK@Z @ 0x1401FAB18 (-vCleanupSurfaces@@YAXK@Z.c)
 *     bInitBMOBJ @ 0x1402F039C (bInitBMOBJ.c)
 * Callees:
 *     ?HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140019830 (-HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1400271B4 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

SURFREF *__fastcall SURFREF::SURFREF(SURFREF *this, HSURF a2, struct Gre::Base::SESSION_GLOBALS *a3)
{
  unsigned int v4; // ebx

  v4 = (unsigned int)a2;
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(this);
  *((_QWORD *)this + 4) = HmgShareLock((__int64)a3, v4, 5, 0);
  return this;
}
