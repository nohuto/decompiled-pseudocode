/*
 * XREFs of sub_14008B9B8 @ 0x14008B9B8
 * Callers:
 *     sub_14008B568 @ 0x14008B568 (sub_14008B568.c)
 *     sub_140092F58 @ 0x140092F58 (sub_140092F58.c)
 *     sub_1400B3FEC @ 0x1400B3FEC (sub_1400B3FEC.c)
 * Callees:
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 *     sub_14008B52C @ 0x14008B52C (sub_14008B52C.c)
 */

__int64 __fastcall sub_14008B9B8(__int64 *a1)
{
  __int64 result; // rax

  if ( a1[1] )
  {
    sub_14008B52C(a1[3], a1[4]);
    return sub_1400453E4(a1[1], 16 * a1[2]);
  }
  return result;
}
