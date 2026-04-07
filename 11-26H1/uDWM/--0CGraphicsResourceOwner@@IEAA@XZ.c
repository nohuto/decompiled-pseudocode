/*
 * XREFs of ??0CGraphicsResourceOwner@@IEAA@XZ @ 0x180027888
 * Callers:
 *     ?EnsureBorderBrushCache@CCachedBorderBrush@CWindowBorder@@CAXXZ @ 0x18000D090 (-EnsureBorderBrushCache@CCachedBorderBrush@CWindowBorder@@CAXXZ.c)
 *     ??0CWindowBorder@@IEAA@XZ @ 0x180022A9C (--0CWindowBorder@@IEAA@XZ.c)
 *     ??0CImage@@IEAA@XZ @ 0x180027580 (--0CImage@@IEAA@XZ.c)
 *     ??0CPrimitiveGroupVisual@@IEAA@XZ @ 0x180027818 (--0CPrimitiveGroupVisual@@IEAA@XZ.c)
 *     ??0CButtonGlyph@@IEAA@XZ @ 0x180027F98 (--0CButtonGlyph@@IEAA@XZ.c)
 *     ??0CAnimatedTransitionVisual@@IEAA@XZ @ 0x180037B18 (--0CAnimatedTransitionVisual@@IEAA@XZ.c)
 *     ??0CTouchDragVisual@@IEAA@_K@Z @ 0x180087620 (--0CTouchDragVisual@@IEAA@_K@Z.c)
 *     ??0CDWriteText@@AEAA@XZ @ 0x180089010 (--0CDWriteText@@AEAA@XZ.c)
 *     ??0CAccentAcrylicBlurBehind@@QEAA@XZ @ 0x18008AFF8 (--0CAccentAcrylicBlurBehind@@QEAA@XZ.c)
 *     ?GetBrush@CNoiseSurfaceCache@CAccentAcrylicBlurBehind@@SAJPEAPEAUICompositionBrush@Composition@UI@Windows@@@Z @ 0x180094318 (-GetBrush@CNoiseSurfaceCache@CAccentAcrylicBlurBehind@@SAJPEAPEAUICompositionBrush@Composition@U.c)
 *     ??0CBitmapSource@@IEAA@PEAUIWICBitmapSource@@AEBUtagSIZE@@@Z @ 0x18009A66C (--0CBitmapSource@@IEAA@PEAUIWICBitmapSource@@AEBUtagSIZE@@@Z.c)
 *     ??0CTetherVisual@@IEAA@_K@Z @ 0x1800C84C0 (--0CTetherVisual@@IEAA@_K@Z.c)
 * Callees:
 *     ?AddResourceOwner@CGraphicsDeviceManager@@QEAAXPEAVCGraphicsResourceOwner@@@Z @ 0x1800278B4 (-AddResourceOwner@CGraphicsDeviceManager@@QEAAXPEAVCGraphicsResourceOwner@@@Z.c)
 */

CGraphicsResourceOwner *__fastcall CGraphicsResourceOwner::CGraphicsResourceOwner(CGraphicsResourceOwner *this)
{
  CGraphicsDeviceManager::AddResourceOwner(
    *((CGraphicsDeviceManager **)CDesktopManager::s_pDesktopManagerInstance + 7),
    this);
  return this;
}
