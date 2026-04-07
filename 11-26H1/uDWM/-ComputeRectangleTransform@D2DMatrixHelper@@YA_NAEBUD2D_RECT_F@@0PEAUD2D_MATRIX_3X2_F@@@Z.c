/*
 * XREFs of ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800706B0
 * Callers:
 *     ?Generate@CNineGridImagePrimitive@@UEAAJPEBUtagRECT@@@Z @ 0x1800BD100 (-Generate@CNineGridImagePrimitive@@UEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall D2DMatrixHelper::ComputeRectangleTransform(
        D2DMatrixHelper *this,
        const struct D2D_RECT_F *a2,
        const struct D2D_RECT_F *a3,
        struct D2D_MATRIX_3X2_F *a4)
{
  bool result; // al
  float v5; // xmm7_4
  float left; // xmm9_4
  float v7; // xmm1_4
  float v8; // xmm8_4
  float v9; // xmm5_4
  float top; // xmm3_4
  float v11; // xmm7_4
  float v12; // xmm8_4
  float v13; // xmm2_4
  float v14; // xmm4_4

  result = 1;
  v5 = *(float *)this;
  left = a2->left;
  if ( *(float *)this == a2->left
    && *((float *)this + 1) == a2->top
    && *((float *)this + 2) == a2->right
    && *((float *)this + 3) == a2->bottom )
  {
    *(_QWORD *)&a3->left = 1065353216LL;
    a3->right = 0.0;
    *(_QWORD *)&a3->bottom = 1065353216LL;
    a3[1].top = 0.0;
  }
  else
  {
    v7 = *((float *)this + 2) - v5;
    if ( v7 == 0.0 )
      return 0;
    v8 = *((float *)this + 1);
    v9 = *((float *)this + 3) - v8;
    if ( v9 == 0.0 )
    {
      return 0;
    }
    else
    {
      top = a2->top;
      LODWORD(v11) = LODWORD(v5) ^ _xmm;
      LODWORD(v12) = LODWORD(v8) ^ _xmm;
      v13 = (float)(a2->right - left) / v7;
      v14 = (float)(a2->bottom - top) / v9;
      a3->left = v13 + 0.0;
      a3->top = (float)(v14 * 0.0) + 0.0;
      a3->right = (float)(v13 * 0.0) + 0.0;
      a3->bottom = v14 + 0.0;
      a3[1].left = (float)((float)(v13 * v11) + (float)(v12 * 0.0)) + left;
      a3[1].top = (float)((float)(v14 * v12) + (float)(v11 * 0.0)) + top;
    }
  }
  return result;
}
