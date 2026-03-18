/*
 * XREFs of sub_1409EF598 @ 0x1409EF598
 * Callers:
 *     sub_14088063C @ 0x14088063C (sub_14088063C.c)
 * Callees:
 *     sub_1409EECF0 @ 0x1409EECF0 (sub_1409EECF0.c)
 *     sub_1409EF9A4 @ 0x1409EF9A4 (sub_1409EF9A4.c)
 */

__int64 __fastcall sub_1409EF598(__int64 a1, __int64 a2, _QWORD *a3, int *a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  result = sub_1409EECF0(a1 + 136, a2, 16LL, &v7, a4);
  if ( (int)result >= 0 && a3 )
  {
    result = sub_1409EF9A4(v7);
    if ( (int)result >= 0 )
      *a3 = v6;
  }
  return result;
}
