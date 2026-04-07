/*
 * XREFs of ?Subtract@CTouchDragVisualHelper@@SA?AUD2D_VECTOR_3F@@PEBUD2D_POINT_3F@@0@Z @ 0x18002E4D4
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18002D6B0 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEBUtagRECT@@PEAV?$DynArray@UD2D_POINT_3F@@$0A@@@PEAV?$DynArray@UD2D_POINT_2F@@$0A@@@PEAV?$DynArray@I$0A@@@@Z @ 0x18002E8B0 (-TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEB.c)
 * Callees:
 *     <none>
 */

struct D2D_VECTOR_3F *__fastcall CTouchDragVisualHelper::Subtract(
        struct D2D_VECTOR_3F *__return_ptr retstr,
        const struct D2D_POINT_3F *a2,
        const struct D2D_POINT_3F *a3)
{
  struct D2D_VECTOR_3F *result; // rax
  FLOAT v4; // xmm1_4
  FLOAT v5; // xmm0_4

  result = retstr;
  v4 = *((float *)a2 + 1) - *((float *)a3 + 1);
  retstr->x = *(float *)a2 - *(float *)a3;
  v5 = *((float *)a2 + 2) - *((float *)a3 + 2);
  retstr->y = v4;
  retstr->z = v5;
  return result;
}
