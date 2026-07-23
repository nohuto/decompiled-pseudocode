/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x1404B22EC
 * Callers:
 *     RtlExpandHashTable @ 0x14046C3D0 (RtlExpandHashTable.c)
 *     RtlpCreateHashTable @ 0x1404B2200 (RtlpCreateHashTable.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 RtlpAllocateSecondLevelDir()
{
  return ExAllocatePool2(0x40uLL);
}
