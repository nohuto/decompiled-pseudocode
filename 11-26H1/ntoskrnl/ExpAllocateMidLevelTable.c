/*
 * XREFs of ExpAllocateMidLevelTable @ 0x1409BDB3C
 * Callers:
 *     ExpAllocateHandleTableEntrySlow @ 0x1409BD784 (ExpAllocateHandleTableEntrySlow.c)
 * Callees:
 *     ExpAllocateTablePagedPool @ 0x140906A9C (ExpAllocateTablePagedPool.c)
 *     ExpFreeTablePagedPool @ 0x140908540 (ExpFreeTablePagedPool.c)
 *     ExpAllocateLowLevelTable @ 0x1409BDA50 (ExpAllocateLowLevelTable.c)
 */

_QWORD *__fastcall ExpAllocateMidLevelTable(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *TablePagedPool; // rdi
  _QWORD *LowLevelTable; // rax

  TablePagedPool = ExpAllocateTablePagedPool(*(_QWORD *)(a1 + 16), 0x1000uLL);
  if ( TablePagedPool )
  {
    LowLevelTable = ExpAllocateLowLevelTable(a1, a3);
    *a2 = LowLevelTable;
    if ( LowLevelTable )
    {
      *TablePagedPool = LowLevelTable;
      return TablePagedPool;
    }
    ExpFreeTablePagedPool(*(_QWORD *)(a1 + 16), TablePagedPool, 0x1000uLL);
  }
  return 0LL;
}
