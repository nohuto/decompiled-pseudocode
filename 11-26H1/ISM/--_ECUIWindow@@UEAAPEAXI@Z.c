/*
 * XREFs of ??_ECUIWindow@@UEAAPEAXI@Z @ 0x1800A7D40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CUIWindow@@UEAA@XZ @ 0x1800A7BC8 (--1CUIWindow@@UEAA@XZ.c)
 */

CUIWindow *__fastcall CUIWindow::`vector deleting destructor'(CUIWindow *this, char a2)
{
  CUIWindow::~CUIWindow(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
