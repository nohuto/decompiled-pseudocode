/*
 * XREFs of LdrProcessRelocationBlock @ 0x18013BEC0
 * Callers:
 *     <none>
 * Callees:
 *     LdrProcessRelocationBlockLongLong @ 0x1800D5400 (LdrProcessRelocationBlockLongLong.c)
 */

PIMAGE_BASE_RELOCATION __cdecl LdrProcessRelocationBlock(
        ULONG_PTR VA,
        ULONG SizeOfBlock,
        PUSHORT NextOffset,
        LONG_PTR Diff)
{
  return (PIMAGE_BASE_RELOCATION)LdrProcessRelocationBlockLongLong(0x8664u, VA, SizeOfBlock, NextOffset, Diff);
}
