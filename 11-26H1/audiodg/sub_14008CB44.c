/*
 * XREFs of sub_14008CB44 @ 0x14008CB44
 * Callers:
 *     sub_14008B568 @ 0x14008B568 (sub_14008B568.c)
 *     sub_140092F58 @ 0x140092F58 (sub_140092F58.c)
 * Callees:
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 *     sub_14008B52C @ 0x14008B52C (sub_14008B52C.c)
 */

__int64 __fastcall sub_14008CB44(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
  {
    sub_14008B52C(v6, a1[1]);
    result = sub_1400453E4(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  *a1 = a2;
  a1[1] = a2 + 16 * a3;
  a1[2] = a2 + 16 * a4;
  return result;
}
