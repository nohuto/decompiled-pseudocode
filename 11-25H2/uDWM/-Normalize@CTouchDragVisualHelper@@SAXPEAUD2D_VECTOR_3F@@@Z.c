/*
 * XREFs of ?Normalize@CTouchDragVisualHelper@@SAXPEAUD2D_VECTOR_3F@@@Z @ 0x18002E21C
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18002D6B0 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x18002DAF8 (-SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z.c)
 * Callees:
 *     ?Length@CTouchDragVisualHelper@@SAMPEBUD2D_VECTOR_3F@@@Z @ 0x18002E274 (-Length@CTouchDragVisualHelper@@SAMPEBUD2D_VECTOR_3F@@@Z.c)
 *     ?Multiply@CTouchDragVisualHelper@@SA?AUD2D_POINT_3F@@PEBU2@M@Z @ 0x18002E2A4 (-Multiply@CTouchDragVisualHelper@@SA-AUD2D_POINT_3F@@PEBU2@M@Z.c)
 */

void __fastcall CTouchDragVisualHelper::Normalize(struct D2D_VECTOR_3F *a1)
{
  __int64 v2; // rax
  FLOAT v3; // ecx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( CTouchDragVisualHelper::Length(a1) < 0.00000011920929 )
  {
    a1->x = 1.0;
  }
  else
  {
    v2 = CTouchDragVisualHelper::Multiply(v4, a1);
    v3 = *(float *)(v2 + 8);
    *(_QWORD *)&a1->x = *(_QWORD *)v2;
    a1->z = v3;
  }
}
