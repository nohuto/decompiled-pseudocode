/*
 * XREFs of ??_EISearchAppPositioner@@UEAAPEAXI@Z @ 0x1803C5B20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ISearchAppPositioner *__fastcall ISearchAppPositioner::`vector deleting destructor'(
        ISearchAppPositioner *this,
        char a2)
{
  *(_QWORD *)this = &ISearchAppPositioner::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)8);
  return this;
}
