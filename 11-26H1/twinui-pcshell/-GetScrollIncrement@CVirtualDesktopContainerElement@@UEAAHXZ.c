/*
 * XREFs of ?GetScrollIncrement@CVirtualDesktopContainerElement@@UEAAHXZ @ 0x1804DD2E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualDesktopContainerElement::GetScrollIncrement(CVirtualDesktopContainerElement *this)
{
  int v1; // ebx

  v1 = *((_DWORD *)this + 27);
  return (unsigned int)(v1
                      + MulDiv(
                          *((_DWORD *)this + 26),
                          *((_DWORD *)this + 8) - *((_DWORD *)this + 6),
                          *((_DWORD *)this + 9) - *((_DWORD *)this + 7)));
}
