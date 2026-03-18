/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x1404B8ABC
 * Callers:
 *     RtlExpandHashTable @ 0x140472C50 (RtlExpandHashTable.c)
 *     RtlpCreateHashTable @ 0x1404B89D0 (RtlpCreateHashTable.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 RtlpAllocateSecondLevelDir()
{
  return ExAllocatePool2(0x40uLL);
}
