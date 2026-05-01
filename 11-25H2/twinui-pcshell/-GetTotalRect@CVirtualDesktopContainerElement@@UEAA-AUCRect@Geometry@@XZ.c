/*
 * XREFs of ?GetTotalRect@CVirtualDesktopContainerElement@@UEAA?AUCRect@Geometry@@XZ @ 0x1804CB220
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcIdealWidth@CVirtualDesktopContainerElement@@IEAAHXZ @ 0x1804CAE24 (-CalcIdealWidth@CVirtualDesktopContainerElement@@IEAAHXZ.c)
 */

_DWORD *__fastcall CVirtualDesktopContainerElement::GetTotalRect(__int64 a1, _DWORD *a2)
{
  int v2; // edi
  int v4; // ebx
  int v5; // eax
  _DWORD *result; // rax

  v2 = *(_DWORD *)(a1 - 156);
  v4 = *(_DWORD *)(a1 - 164);
  v5 = CVirtualDesktopContainerElement::CalcIdealWidth((CVirtualDesktopContainerElement *)(a1 - 224));
  *a2 = 0;
  a2[1] = 0;
  a2[2] = v5;
  result = a2;
  a2[3] = v2 - v4;
  return result;
}
