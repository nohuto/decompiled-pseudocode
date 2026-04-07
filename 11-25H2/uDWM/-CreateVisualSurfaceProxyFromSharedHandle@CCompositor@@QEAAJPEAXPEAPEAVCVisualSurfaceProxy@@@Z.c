/*
 * XREFs of ?CreateVisualSurfaceProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualSurfaceProxy@@@Z @ 0x18009A668
 * Callers:
 *     ?SetBlurredWallpaperSurface@CWindowList@@UEAAJPEAXPEBUtagRECT@@@Z @ 0x180078BF0 (-SetBlurredWallpaperSurface@CWindowList@@UEAAJPEAXPEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateVisualSurfaceProxyFromSharedHandle(__int64 this, void *a2, CResourceProxy **a3)
{
  return CCompositor::CreateProxyFromSharedHandle<CVisualSurfaceProxy>(this, a2, a3);
}
