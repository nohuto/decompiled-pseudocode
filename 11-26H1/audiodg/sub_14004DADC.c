/*
 * XREFs of sub_14004DADC @ 0x14004DADC
 * Callers:
 *     sub_14003E4C0 @ 0x14003E4C0 (sub_14003E4C0.c)
 *     sub_14004F82C @ 0x14004F82C (sub_14004F82C.c)
 * Callees:
 *     sub_14004BED0 @ 0x14004BED0 (sub_14004BED0.c)
 */

void __fastcall __noreturn sub_14004DADC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  sub_14004BED0(
    a1,
    a2,
    (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
    a4,
    v4,
    retaddr,
    0x8000FFFF);
}
