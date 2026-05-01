/*
 * XREFs of ?GetPosition@MultitaskingViewDragVisual@@UEAA?AUCRect@Geometry@@XZ @ 0x1804CE660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall MultitaskingViewDragVisual::GetPosition(_DWORD *a1, _DWORD *a2)
{
  int v2; // r9d
  int v3; // r11d
  int v4; // r8d
  int v5; // r10d

  v2 = a1[18];
  v3 = a1[19];
  v4 = -a1[12];
  v5 = -a1[13];
  *a2 = v2 - a1[12];
  a2[2] = v4 + v2 + a1[14];
  a2[3] = v5 + v3 + a1[15];
  a2[1] = v3 + v5;
  return a2;
}
