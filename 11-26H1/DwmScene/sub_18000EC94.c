/*
 * XREFs of sub_18000EC94 @ 0x18000EC94
 * Callers:
 *     sub_180010F68 @ 0x180010F68 (sub_180010F68.c)
 * Callees:
 *     sub_18000DC90 @ 0x18000DC90 (sub_18000DC90.c)
 */

void __fastcall __noreturn sub_18000EC94(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  sub_18000DC90(
    a1,
    3562LL,
    (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
    a4,
    v4,
    retaddr,
    0x8000FFFF);
}
