/*
 * XREFs of ??_GCOperationWaiter@@UEAAPEAXI@Z @ 0x1801B69C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COperationWaiter@@UEAA@XZ @ 0x1801B69FC (--1COperationWaiter@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

COperationWaiter *__fastcall COperationWaiter::`scalar deleting destructor'(COperationWaiter *this, char a2)
{
  COperationWaiter::~COperationWaiter(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
