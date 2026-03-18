/*
 * XREFs of PopDiscardRange @ 0x140C05B98
 * Callers:
 *     PopSetRange @ 0x1404AFFB4 (PopSetRange.c)
 *     PopAllocateHiberContext @ 0x140B71364 (PopAllocateHiberContext.c)
 * Callees:
 *     RtlSetBits @ 0x140358D10 (RtlSetBits.c)
 */

void __fastcall PopDiscardRange(RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlSetBits(a1 + 3, a2, a3);
}
