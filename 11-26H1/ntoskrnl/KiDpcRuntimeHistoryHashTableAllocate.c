/*
 * XREFs of KiDpcRuntimeHistoryHashTableAllocate @ 0x1404E6BF0
 * Callers:
 *     KiInitializeSingleDpcRuntimeHistoryHashTable @ 0x1407BB738 (KiInitializeSingleDpcRuntimeHistoryHashTable.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 KiDpcRuntimeHistoryHashTableAllocate()
{
  return ExAllocatePool2(0x40uLL);
}
