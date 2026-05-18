/*
 * XREFs of sub_180097A5C @ 0x180097A5C
 * Callers:
 *     sub_1800978E8 @ 0x1800978E8 (sub_1800978E8.c)
 * Callees:
 *     sub_18002DD2C @ 0x18002DD2C (sub_18002DD2C.c)
 *     sub_180097AA0 @ 0x180097AA0 (sub_180097AA0.c)
 */

__int64 __fastcall sub_180097A5C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r10

  v4 = a1;
  if ( a1 != a2 )
  {
    do
    {
      sub_180097AA0(a1, a3, v4);
      a3 += 56LL;
      v4 = v5 + 56;
    }
    while ( v4 != v6 );
  }
  sub_18002DD2C(a3, a3);
  return a3;
}
