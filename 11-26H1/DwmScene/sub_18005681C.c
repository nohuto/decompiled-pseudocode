/*
 * XREFs of sub_18005681C @ 0x18005681C
 * Callers:
 *     sub_180056274 @ 0x180056274 (sub_180056274.c)
 *     sub_180056560 @ 0x180056560 (sub_180056560.c)
 * Callees:
 *     sub_180056234 @ 0x180056234 (sub_180056234.c)
 *     sub_1800568F8 @ 0x1800568F8 (sub_1800568F8.c)
 */

__int64 __fastcall sub_18005681C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 i; // r9
  __int64 v6; // r8

  v4 = a1;
  for ( i = a2; v4 != i; v4 = v6 + 48 )
  {
    sub_1800568F8(a1, a3, v4, i);
    a3 += 48LL;
  }
  sub_180056234(a3, a3);
  return a3;
}
