/*
 * XREFs of ?Add@CTouchDragVisualHelper@@SA?AUD2D_VECTOR_2F@@PEBU2@0@Z @ 0x18008D934
 * Callers:
 *     ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x1800561D8 (-SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z.c)
 * Callees:
 *     <none>
 */

struct D2D_VECTOR_2F __fastcall CTouchDragVisualHelper::Add(
        const struct D2D_VECTOR_2F *a1,
        const struct D2D_VECTOR_2F *a2)
{
  __m128 x_low; // xmm0
  __m128 y_low; // xmm1

  x_low = (__m128)LODWORD(a1->x);
  y_low = (__m128)LODWORD(a1->y);
  x_low.m128_f32[0] = x_low.m128_f32[0] + a2->x;
  y_low.m128_f32[0] = y_low.m128_f32[0] + a2->y;
  return (struct D2D_VECTOR_2F)_mm_unpacklo_ps(x_low, y_low).m128_u64[0];
}
