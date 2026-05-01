/*
 * XREFs of ??_GCWin32ApplicationView@@UEAAPEAXI@Z @ 0x18008C780
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWin32ApplicationView@@UEAA@XZ @ 0x18008C7BC (--1CWin32ApplicationView@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CWin32ApplicationView *__fastcall CWin32ApplicationView::`scalar deleting destructor'(
        CWin32ApplicationView *this,
        char a2)
{
  CWin32ApplicationView::~CWin32ApplicationView(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x110);
  return this;
}
