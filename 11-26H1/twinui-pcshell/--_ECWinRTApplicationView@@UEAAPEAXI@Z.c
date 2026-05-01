/*
 * XREFs of ??_ECWinRTApplicationView@@UEAAPEAXI@Z @ 0x18030C4F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CWinRTApplicationView@@UEAA@XZ @ 0x18030C3EC (--1CWinRTApplicationView@@UEAA@XZ.c)
 */

CWinRTApplicationView *__fastcall CWinRTApplicationView::`vector deleting destructor'(
        CWinRTApplicationView *this,
        char a2)
{
  CWinRTApplicationView::~CWinRTApplicationView(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF0);
  return this;
}
