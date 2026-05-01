/*
 * XREFs of ?GetVisibleRect@CVirtualDesktopContainerElement@@UEAA?AUCRect@Geometry@@XZ @ 0x1804CB2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcMaxVisibleDesktopCount@CVirtualDesktopContainerElement@@IEAAHXZ @ 0x1804CAE38 (-CalcMaxVisibleDesktopCount@CVirtualDesktopContainerElement@@IEAAHXZ.c)
 *     ?CalcWidthForDesktopCount@CVirtualDesktopContainerElement@@IEAAHH@Z @ 0x1804CAEA0 (-CalcWidthForDesktopCount@CVirtualDesktopContainerElement@@IEAAHH@Z.c)
 */

int *__fastcall CVirtualDesktopContainerElement::GetVisibleRect(__int64 a1, int *a2)
{
  int v2; // ebp
  CVirtualDesktopContainerElement *v3; // rbx
  int v4; // esi
  int v7; // eax
  int v8; // eax
  int v9; // r8d
  int v10; // eax
  int *result; // rax

  v2 = *(_DWORD *)(a1 - 156);
  v3 = (CVirtualDesktopContainerElement *)(a1 - 224);
  v4 = *(_DWORD *)(a1 - 164);
  v7 = CVirtualDesktopContainerElement::CalcMaxVisibleDesktopCount((CVirtualDesktopContainerElement *)(a1 - 224));
  v8 = CVirtualDesktopContainerElement::CalcWidthForDesktopCount(v3, v7);
  a2[1] = 0;
  v9 = v8;
  v10 = (*(_DWORD *)(a1 - 160) - v8 - *(_DWORD *)(a1 - 168)) / 2;
  *a2 = v10;
  a2[2] = v9 + v10;
  result = a2;
  a2[3] = v2 - v4;
  return result;
}
