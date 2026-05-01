/*
 * XREFs of ??_GCAppLayoutOperationItem@@UEAAPEAXI@Z @ 0x1806C9A00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAppLayoutOperationItem@@UEAA@XZ @ 0x1806C95B4 (--1CAppLayoutOperationItem@@UEAA@XZ.c)
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
