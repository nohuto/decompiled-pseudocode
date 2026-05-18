/*
 * XREFs of sub_180056860 @ 0x180056860
 * Callers:
 *     sub_180056560 @ 0x180056560 (sub_180056560.c)
 *     sub_1800587B0 @ 0x1800587B0 (sub_1800587B0.c)
 * Callees:
 *     sub_180056234 @ 0x180056234 (sub_180056234.c)
 *     sub_1800568CC @ 0x1800568CC (sub_1800568CC.c)
 */

__int64 __fastcall sub_180056860(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 i; // rbx
  __int64 v4; // r8

  v2 = a2;
  for ( i = a1; v2; v2 = v4 - 1 )
  {
    sub_1800568CC(a1, i, v2);
    i += 48LL;
  }
  sub_180056234(i, i);
  return i;
}
