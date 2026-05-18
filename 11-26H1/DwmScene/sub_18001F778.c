/*
 * XREFs of sub_18001F778 @ 0x18001F778
 * Callers:
 *     sub_180052968 @ 0x180052968 (sub_180052968.c)
 *     sub_180055FB0 @ 0x180055FB0 (sub_180055FB0.c)
 *     sub_1800563BC @ 0x1800563BC (sub_1800563BC.c)
 *     sub_1800D1ECC @ 0x1800D1ECC (sub_1800D1ECC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001F778(_QWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9

  result = 0x7FFFFFFFFFFFFFFLL;
  v3 = (__int64)(a1[2] - *a1) >> 5;
  v4 = v3 >> 1;
  if ( v3 <= 0x7FFFFFFFFFFFFFFLL - (v3 >> 1) )
  {
    result = v4 + v3;
    if ( v4 + v3 < a2 )
      return a2;
  }
  return result;
}
