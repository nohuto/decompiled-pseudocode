/*
 * XREFs of ??_ESwitchItemFilteredCollection@@UEAAPEAXI@Z @ 0x1804A2070
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SwitchItemFilteredCollection@@UEAA@XZ @ 0x1804A1E44 (--1SwitchItemFilteredCollection@@UEAA@XZ.c)
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
