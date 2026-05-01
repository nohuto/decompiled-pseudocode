/*
 * XREFs of ??_ESwitchItemFilteredCollection@@UEAAPEAXI@Z @ 0x1804B33B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SwitchItemFilteredCollection@@UEAA@XZ @ 0x1804B3180 (--1SwitchItemFilteredCollection@@UEAA@XZ.c)
 */

SwitchItemFilteredCollection *__fastcall SwitchItemFilteredCollection::`vector deleting destructor'(
        SwitchItemFilteredCollection *this,
        char a2)
{
  SwitchItemFilteredCollection::~SwitchItemFilteredCollection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x158);
  return this;
}
