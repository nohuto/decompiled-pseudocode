/*
 * XREFs of sub_18002A448 @ 0x18002A448
 * Callers:
 *     sub_18002AA30 @ 0x18002AA30 (sub_18002AA30.c)
 *     sub_18002AAA4 @ 0x18002AAA4 (sub_18002AAA4.c)
 *     sub_18002B3A4 @ 0x18002B3A4 (sub_18002B3A4.c)
 *     sub_18002B5E4 @ 0x18002B5E4 (sub_18002B5E4.c)
 *     sub_18002CD34 @ 0x18002CD34 (sub_18002CD34.c)
 *     sub_18002CDF4 @ 0x18002CDF4 (sub_18002CDF4.c)
 *     sub_18006F538 @ 0x18006F538 (sub_18006F538.c)
 *     sub_18006F5C4 @ 0x18006F5C4 (sub_18006F5C4.c)
 * Callees:
 *     sub_18002A8A0 @ 0x18002A8A0 (sub_18002A8A0.c)
 */

__int64 __fastcall sub_18002A448(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 136;
    do
    {
      sub_18002A8A0(v3, v3);
      v3 += 152LL;
      result = v3 - 136;
    }
    while ( v3 - 136 != a2 );
  }
  return result;
}
