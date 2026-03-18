/*
 * XREFs of MiUnmapLargePages @ 0x14050B984
 * Callers:
 *     MiUnmapContiguousMemory @ 0x140343628 (MiUnmapContiguousMemory.c)
 *     MiRemoveFromSystemSpace @ 0x14048FFF8 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x1404EDA44 (MiInsertInSystemSpace.c)
 * Callees:
 *     MiReturnSystemVa @ 0x1402A4238 (MiReturnSystemVa.c)
 */

__int64 __fastcall MiUnmapLargePages(unsigned __int64 a1, __int64 a2)
{
  return MiReturnSystemVa(a1, a1 + a2);
}
