/*
 * XREFs of sub_180049250 @ 0x180049250
 * Callers:
 *     sub_180048F34 @ 0x180048F34 (sub_180048F34.c)
 * Callees:
 *     sub_180049070 @ 0x180049070 (sub_180049070.c)
 *     sub_180049318 @ 0x180049318 (sub_180049318.c)
 */

__int64 __fastcall sub_180049250(__int64 a1, __int64 a2, __int64 a3)
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
      sub_180049318(a1, v3, v4 + v3);
      v3 += 88LL;
    }
    while ( v5 != 1 );
  }
  sub_180049070(v3, v3);
  return v3;
}
