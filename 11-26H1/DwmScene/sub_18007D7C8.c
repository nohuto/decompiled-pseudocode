/*
 * XREFs of sub_18007D7C8 @ 0x18007D7C8
 * Callers:
 *     sub_18007D524 @ 0x18007D524 (sub_18007D524.c)
 * Callees:
 *     sub_18007ACE8 @ 0x18007ACE8 (sub_18007ACE8.c)
 *     sub_18007D884 @ 0x18007D884 (sub_18007D884.c)
 */

__int64 __fastcall sub_18007D7C8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r10
  __int64 v5; // r11

  v3 = a3;
  if ( a2 )
  {
    v4 = a1 - a3;
    do
    {
      sub_18007D884(a1, v3, v4 + v3);
      v3 += 40LL;
    }
    while ( v5 != 1 );
  }
  sub_18007ACE8(v3, v3);
  return v3;
}
