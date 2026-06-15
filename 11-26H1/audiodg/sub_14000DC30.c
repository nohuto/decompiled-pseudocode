/*
 * XREFs of sub_14000DC30 @ 0x14000DC30
 * Callers:
 *     sub_14000C448 @ 0x14000C448 (sub_14000C448.c)
 *     sub_14000C544 @ 0x14000C544 (sub_14000C544.c)
 *     sub_14000D7A4 @ 0x14000D7A4 (sub_14000D7A4.c)
 *     sub_14000DB20 @ 0x14000DB20 (sub_14000DB20.c)
 *     sub_14006EE30 @ 0x14006EE30 (sub_14006EE30.c)
 * Callees:
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

__int64 __fastcall sub_14000DC30(unsigned int a1, __int64 a2)
{
  if ( a1 && a1 != 80 )
  {
    if ( a1 != 12 )
    {
      if ( a1 != 22 && a1 != 34 )
        sub_14004639C(2147500037LL, a2);
      sub_14004639C(2147942487LL, a2);
    }
    sub_14004639C(2147942414LL, a2);
  }
  return a1;
}
