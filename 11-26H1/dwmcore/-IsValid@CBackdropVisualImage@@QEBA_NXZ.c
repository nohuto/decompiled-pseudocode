/*
 * XREFs of ?IsValid@CBackdropVisualImage@@QEBA_NXZ @ 0x18002C2A0
 * Callers:
 *     ?HasValidRenderingRealization@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x18002C100 (-HasValidRenderingRealization@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18002C3C0 (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x180110440 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ?GetBlurCacheRealizationKey@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@PEAPEBX@Z @ 0x18016EB7C (-GetBlurCacheRealizationKey@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@PEAPEBX@Z.c)
 *     ?CanUseAsEffectInput@CBackdropVisualImage@@QEBA_NXZ @ 0x1801AE398 (-CanUseAsEffectInput@CBackdropVisualImage@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBackdropVisualImage::IsValid(CBackdropVisualImage *this)
{
  float v1; // xmm2_4
  float v2; // xmm3_4
  float v3; // xmm0_4
  bool result; // al

  result = *((_QWORD *)this + 15)
        && (float)(*((float *)this + 26) - *((float *)this + 24)) >= 1.0
        && (float)(*((float *)this + 27) - *((float *)this + 25)) >= 1.0
        && (v1 = *((float *)this + 420), v2 = *((float *)this + 418), v1 >= v2)
        && (v3 = *((float *)this + 421), v3 >= *((float *)this + 419))
        && (float)(v1 - v2) >= 1.0
        && (float)(v3 - *((float *)this + 419)) >= 1.0
        && *((float *)this + 28) > 0.5
        && *((float *)this + 29) > 0.5;
  return result;
}
