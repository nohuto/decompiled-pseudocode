/*
 * XREFs of sub_14008CB08 @ 0x14008CB08
 * Callers:
 *     sub_14008B568 @ 0x14008B568 (sub_14008B568.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14008CB08(_QWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9

  result = 0xFFFFFFFFFFFFFFFLL;
  v3 = (__int64)(a1[2] - *a1) >> 4;
  v4 = v3 >> 1;
  if ( v3 <= 0xFFFFFFFFFFFFFFFLL - (v3 >> 1) )
  {
    result = v4 + v3;
    if ( v4 + v3 < a2 )
      return a2;
  }
  return result;
}
