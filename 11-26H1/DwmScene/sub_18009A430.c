/*
 * XREFs of sub_18009A430 @ 0x18009A430
 * Callers:
 *     sub_18009AE9C @ 0x18009AE9C (sub_18009AE9C.c)
 *     sub_18009AF7C @ 0x18009AF7C (sub_18009AF7C.c)
 * Callees:
 *     sub_18009A398 @ 0x18009A398 (sub_18009A398.c)
 */

char __fastcall sub_18009A430(__int64 a1)
{
  __int64 v2; // rcx

  sub_18009A398(a1, a1 + 32, (_QWORD *)(a1 + 208));
  return sub_18009A398(v2, a1 + 216, (_QWORD *)(a1 + 392));
}
