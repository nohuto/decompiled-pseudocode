/*
 * XREFs of KiFlushRsbTarget @ 0x1405F4B00
 * Callers:
 *     <none>
 * Callees:
 *     KiFlushCurrentRsb @ 0x140741D80 (KiFlushCurrentRsb.c)
 */

__int64 __fastcall KiFlushRsbTarget(int a1, int a2, int a3, int a4)
{
  return KiFlushCurrentRsb(a1, a2, a3, a4);
}
