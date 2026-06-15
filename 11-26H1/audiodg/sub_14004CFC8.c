/*
 * XREFs of sub_14004CFC8 @ 0x14004CFC8
 * Callers:
 *     sub_14004E9D4 @ 0x14004E9D4 (sub_14004E9D4.c)
 *     sub_140050D0C @ 0x140050D0C (sub_140050D0C.c)
 * Callees:
 *     sub_14001FC40 @ 0x14001FC40 (sub_14001FC40.c)
 *     sub_1400257E4 @ 0x1400257E4 (sub_1400257E4.c)
 *     sub_14004F940 @ 0x14004F940 (sub_14004F940.c)
 */

__int64 *__fastcall sub_14004CFC8(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rbp
  char v7; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 != a2 )
  {
    v4 = *a1;
    v5 = *a2;
    if ( *a1 )
    {
      sub_1400257E4((__int64)&v7);
      sub_14004F940(v4);
      sub_14001FC40((__int64)&v7);
    }
    *a1 = v5;
    *a2 = 0LL;
  }
  return a1;
}
