/*
 * XREFs of sub_140075F84 @ 0x140075F84
 * Callers:
 *     sub_140079AA0 @ 0x140079AA0 (sub_140079AA0.c)
 *     sub_140079B90 @ 0x140079B90 (sub_140079B90.c)
 * Callees:
 *     sub_1400125D4 @ 0x1400125D4 (sub_1400125D4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140075F84(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rsi

  v2 = *a1;
  sub_1400125D4(a2);
  return sub_1400B6010(v2);
}
