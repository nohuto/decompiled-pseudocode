/*
 * XREFs of ?GetVisibleRect@CVirtualDesktopContainerElement@@UEAA?AUCRect@Geometry@@XZ @ 0x1804DD450
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcMaxVisibleDesktopCount@CVirtualDesktopContainerElement@@IEAAHXZ @ 0x1804DCFB8 (-CalcMaxVisibleDesktopCount@CVirtualDesktopContainerElement@@IEAAHXZ.c)
 *     ?CalcWidthForDesktopCount@CVirtualDesktopContainerElement@@IEAAHH@Z @ 0x1804DD020 (-CalcWidthForDesktopCount@CVirtualDesktopContainerElement@@IEAAHH@Z.c)
 */

int *__fastcall CVirtualDesktopContainerElement::GetVisibleRect(__int64 a1, int *a2)
{
  CVirtualDesktopContainerElement *v2; // rbx
  int v3; // esi
  int v6; // eax
  int v7; // r8d
  int v8; // eax
  int v9; // eax

  v2 = (CVirtualDesktopContainerElement *)(a1 - 224);
  v3 = *(_DWORD *)(a1 - 156) - *(_DWORD *)(a1 - 164);
  v6 = CVirtualDesktopContainerElement::CalcMaxVisibleDesktopCount((CVirtualDesktopContainerElement *)(a1 - 224));
  v7 = CVirtualDesktopContainerElement::CalcWidthForDesktopCount(v2, v6);
  v8 = *(_DWORD *)(a1 - 160) - v7;
  a2[3] = v3;
  v9 = (v8 - *(_DWORD *)(a1 - 168)) / 2;
  a2[1] = 0;
  *a2 = v9;
  a2[2] = v7 + v9;
  return a2;
}
