/*
 * XREFs of ?Multiply@CTouchDragVisualHelper@@SA?AUD2D_VECTOR_2F@@PEBU2@M@Z @ 0x18008DAB4
 * Callers:
 *     ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x1800561D8 (-SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
struct D2D_VECTOR_2F __fastcall CTouchDragVisualHelper::Multiply(const struct D2D_VECTOR_2F *a1, double a2)
{
  __m128 v2; // xmm0

  v2 = *(__m128 *)&a2;
  *(float *)&a2 = *(float *)&a2 * a1->y;
  v2.m128_f32[0] = v2.m128_f32[0] * a1->x;
  return (struct D2D_VECTOR_2F)_mm_unpacklo_ps(v2, *(__m128 *)&a2).m128_u64[0];
}
