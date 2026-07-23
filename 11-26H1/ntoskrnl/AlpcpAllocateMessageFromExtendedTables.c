/*
 * XREFs of AlpcpAllocateMessageFromExtendedTables @ 0x14077D3D0
 * Callers:
 *     AlpcpAllocateMessageFunction @ 0x140A9BC40 (AlpcpAllocateMessageFunction.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExCreateHandleEx @ 0x140907CD0 (ExCreateHandleEx.c)
 *     ExCreateHandleTable @ 0x1409BCDDC (ExCreateHandleTable.c)
 *     ExDestroyHandleTable @ 0x1409FEA2C (ExDestroyHandleTable.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall AlpcpAllocateMessageFromExtendedTables(int a1)
{
  __int64 Pool2; // rax
  _QWORD *v3; // rbx
  unsigned int i; // edi
  __int64 v5; // r10
  void *HandleTable; // rax
  __int64 Handle; // rax

  if ( !AlpcpSecondaryMessageTables )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v3 = (_QWORD *)Pool2;
    if ( !Pool2 )
      return 0LL;
    memset_0((void *)(Pool2 + 8), 0, 0xF8uLL);
    *v3 = AlpcMessageTable;
    if ( _InterlockedCompareExchange64(&AlpcpSecondaryMessageTables, (signed __int64)v3, 0LL) )
      ExFreePoolWithTag(v3, 0x61486C41u);
  }
  for ( i = 1; i < 0x20; ++i )
  {
    v5 = *(_QWORD *)(AlpcpSecondaryMessageTables + 8LL * i);
    if ( !v5 )
    {
      HandleTable = (void *)ExCreateHandleTable(0LL, 0LL);
      LODWORD(v5) = (_DWORD)HandleTable;
      if ( !HandleTable )
        return 0LL;
      if ( _InterlockedCompareExchange64(
             (volatile signed __int64 *)(AlpcpSecondaryMessageTables + 8LL * i),
             (signed __int64)HandleTable,
             0LL) )
      {
        ExDestroyHandleTable(HandleTable);
        v5 = *(_QWORD *)(AlpcpSecondaryMessageTables + 8LL * i);
      }
    }
    Handle = ExCreateHandleEx(v5, a1, 0, 0, 0LL);
    if ( Handle )
      return ((unsigned __int64)i << 26) | Handle;
  }
  return 0LL;
}
