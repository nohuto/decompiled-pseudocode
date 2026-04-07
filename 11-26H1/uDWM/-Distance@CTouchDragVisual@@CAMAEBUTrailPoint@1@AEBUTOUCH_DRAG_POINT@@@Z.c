/*
 * XREFs of ?Distance@CTouchDragVisual@@CAMAEBUTrailPoint@1@AEBUTOUCH_DRAG_POINT@@@Z @ 0x1800CC8C4
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18007D614 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CTouchDragVisual::Distance(
        const struct CTouchDragVisual::TrailPoint *a1,
        const struct TOUCH_DRAG_POINT *a2)
{
  return o_sqrtf_0(
           (float)((float)(*((float *)a2 + 2) - *((float *)a1 + 5)) * (float)(*((float *)a2 + 2) - *((float *)a1 + 5)))
         + (float)((float)(*((float *)a2 + 1) - *((float *)a1 + 4)) * (float)(*((float *)a2 + 1) - *((float *)a1 + 4))));
}
