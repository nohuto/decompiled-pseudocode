/*
 * XREFs of ?CreateVisualSurfaceProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualSurfaceProxy@@@Z @ 0x1800A803C
 * Callers:
 *     ?SetBlurredWallpaperSurface@CWindowList@@UEAAJPEAXPEBUtagRECT@@@Z @ 0x180069050 (-SetBlurredWallpaperSurface@CWindowList@@UEAAJPEAXPEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::CreateVisualSurfaceProxyFromSharedHandle(
        struct IDwmChannel **this,
        __int64 a2,
        struct CVisualSurfaceProxy **a3)
{
  return CResourceProxy::CreateFromSharedHandle<CVisualSurfaceProxy>(this[3], a2, a3);
}
