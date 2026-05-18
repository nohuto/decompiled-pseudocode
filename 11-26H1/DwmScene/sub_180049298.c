/*
 * XREFs of sub_180049298 @ 0x180049298
 * Callers:
 *     sub_1800490A8 @ 0x1800490A8 (sub_1800490A8.c)
 *     sub_1800494AC @ 0x1800494AC (sub_1800494AC.c)
 * Callees:
 *     sub_180049070 @ 0x180049070 (sub_180049070.c)
 *     sub_1800492D8 @ 0x1800492D8 (sub_1800492D8.c)
 */

__int64 __fastcall sub_180049298(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 i; // rbx
  __int64 v4; // r8

  v2 = a2;
  for ( i = a1; v2; v2 = v4 - 1 )
  {
    sub_1800492D8(a1, i, v2);
    i += 88LL;
  }
  sub_180049070(i, i);
  return i;
}
