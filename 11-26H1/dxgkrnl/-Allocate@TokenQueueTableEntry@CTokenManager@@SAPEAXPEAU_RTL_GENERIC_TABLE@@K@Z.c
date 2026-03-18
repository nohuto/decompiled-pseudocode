/*
 * XREFs of ?Allocate@TokenQueueTableEntry@CTokenManager@@SAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1400552C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CTokenManager::TokenQueueTableEntry::Allocate(struct _RTL_GENERIC_TABLE *Table, CLONG ByteSize)
{
  __int64 v2; // rcx
  __int64 v3; // rax

  v2 = 0LL;
  v3 = ByteSize;
  if ( !ByteSize )
  {
    v3 = 1LL;
    return ExAllocatePool2(256LL, v3, 1702120788LL);
  }
  if ( ByteSize <= 0x7FFFFFFFuLL )
    return ExAllocatePool2(256LL, v3, 1702120788LL);
  return v2;
}
