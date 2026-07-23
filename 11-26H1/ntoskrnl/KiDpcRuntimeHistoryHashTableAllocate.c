/*
 * XREFs of KiDpcRuntimeHistoryHashTableAllocate @ 0x1404E0090
 * Callers:
 *     KiInitializeSingleDpcRuntimeHistoryHashTable @ 0x1407BE798 (KiInitializeSingleDpcRuntimeHistoryHashTable.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 KiDpcRuntimeHistoryHashTableAllocate()
{
  return ExAllocatePool2(0x40uLL);
}
