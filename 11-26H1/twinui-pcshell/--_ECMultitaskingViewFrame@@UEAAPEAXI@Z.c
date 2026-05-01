/*
 * XREFs of ??_ECMultitaskingViewFrame@@UEAAPEAXI@Z @ 0x1804B96E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CMultitaskingViewFrame@@UEAA@XZ @ 0x1804B9470 (--1CMultitaskingViewFrame@@UEAA@XZ.c)
 */

CMultitaskingViewFrame *__fastcall CMultitaskingViewFrame::`vector deleting destructor'(
        CMultitaskingViewFrame *this,
        char a2)
{
  CMultitaskingViewFrame::~CMultitaskingViewFrame(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA30);
  return this;
}
