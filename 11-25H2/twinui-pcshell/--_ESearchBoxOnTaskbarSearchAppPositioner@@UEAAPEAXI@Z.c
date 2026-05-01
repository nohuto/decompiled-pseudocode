/*
 * XREFs of ??_ESearchBoxOnTaskbarSearchAppPositioner@@UEAAPEAXI@Z @ 0x1803C5D50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SearchBoxOnTaskbarSearchAppPositioner@@UEAA@XZ @ 0x1803C5CEC (--1SearchBoxOnTaskbarSearchAppPositioner@@UEAA@XZ.c)
 */

SearchBoxOnTaskbarSearchAppPositioner *__fastcall SearchBoxOnTaskbarSearchAppPositioner::`vector deleting destructor'(
        SearchBoxOnTaskbarSearchAppPositioner *this,
        char a2)
{
  SearchBoxOnTaskbarSearchAppPositioner::~SearchBoxOnTaskbarSearchAppPositioner(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x10);
  return this;
}
