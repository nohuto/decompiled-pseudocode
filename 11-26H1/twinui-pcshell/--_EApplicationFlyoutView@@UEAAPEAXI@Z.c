/*
 * XREFs of ??_EApplicationFlyoutView@@UEAAPEAXI@Z @ 0x1805FB7C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ApplicationFlyoutView@@UEAA@XZ @ 0x1805FB6D0 (--1ApplicationFlyoutView@@UEAA@XZ.c)
 */

ApplicationFlyoutView *__fastcall ApplicationFlyoutView::`vector deleting destructor'(
        ApplicationFlyoutView *this,
        char a2)
{
  ApplicationFlyoutView::~ApplicationFlyoutView(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x68);
  return this;
}
