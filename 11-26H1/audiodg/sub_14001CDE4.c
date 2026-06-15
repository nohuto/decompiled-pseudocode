/*
 * XREFs of sub_14001CDE4 @ 0x14001CDE4
 * Callers:
 *     sub_14001CCAC @ 0x14001CCAC (sub_14001CCAC.c)
 *     sub_14001D1F4 @ 0x14001D1F4 (sub_14001D1F4.c)
 *     sub_14001E21C @ 0x14001E21C (sub_14001E21C.c)
 *     sub_14004F8D0 @ 0x14004F8D0 (sub_14004F8D0.c)
 *     sub_140078898 @ 0x140078898 (sub_140078898.c)
 * Callees:
 *     sub_14001CE18 @ 0x14001CE18 (sub_14001CE18.c)
 */

__int64 __fastcall sub_14001CDE4(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax

  result = sub_14001CE18(0, 0, 0, a4);
  if ( (int)result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
