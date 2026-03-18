/*
 * XREFs of ?bDeleteSurface@SURFREF@@QEAAHH@Z @ 0x14008D32C
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x140070324 (bMigrateSurfaceForConversion.c)
 *     ?vTryDeleteSurface@SURFREF@@QEAAXXZ @ 0x1401515A0 (-vTryDeleteSurface@SURFREF@@QEAAXXZ.c)
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140177760 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 *     _SURFREF::vTryDeleteSurface_::_8_::_lambda_1_::_lambda_invoker_cdecl_ @ 0x1401C5D70 (_SURFREF--vTryDeleteSurface_--_8_--_lambda_1_--_lambda_invoker_cdecl_.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1401C66EC (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 * Callees:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x14008D360 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

__int64 __fastcall SURFREF::bDeleteSurface(SURFREF *this)
{
  __int64 result; // rax

  result = SURFACE::bDeleteSurface(*((_QWORD *)this + 4), 0LL, 0LL);
  if ( (_DWORD)result )
    *((_QWORD *)this + 4) = 0LL;
  return result;
}
