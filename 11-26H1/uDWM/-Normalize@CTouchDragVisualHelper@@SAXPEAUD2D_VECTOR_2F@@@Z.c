/*
 * XREFs of ?Normalize@CTouchDragVisualHelper@@SAXPEAUD2D_VECTOR_2F@@@Z @ 0x18008B27C
 * Callers:
 *     ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x1800561D8 (-SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z.c)
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18007D614 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     _o_sqrtf_0 @ 0x18008EF00 (_o_sqrtf_0.c)
 */

void __fastcall CTouchDragVisualHelper::Normalize(struct D2D_VECTOR_2F *a1)
{
  float v2; // xmm0_4
  __m128 v3; // xmm1
  __m128 v4; // xmm0

  v2 = o_sqrtf_0((float)(a1->y * a1->y) + (float)(a1->x * a1->x));
  if ( v2 >= 0.00000011920929 )
  {
    v3 = (__m128)LODWORD(FLOAT_1_0);
    v3.m128_f32[0] = 1.0 / v2;
    v4 = v3;
    v3.m128_f32[0] = v3.m128_f32[0] * a1->y;
    v4.m128_f32[0] = v4.m128_f32[0] * a1->x;
    *a1 = (struct D2D_VECTOR_2F)_mm_unpacklo_ps(v4, v3).m128_u64[0];
  }
  else
  {
    a1->x = 1.0;
  }
}
