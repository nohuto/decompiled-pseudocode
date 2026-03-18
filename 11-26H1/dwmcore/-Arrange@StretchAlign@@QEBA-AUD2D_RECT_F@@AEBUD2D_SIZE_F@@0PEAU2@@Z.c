/*
 * XREFs of ?Arrange@StretchAlign@@QEBA?AUD2D_RECT_F@@AEBUD2D_SIZE_F@@0PEAU2@@Z @ 0x180187AB0
 * Callers:
 *     ?GetBrushParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x18003A9F0 (-GetBrushParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@@Z @ 0x18020305C (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@@Z.c)
 *     ?GetRealization@CViewBox@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180285FF0 (-GetRealization@CViewBox@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     <none>
 */

struct D2D_RECT_F *__fastcall StretchAlign::Arrange(
        StretchAlign *this,
        struct D2D_RECT_F *__return_ptr retstr,
        const struct D2D_SIZE_F *a3,
        const struct D2D_SIZE_F *a4,
        struct D2D_RECT_F *a5)
{
  int v5; // r10d
  float v6; // xmm2_4
  float v7; // xmm0_4
  FLOAT width; // xmm0_4
  FLOAT height; // xmm1_4
  FLOAT v11; // xmm1_4
  FLOAT v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm3_4
  struct D2D_RECT_F v15; // [rsp+0h] [rbp-38h]

  v5 = *((_DWORD *)this + 2);
  v6 = 0.0;
  v7 = 0.0;
  if ( v5 == 1 )
  {
    width = a4->width;
    height = a4->height;
    *(_QWORD *)&retstr->left = 0LL;
    retstr->right = width;
    retstr->bottom = height;
    if ( a5 )
      *a5 = *retstr;
    return retstr;
  }
  if ( !v5 )
    goto LABEL_9;
  if ( (unsigned int)(v5 - 2) > 1 )
    goto LABEL_10;
  v6 = a4->width;
  if ( a3->width == a4->width && a3->height == a4->height )
  {
LABEL_9:
    LODWORD(v6) = *(const struct D2D_SIZE_F *)&a3->width;
    LODWORD(v7) = _mm_shuffle_ps((__m128)*(_QWORD *)a3, (__m128)*(_QWORD *)a3, 85).m128_u32[0];
  }
  else
  {
    v13 = a3->width / a3->height;
    v14 = a4->height;
    v7 = v6 / v13;
    if ( (float)(v6 / v13) >= v14 != (v5 == 3) )
    {
      v7 = a4->height;
      v6 = v14 * v13;
    }
  }
LABEL_10:
  v15.left = (float)(a4->width - v6) * *(float *)this;
  v15.top = (float)(a4->height - v7) * *((float *)this + 1);
  v15.right = v15.left + v6;
  v11 = fminf(v15.left + v6, a4->width);
  v12 = fminf(v15.top + v7, a4->height);
  retstr->left = fmaxf(0.0, v15.left);
  retstr->top = fmaxf(0.0, v15.top);
  retstr->right = v11;
  retstr->bottom = v12;
  if ( !a5 )
    return retstr;
  v15.bottom = v15.top + v7;
  *a5 = v15;
  return retstr;
}
