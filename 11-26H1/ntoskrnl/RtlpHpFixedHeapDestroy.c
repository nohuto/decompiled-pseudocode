/*
 * XREFs of RtlpHpFixedHeapDestroy @ 0x140356090
 * Callers:
 *     RtlDestroyHeap @ 0x140B3DD90 (RtlDestroyHeap.c)
 * Callees:
 *     RtlpHpVsContextCleanup @ 0x140354A48 (RtlpHpVsContextCleanup.c)
 */

void __fastcall RtlpHpFixedHeapDestroy(__int64 a1)
{
  RtlpHpVsContextCleanup((_WORD *)(a1 + 64));
}
