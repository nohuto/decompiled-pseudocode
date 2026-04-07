/*
 * XREFs of ?Length@CTouchDragVisualHelper@@SAMPEBUD2D_VECTOR_2F@@@Z @ 0x1800CCF88
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18007D614 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CTouchDragVisualHelper::Length(const struct D2D_VECTOR_2F *a1)
{
  return o_sqrtf_0((float)(a1->y * a1->y) + (float)(a1->x * a1->x));
}
