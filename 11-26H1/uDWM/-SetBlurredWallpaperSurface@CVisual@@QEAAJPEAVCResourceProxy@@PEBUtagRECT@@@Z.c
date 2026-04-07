/*
 * XREFs of ?SetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceProxy@@PEBUtagRECT@@@Z @ 0x1800742F4
 * Callers:
 *     ?SetBlurredWallpaperSurface@CWindowList@@UEAAJPEAXPEBUtagRECT@@@Z @ 0x180069050 (-SetBlurredWallpaperSurface@CWindowList@@UEAAJPEAXPEBUtagRECT@@@Z.c)
 *     ?CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUCDesktop@@@Z @ 0x1800E012C (-CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUCDesktop@@@Z.c)
 *     ?DestroyRootVisualForDesktop@CWindowList@@AEAAXPEAUCDesktop@@@Z @ 0x1800E0A44 (-DestroyRootVisualForDesktop@CWindowList@@AEAAXPEAUCDesktop@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::SetBlurredWallpaperSurface(
        CVisualProxy **this,
        struct CResourceProxy *a2,
        const struct tagRECT *a3)
{
  return CVisualProxy::SetBlurredWallpaperSurface(this[2], a2, a3);
}
