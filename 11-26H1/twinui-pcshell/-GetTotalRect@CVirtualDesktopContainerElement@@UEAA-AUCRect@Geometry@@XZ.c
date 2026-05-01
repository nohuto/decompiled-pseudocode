/*
 * XREFs of ?GetTotalRect@CVirtualDesktopContainerElement@@UEAA?AUCRect@Geometry@@XZ @ 0x1804DD3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcIdealWidth@CVirtualDesktopContainerElement@@IEAAHXZ @ 0x1804DCFA4 (-CalcIdealWidth@CVirtualDesktopContainerElement@@IEAAHXZ.c)
 */

__int64 __fastcall CVirtualDesktopContainerElement::GetTotalRect(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 - 156) - *(_DWORD *)(a1 - 164);
  *(_DWORD *)(a2 + 8) = CVirtualDesktopContainerElement::CalcIdealWidth((CVirtualDesktopContainerElement *)(a1 - 224));
  result = a2;
  *(_DWORD *)(a2 + 12) = v3;
  *(_QWORD *)a2 = 0LL;
  return result;
}
