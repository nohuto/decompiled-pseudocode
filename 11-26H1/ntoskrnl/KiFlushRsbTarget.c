/*
 * XREFs of KiFlushRsbTarget @ 0x1405F2140
 * Callers:
 *     <none>
 * Callees:
 *     KiFlushCurrentRsb @ 0x14073D180 (KiFlushCurrentRsb.c)
 */

__int64 __fastcall KiFlushRsbTarget(int a1, int a2, int a3, int a4)
{
  return KiFlushCurrentRsb(a1, a2, a3, a4);
}
