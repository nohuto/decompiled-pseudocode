/*
 * XREFs of sub_18007B1DC @ 0x18007B1DC
 * Callers:
 *     sub_18007AD40 @ 0x18007AD40 (sub_18007AD40.c)
 * Callees:
 *     sub_18007ACB0 @ 0x18007ACB0 (sub_18007ACB0.c)
 *     sub_18007B300 @ 0x18007B300 (sub_18007B300.c)
 */

__int64 __fastcall sub_18007B1DC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r10

  v4 = a1;
  if ( a1 != a2 )
  {
    do
    {
      sub_18007B300(a1, a3, v4);
      a3 += 56LL;
      v4 = v5 + 56;
    }
    while ( v4 != v6 );
  }
  sub_18007ACB0(a3, a3);
  return a3;
}
