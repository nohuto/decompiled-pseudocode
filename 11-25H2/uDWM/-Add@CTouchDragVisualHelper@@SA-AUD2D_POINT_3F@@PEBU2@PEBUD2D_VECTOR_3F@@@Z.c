/*
 * XREFs of ?Add@CTouchDragVisualHelper@@SA?AUD2D_POINT_3F@@PEBU2@PEBUD2D_VECTOR_3F@@@Z @ 0x18002E2D4
 * Callers:
 *     ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x18002DAF8 (-SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z.c)
 *     ?TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEBUtagRECT@@PEAV?$DynArray@UD2D_POINT_3F@@$0A@@@PEAV?$DynArray@UD2D_POINT_2F@@$0A@@@PEAV?$DynArray@I$0A@@@@Z @ 0x18002E8B0 (-TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEB.c)
 * Callees:
 *     <none>
 */

float *__fastcall CTouchDragVisualHelper::Add(float *a1, float *a2, float *a3)
{
  float *result; // rax
  float v4; // xmm1_4
  float v5; // xmm0_4

  result = a1;
  v4 = a2[1] + a3[1];
  *a1 = *a2 + *a3;
  v5 = a2[2] + a3[2];
  a1[1] = v4;
  a1[2] = v5;
  return result;
}
