/*
 * XREFs of ?InvalidateAllBlurCaches@CBackdropVisualImage@@AEAAXXZ @ 0x18002CFC8
 * Callers:
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18002C3C0 (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 * Callees:
 *     ?InvalidateBlurCache@CBackdropVisualImage@@AEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z @ 0x1801D14CC (-InvalidateBlurCache@CBackdropVisualImage@@AEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z.c)
 */

void __fastcall CBackdropVisualImage::InvalidateAllBlurCaches(CBackdropVisualImage *this)
{
  const struct CCachedVisualImage::CCachedTarget **v1; // rsi
  const struct CCachedVisualImage::CCachedTarget **i; // rbx

  v1 = (const struct CCachedVisualImage::CCachedTarget **)*((_QWORD *)this + 22);
  for ( i = (const struct CCachedVisualImage::CCachedTarget **)*((_QWORD *)this + 21); i != v1; ++i )
    CBackdropVisualImage::InvalidateBlurCache(this, *i);
}
