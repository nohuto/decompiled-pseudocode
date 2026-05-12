/*
 * XREFs of sub_140107454 @ 0x140107454
 * Callers:
 *     sub_1400F9A20 @ 0x1400F9A20 (sub_1400F9A20.c)
 *     sub_1400FD098 @ 0x1400FD098 (sub_1400FD098.c)
 *     sub_140103A50 @ 0x140103A50 (sub_140103A50.c)
 * Callees:
 *     sub_140118560 @ 0x140118560 (sub_140118560.c)
 */

__int64 __fastcall sub_140107454(__int64 a1, __int64 a2, __int64 a3)
{
  *(_BYTE *)(a2 + 141) = -87;
  return sub_140118560(a1, a2, a3);
}
