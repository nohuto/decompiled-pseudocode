/*
 * XREFs of PopDiscardRange @ 0x140C0BDA8
 * Callers:
 *     PopSetRange @ 0x1404A9650 (PopSetRange.c)
 *     PopAllocateHiberContext @ 0x140B75B48 (PopAllocateHiberContext.c)
 * Callees:
 *     RtlSetBits @ 0x14035AAB0 (RtlSetBits.c)
 */

void __fastcall PopDiscardRange(_RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlSetBits(a1 + 3, a2, a3);
}
