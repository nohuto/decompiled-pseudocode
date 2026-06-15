/*
 * XREFs of sub_140050638 @ 0x140050638
 * Callers:
 *     sub_140050610 @ 0x140050610 (sub_140050610.c)
 * Callees:
 *     sub_14004E2C8 @ 0x14004E2C8 (sub_14004E2C8.c)
 *     sub_14004F778 @ 0x14004F778 (sub_14004F778.c)
 */

__int64 __fastcall sub_140050638(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rcx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( a3 != 4096 )
    return sub_14004E2C8(retaddr, 925LL, (__int64)"onecore\\internal\\sdk\\inc\\wil\\resource.h", 2147549183LL);
  v4 = *(_QWORD *)(a1 + 128);
  if ( !v4 )
    sub_14004F778();
  return sub_1400B6010(v4);
}
