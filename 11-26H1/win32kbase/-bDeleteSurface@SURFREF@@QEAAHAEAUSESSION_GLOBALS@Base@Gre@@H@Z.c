/*
 * XREFs of ?bDeleteSurface@SURFREF@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@H@Z @ 0x140181878
 * Callers:
 *     bDeleteBrush @ 0x140054210 (bDeleteBrush.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXE@Z @ 0x1401B9140 (-vDisableSurface@PDEVOBJ@@QEAAXE@Z.c)
 *     _SURFREF::vTryDeleteSurface_::_8_::_lambda_1_::_lambda_invoker_cdecl_ @ 0x1401EE0F0 (_SURFREF--vTryDeleteSurface_--_8_--_lambda_1_--_lambda_invoker_cdecl_.c)
 *     ?vTryDeleteSurface@SURFREF@@QEAAXXZ @ 0x1401EE190 (-vTryDeleteSurface@SURFREF@@QEAAXXZ.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1401F12B0 (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 *     ?vCleanupSurfaces@@YAXK@Z @ 0x1401FAB18 (-vCleanupSurfaces@@YAXK@Z.c)
 * Callees:
 *     ?bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z @ 0x1400126D0 (-bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z.c)
 */

__int64 __fastcall SURFREF::bDeleteSurface(__int64 **this, struct Gre::Base::SESSION_GLOBALS *a2, int a3)
{
  __int64 result; // rax

  result = SURFACE::bDeleteSurface(this[4], (__int64)a2, 0, a3);
  if ( (_DWORD)result )
    this[4] = 0LL;
  return result;
}
