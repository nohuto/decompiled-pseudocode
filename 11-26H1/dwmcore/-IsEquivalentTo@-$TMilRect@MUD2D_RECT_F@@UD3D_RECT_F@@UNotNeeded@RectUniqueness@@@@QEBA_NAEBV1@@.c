/*
 * XREFs of ?IsEquivalentTo@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180057CB8
 * Callers:
 *     ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x18001771C (-UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@.c)
 *     ?AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ @ 0x180057C28 (-AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ.c)
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x1801A0388 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?ApplyDirty@CSurfaceBrush@@AEAAXPEAVCRectanglesShape@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18020EA24 (-ApplyDirty@CSurfaceBrush@@AEAAXPEAVCRectanglesShape@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 *     ?UpdateTransformAndTreeBounds@CRemoteAppRenderTarget@@IEAAXXZ @ 0x1802566B4 (-UpdateTransformAndTreeBounds@CRemoteAppRenderTarget@@IEAAXXZ.c)
 *     ?SetSurfaceContentRect@CSceneSurfaceMaterialInput@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180281ABC (-SetSurfaceContentRect@CSceneSurfaceMaterialInput@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_.c)
 *     ?OnSurfaceContentRectChanging@CSurfaceBrush@@QEAAJAEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802843F4 (-OnSurfaceContentRectChanging@CSurfaceBrush@@QEAAJAEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_P.c)
 * Callees:
 *     ?IsInfinite@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180057D50 (-IsInfinite@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 */

char __fastcall TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsEquivalentTo(
        const __m128i *a1,
        const __m128i *a2)
{
  __m128 v2; // xmm2
  __m128 v3; // xmm3
  const struct D2D_RECT_F *v4; // r8
  __int64 v5; // r9
  char v6; // dl
  __int64 v7; // r8

  v2 = (__m128)_mm_loadu_si128(a2);
  v3 = (__m128)_mm_loadu_si128(a1);
  if ( v3.m128_f32[0] == v2.m128_f32[0]
    && _mm_shuffle_ps(v3, v3, 85).m128_f32[0] == _mm_shuffle_ps(v2, v2, 85).m128_f32[0]
    && _mm_shuffle_ps(v3, v3, 170).m128_f32[0] == _mm_shuffle_ps(v2, v2, 170).m128_f32[0]
    && _mm_shuffle_ps(v3, v3, 255).m128_f32[0] == _mm_shuffle_ps(v2, v2, 255).m128_f32[0]
    || IsEmpty((const struct D2D_RECT_F *)a1) && IsEmpty(v4)
    || (unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsInfinite(v5)
    && (unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsInfinite(v7) )
  {
    return 1;
  }
  return v6;
}
