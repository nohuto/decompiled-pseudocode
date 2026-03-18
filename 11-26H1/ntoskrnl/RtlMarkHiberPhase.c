/*
 * XREFs of RtlMarkHiberPhase @ 0x140624640
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140BFAE30 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x1404AFD60 (PoSetHiberRange.c)
 */

void RtlMarkHiberPhase()
{
  PoSetHiberRange(0LL, 0x10000u, XpressHashFunction, 0x600uLL, 0x73727058u);
  PoSetHiberRange(0LL, 0x10000u, XpressHighBitIndexTable, 0x100uLL, 0x73727058u);
}
