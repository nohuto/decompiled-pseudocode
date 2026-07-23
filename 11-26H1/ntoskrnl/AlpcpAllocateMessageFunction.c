/*
 * XREFs of AlpcpAllocateMessageFunction @ 0x140A9BC40
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x14077D3D0 (AlpcpAllocateMessageFromExtendedTables.c)
 *     ExCreateHandleEx @ 0x140907CD0 (ExCreateHandleEx.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void *AlpcpAllocateMessageFunction()
{
  __int64 Pool2; // rax
  void *v1; // rbx
  __int64 v2; // rdi
  unsigned __int64 Handle; // rax

  Pool2 = ExAllocatePool2(0x100uLL);
  v1 = (void *)Pool2;
  if ( !Pool2 )
    return v1;
  v2 = Pool2 + 48;
  memset_0((void *)(Pool2 + 48), 0, 0x118uLL);
  Handle = ExCreateHandleEx((unsigned int *)AlpcMessageTable, v2, 0, 0LL, 0LL);
  if ( Handle || (Handle = AlpcpAllocateMessageFromExtendedTables(v2)) != 0 )
  {
    *(_DWORD *)(v2 + 264) = Handle | 0x80000000;
    return v1;
  }
  ExFreePoolWithTag(v1, 0);
  return 0LL;
}
