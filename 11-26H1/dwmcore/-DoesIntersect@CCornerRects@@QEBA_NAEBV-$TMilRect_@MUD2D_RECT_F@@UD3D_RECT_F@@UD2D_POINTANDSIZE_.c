/*
 * XREFs of ?DoesIntersect@CCornerRects@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18023AEC4
 * Callers:
 *     ?HasOverlappingCornerRects@COverlayContext@@KA_NPEAVOverlayPlaneInfo@1@AEBV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18023C880 (-HasOverlappingCornerRects@COverlayContext@@KA_NPEAVOverlayPlaneInfo@1@AEBV-$vector_facade@PEAVO.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 */

char __fastcall CCornerRects::DoesIntersect(const struct D2D_RECT_F *a1)
{
  const struct D2D_RECT_F *v1; // rdx
  const struct D2D_RECT_F *v2; // r9
  float *v3; // rdx
  const struct D2D_RECT_F *v4; // rdx
  const struct D2D_RECT_F *v5; // r9
  float *v6; // rdx
  const struct D2D_RECT_F *v7; // rdx
  const struct D2D_RECT_F *v8; // r9
  float *v9; // rdx
  const struct D2D_RECT_F *v10; // rdx
  char v11; // r8
  float *v12; // rdx
  float *v13; // r9

  if ( !IsEmpty(a1) && !IsEmpty(v1) && v2->right > *v3 && v3[2] > v2->left && v2->bottom > v3[1] && v3[3] > v2->top
    || !IsEmpty(v2 + 1)
    && !IsEmpty(v4)
    && v5[1].right > *v6
    && v6[2] > v5[1].left
    && v5[1].bottom > v6[1]
    && v6[3] > v5[1].top
    || !IsEmpty(v5 + 2)
    && !IsEmpty(v7)
    && v8[2].right > *v9
    && v9[2] > v8[2].left
    && v8[2].bottom > v9[1]
    && v9[3] > v8[2].top
    || !IsEmpty(v8 + 3) && !IsEmpty(v10) && v13[14] > *v12 && v12[2] > v13[12] && v13[15] > v12[1] && v12[3] > v13[13] )
  {
    return 1;
  }
  return v11;
}
