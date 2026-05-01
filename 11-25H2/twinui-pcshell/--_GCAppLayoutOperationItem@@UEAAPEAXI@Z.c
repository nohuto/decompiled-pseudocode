/*
 * XREFs of ??_GCAppLayoutOperationItem@@UEAAPEAXI@Z @ 0x1806A1AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAppLayoutOperationItem@@UEAA@XZ @ 0x1806A1674 (--1CAppLayoutOperationItem@@UEAA@XZ.c)
 */

CAppLayoutOperationItem *__fastcall CAppLayoutOperationItem::`scalar deleting destructor'(
        CAppLayoutOperationItem *this,
        char a2)
{
  CAppLayoutOperationItem::~CAppLayoutOperationItem(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xB8);
  return this;
}
