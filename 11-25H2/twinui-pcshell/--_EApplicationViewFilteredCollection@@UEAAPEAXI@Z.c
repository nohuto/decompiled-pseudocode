/*
 * XREFs of ??_EApplicationViewFilteredCollection@@UEAAPEAXI@Z @ 0x180599020
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ApplicationViewFilteredCollection@@UEAA@XZ @ 0x180598E88 (--1ApplicationViewFilteredCollection@@UEAA@XZ.c)
 */

ApplicationViewFilteredCollection *__fastcall ApplicationViewFilteredCollection::`vector deleting destructor'(
        ApplicationViewFilteredCollection *this,
        char a2)
{
  ApplicationViewFilteredCollection::~ApplicationViewFilteredCollection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xC0);
  return this;
}
