/*
 * XREFs of sub_18008A56C @ 0x18008A56C
 * Callers:
 *     sub_18008A438 @ 0x18008A438 (sub_18008A438.c)
 *     sub_18008BB10 @ 0x18008BB10 (sub_18008BB10.c)
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_18008A484 @ 0x18008A484 (sub_18008A484.c)
 */

__int64 *__fastcall sub_18008A56C(__int64 *lpMem, __int64 a2)
{
  sub_18008A484(lpMem, a2);
  sub_18000C444(lpMem);
  return lpMem;
}
