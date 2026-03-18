/*
 * XREFs of ?CalcStretchFactors@@YAXAEBUtagRECT@@0W4DXGI_MODE_ROTATION@@PEAM2@Z @ 0x1802396B0
 * Callers:
 *     ?SupportedMPOAttributes@OverlayCaps@@QEBA_NAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x18020660C (-SupportedMPOAttributes@OverlayCaps@@QEBA_NAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z.c)
 *     ?IsHigherProprity@COverlayContext@@KA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x18023CFD0 (-IsHigherProprity@COverlayContext@@KA_NAEBVOverlayPlaneInfo@1@0@Z.c)
 *     ?SupportedPanelFitterAttributes@OverlayCaps@@QEBA_NAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x18023DD58 (-SupportedPanelFitterAttributes@OverlayCaps@@QEBA_NAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CalcStretchFactors(
        const struct tagRECT *a1,
        const struct tagRECT *a2,
        enum DXGI_MODE_ROTATION a3,
        float *a4,
        float *a5)
{
  int v5; // r11d
  __m128i v6; // xmm3
  int v7; // eax
  float v8; // xmm3_4
  float v9; // xmm0_4
  float v10; // xmm2_4

  v5 = a1->right - a1->left;
  v6 = _mm_cvtsi32_si128(a2->right - a2->left);
  v7 = a1->bottom - a1->top;
  if ( ((a3 - 2) & 0xFFFFFFFD) != 0 )
    v7 = a1->right - a1->left;
  LODWORD(v8) = _mm_cvtepi32_ps(v6).m128_u32[0];
  if ( ((a3 - 2) & 0xFFFFFFFD) != 0 )
    v5 = a1->bottom - a1->top;
  LODWORD(v9) = COERCE_UNSIGNED_INT(v8 / (float)v7) & _xmm;
  LODWORD(v10) = COERCE_UNSIGNED_INT((float)(a2->bottom - a2->top) / (float)v5) & _xmm;
  *a4 = fmaxf(v9, v10);
  *a5 = fminf(v9, v10);
}
