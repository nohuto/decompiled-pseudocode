/*
 * XREFs of ?Subtract@CTouchDragVisualHelper@@SA?AUD2D_VECTOR_2F@@PEBUD2D_POINT_2F@@0@Z @ 0x1800CCFA8
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18007D614 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

struct D2D_VECTOR_2F __fastcall CTouchDragVisualHelper::Subtract(
        const struct D2D_POINT_2F *a1,
        const struct D2D_POINT_2F *a2)
{
  __m128 x_low; // xmm0
  __m128 y_low; // xmm1

  x_low = (__m128)LODWORD(a1->x);
  y_low = (__m128)LODWORD(a1->y);
  x_low.m128_f32[0] = x_low.m128_f32[0] - a2->x;
  y_low.m128_f32[0] = y_low.m128_f32[0] - a2->y;
  return (struct D2D_VECTOR_2F)_mm_unpacklo_ps(x_low, y_low).m128_u64[0];
}
