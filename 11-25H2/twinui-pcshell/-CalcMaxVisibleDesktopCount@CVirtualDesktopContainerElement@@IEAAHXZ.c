/*
 * XREFs of ?CalcMaxVisibleDesktopCount@CVirtualDesktopContainerElement@@IEAAHXZ @ 0x1804CAE38
 * Callers:
 *     ?GetVisibleRect@CVirtualDesktopContainerElement@@UEAA?AUCRect@Geometry@@XZ @ 0x1804CB2C0 (-GetVisibleRect@CVirtualDesktopContainerElement@@UEAA-AUCRect@Geometry@@XZ.c)
 *     ?NotifyScrollingChanged@CVirtualDesktopContainerElement@@UEAAX_N@Z @ 0x1804CBC60 (-NotifyScrollingChanged@CVirtualDesktopContainerElement@@UEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualDesktopContainerElement::CalcMaxVisibleDesktopCount(CVirtualDesktopContainerElement *this)
{
  return (*((_DWORD *)this + 83) + *((_DWORD *)this + 16) - 2 * *((_DWORD *)this + 99) - *((_DWORD *)this + 14))
       / (unsigned int)(*((_DWORD *)this + 83)
                      + MulDiv(
                          *((_DWORD *)this + 82),
                          *((_DWORD *)this + 64) - *((_DWORD *)this + 62),
                          *((_DWORD *)this + 65) - *((_DWORD *)this + 63)));
}
