/*
 * XREFs of ??0CRect@Geometry@@QEAA@VRect@Foundation@Windows@@@Z @ 0x1802C2274
 * Callers:
 *     ?Position@TaskViewFrame@@UEAA?AUtagRECT@@XZ @ 0x1806967E0 (-Position@TaskViewFrame@@UEAA-AUtagRECT@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall Geometry::CRect::CRect(_DWORD *a1, float *a2)
{
  *a1 = (int)*a2;
  a1[1] = (int)a2[1];
  a1[2] = (int)Windows::Foundation::Rect::Right::get((Windows::Foundation::Rect::Right *)a2);
  a1[3] = (int)Windows::Foundation::Rect::Bottom::get((Windows::Foundation::Rect::Bottom *)a2);
  return a1;
}
