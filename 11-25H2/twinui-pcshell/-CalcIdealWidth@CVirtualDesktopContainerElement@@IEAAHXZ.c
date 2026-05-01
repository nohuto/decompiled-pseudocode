/*
 * XREFs of ?CalcIdealWidth@CVirtualDesktopContainerElement@@IEAAHXZ @ 0x1804CAE24
 * Callers:
 *     ?GetTotalRect@CVirtualDesktopContainerElement@@UEAA?AUCRect@Geometry@@XZ @ 0x1804CB220 (-GetTotalRect@CVirtualDesktopContainerElement@@UEAA-AUCRect@Geometry@@XZ.c)
 *     ?v_LayoutChildren@CVirtualDesktopContainerElement@@MEAAXXZ @ 0x1804CC3D0 (-v_LayoutChildren@CVirtualDesktopContainerElement@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualDesktopContainerElement::CalcIdealWidth(CVirtualDesktopContainerElement *this)
{
  return CVirtualDesktopContainerElement::CalcWidthForDesktopCount(this, *((_DWORD *)this + 200));
}
