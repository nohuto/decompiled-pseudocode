/*
 * XREFs of ??_GCAppLayoutAnimationData@@UEAAPEAXI@Z @ 0x1806A16A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAppLayoutOperationItem@@UEAA@XZ @ 0x1806A1674 (--1CAppLayoutOperationItem@@UEAA@XZ.c)
 */

CAppLayoutAnimationData *__fastcall CAppLayoutAnimationData::`scalar deleting destructor'(
        CAppLayoutAnimationData *this,
        char a2)
{
  CAppLayoutOperationItem::~CAppLayoutOperationItem(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
