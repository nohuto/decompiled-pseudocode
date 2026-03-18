/*
 * XREFs of ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x140086F7C
 * Callers:
 *     bDfbSurfacesMigrated @ 0x14006FE30 (bDfbSurfacesMigrated.c)
 *     ?vCleanupSurfaces@@YAXK@Z @ 0x140086260 (-vCleanupSurfaces@@YAXK@Z.c)
 *     GreCreatePatternBrushInternal @ 0x140086E10 (GreCreatePatternBrushInternal.c)
 *     _SURFREF::vTryDeleteSurface_::_8_::_lambda_1_::_lambda_invoker_cdecl_ @ 0x1401C5D70 (_SURFREF--vTryDeleteSurface_--_8_--_lambda_1_--_lambda_invoker_cdecl_.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1401C7230 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     HmgShareLockCheck @ 0x140017AD0 (HmgShareLockCheck.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1401C3C68 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

SURFREF *__fastcall SURFREF::SURFREF(SURFREF *this, __int64 a2)
{
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>();
  *((_QWORD *)this + 4) = HmgShareLockCheck(a2, 5);
  return this;
}
