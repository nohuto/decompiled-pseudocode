/*
 * XREFs of ExpAllocateTablePagedPool @ 0x14092AF6C
 * Callers:
 *     ObDuplicateObject @ 0x1408F0680 (ObDuplicateObject.c)
 *     ExCreateHandleEx @ 0x14092C1A0 (ExCreateHandleEx.c)
 *     ObpCreateHandle @ 0x14092CA60 (ObpCreateHandle.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x140972494 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpAllocateMidLevelTable @ 0x14097284C (ExpAllocateMidLevelTable.c)
 *     ExpSetHandleExtraInfo @ 0x140A905AC (ExpSetHandleExtraInfo.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x140972798 (ExpAllocateTablePagedPoolNoZero.c)
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
