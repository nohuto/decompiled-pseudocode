/*
 * XREFs of ?GetLayoutParameters@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAU3@PEAUD2D_RECT_F@@3PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180208BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPrimitiveGroupRenderStrategy::GetLayoutParameters(
        CPrimitiveGroupRenderStrategy *this,
        struct D2D_RECT_F *a2,
        const struct D2D_SIZE_F *a3,
        struct D2D_SIZE_F *a4,
        struct D2D_RECT_F *a5,
        struct D2D_RECT_F *a6,
        struct D2D_MATRIX_3X2_F *a7)
{
  __m128 right_low; // xmm0
  __m128 bottom_low; // xmm1
  __m128i si128; // xmm3
  __m128 v10; // xmm2
  __m128 v11; // xmm1

  right_low = (__m128)LODWORD(a2[15].right);
  bottom_low = (__m128)LODWORD(a2[15].bottom);
  bottom_low.m128_f32[0] = bottom_low.m128_f32[0] - a2[15].top;
  right_low.m128_f32[0] = right_low.m128_f32[0] - a2[15].left;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  *a4 = (struct D2D_SIZE_F)_mm_unpacklo_ps(right_low, bottom_low).m128_u64[0];
  *a6 = a2[15];
  *a5 = a2[15];
  v10 = _mm_xor_ps((__m128)LODWORD(a2[15].left), (__m128)_xmm);
  v11 = _mm_xor_ps((__m128)LODWORD(a2[15].top), (__m128)_xmm);
  *(__m128i *)&a7->m11 = si128;
  *(_QWORD *)&a7->m[2][0] = _mm_unpacklo_ps(v10, v11).m128_u64[0];
  return 0LL;
}
