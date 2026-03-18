/*
 * XREFs of RtlpHpFixedHeapDestroy @ 0x140354010
 * Callers:
 *     RtlDestroyHeap @ 0x140B3BB10 (RtlDestroyHeap.c)
 * Callees:
 *     RtlpHpVsContextCleanup @ 0x1403529C8 (RtlpHpVsContextCleanup.c)
 */

void __fastcall RtlpHpFixedHeapDestroy(__int64 a1)
{
  RtlpHpVsContextCleanup((_WORD *)(a1 + 64));
}
