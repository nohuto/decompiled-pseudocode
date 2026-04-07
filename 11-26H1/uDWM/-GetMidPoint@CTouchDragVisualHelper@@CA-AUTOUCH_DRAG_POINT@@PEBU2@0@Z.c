/*
 * XREFs of ?GetMidPoint@CTouchDragVisualHelper@@CA?AUTOUCH_DRAG_POINT@@PEBU2@0@Z @ 0x1800566C0
 * Callers:
 *     ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x1800561D8 (-SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTouchDragVisualHelper::GetMidPoint(__int64 a1, __int64 a2, __int64 a3)
{
  float v3; // xmm0_4
  __int64 result; // rax

  *(_QWORD *)(a1 + 12) = 0LL;
  v3 = *(float *)(a2 + 4) + *(float *)(a3 + 4);
  *(_DWORD *)a1 = (unsigned int)(*(_DWORD *)a3 + *(_DWORD *)a2) >> 1;
  result = a1;
  *(float *)(a1 + 4) = v3 * 0.5;
  *(float *)(a1 + 8) = (float)(*(float *)(a2 + 8) + *(float *)(a3 + 8)) * 0.5;
  return result;
}
