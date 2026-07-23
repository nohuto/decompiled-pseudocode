/*
 * XREFs of ExpAllocateTablePagedPool @ 0x140906A9C
 * Callers:
 *     ObDuplicateObject @ 0x1408F6C40 (ObDuplicateObject.c)
 *     ExCreateHandleEx @ 0x140907CD0 (ExCreateHandleEx.c)
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1409BD784 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpAllocateMidLevelTable @ 0x1409BDB3C (ExpAllocateMidLevelTable.c)
 *     ExpSetHandleExtraInfo @ 0x140A950FC (ExpSetHandleExtraInfo.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x1409BDA88 (ExpAllocateTablePagedPoolNoZero.c)
 */

void *__fastcall ExpAllocateTablePagedPool(__int64 a1, size_t a2)
{
  void *TablePagedPoolNoZero; // rax
  void *v4; // rbx

  TablePagedPoolNoZero = (void *)ExpAllocateTablePagedPoolNoZero();
  v4 = TablePagedPoolNoZero;
  if ( TablePagedPoolNoZero )
    memset_0(TablePagedPoolNoZero, 0, a2);
  return v4;
}
