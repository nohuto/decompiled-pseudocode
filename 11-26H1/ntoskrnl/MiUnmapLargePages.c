/*
 * XREFs of MiUnmapLargePages @ 0x1405053F4
 * Callers:
 *     MiUnmapContiguousMemory @ 0x1403456A8 (MiUnmapContiguousMemory.c)
 *     MiRemoveFromSystemSpace @ 0x140489AA8 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x1404E7024 (MiInsertInSystemSpace.c)
 * Callees:
 *     MiReturnSystemVa @ 0x1402A3788 (MiReturnSystemVa.c)
 */

__int64 __fastcall MiUnmapLargePages(unsigned __int64 a1, __int64 a2)
{
  return MiReturnSystemVa(a1, a1 + a2);
}
