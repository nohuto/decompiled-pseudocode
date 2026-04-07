/*
 * XREFs of ?DotProduct@CTouchDragVisualHelper@@SAMPEBUD2D_VECTOR_2F@@0@Z @ 0x1800CCF68
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18007D614 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CTouchDragVisualHelper::DotProduct(const struct D2D_VECTOR_2F *a1, const struct D2D_VECTOR_2F *a2)
{
  return (float)(a1->y * a2->y) + (float)(a1->x * a2->x);
}
