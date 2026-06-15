/*
 * XREFs of sub_14004BAC0 @ 0x14004BAC0
 * Callers:
 *     sub_14004BA60 @ 0x14004BA60 (sub_14004BA60.c)
 * Callees:
 *     sub_14004E2C8 @ 0x14004E2C8 (sub_14004E2C8.c)
 *     sub_14004F778 @ 0x14004F778 (sub_14004F778.c)
 */

__int64 __fastcall sub_14004BAC0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( a3 != 4 )
    return sub_14004E2C8(
             retaddr,
             925LL,
             "onecore\\internal\\sdk\\inc\\wil\\resource.h",
             2147549183LL,
             "Inconsistent state data size in WNF callback");
  v4 = *(_QWORD *)(a1 + 128);
  if ( !v4 )
    sub_14004F778();
  return sub_1400B6010(v4);
}
