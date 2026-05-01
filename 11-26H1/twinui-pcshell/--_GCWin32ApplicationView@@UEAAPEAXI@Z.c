/*
 * XREFs of ??_GCWin32ApplicationView@@UEAAPEAXI@Z @ 0x18006F890
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWin32ApplicationView@@UEAA@XZ @ 0x18006F8CC (--1CWin32ApplicationView@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
