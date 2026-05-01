/*
 * XREFs of ??_ECAppLayoutItem@@UEAAPEAXI@Z @ 0x180218860
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAppLayoutItem@@UEAA@XZ @ 0x1802188A0 (--1CAppLayoutItem@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CAppLayoutItem *__fastcall CAppLayoutItem::`vector deleting destructor'(CAppLayoutItem *this, char a2)
{
  CAppLayoutItem::~CAppLayoutItem(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x80);
  return this;
}
