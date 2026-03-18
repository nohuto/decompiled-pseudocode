/*
 * XREFs of ?GetLayoutParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAU3@PEAUD2D_RECT_F@@3PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1802839A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualSurfaceRenderStrategy::GetLayoutParameters(
        CVisualSurfaceRenderStrategy *this,
        const struct CSurfaceBrush *a2,
        const struct D2D_SIZE_F *a3,
        struct D2D_SIZE_F *a4,
        struct D2D_RECT_F *a5,
        struct D2D_RECT_F *a6,
        struct D2D_MATRIX_3X2_F *a7)
{
  __int64 v7; // r8
  __int64 v8; // rcx
  FLOAT v9; // xmm2_4
  FLOAT v10; // xmm3_4

  v7 = *((_QWORD *)a2 + 23);
  v8 = *(_BYTE *)(v7 + 204) != 0 ? 8 : 0;
  v9 = *(float *)(v8 + v7 + 188) + 0.0;
  v10 = *(float *)(v8 + v7 + 184) + 0.0;
  *a4 = (struct D2D_SIZE_F)_mm_unpacklo_ps(
                             (__m128)*(unsigned int *)(v8 + v7 + 184),
                             (__m128)*(unsigned int *)(v8 + v7 + 188)).m128_u64[0];
  *(_QWORD *)&a5->left = 0LL;
  a5->right = v10;
  a5->bottom = v9;
  *(_QWORD *)&a6->left = 0LL;
  a6->right = v10;
  a6->bottom = v9;
  *(_QWORD *)&a7->m11 = 1065353216LL;
  a7->m21 = 0.0;
  *(_QWORD *)&a7->m[1][1] = 1065353216LL;
  a7->dy = 0.0;
  return 0LL;
}
