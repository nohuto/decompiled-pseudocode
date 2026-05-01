/*
 * XREFs of ??_ESwitchItem@@UEAAPEAXI@Z @ 0x1804AB860
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SwitchItem@@UEAA@XZ @ 0x1804AB768 (--1SwitchItem@@UEAA@XZ.c)
 */

SwitchItem *__fastcall SwitchItem::`vector deleting destructor'(SwitchItem *this, char a2)
{
  SwitchItem::~SwitchItem(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xC8);
  return this;
}
