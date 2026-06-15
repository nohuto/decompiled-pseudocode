/*
 * XREFs of sub_140045810 @ 0x140045810
 * Callers:
 *     sub_1400457B8 @ 0x1400457B8 (sub_1400457B8.c)
 *     sub_1400458C4 @ 0x1400458C4 (sub_1400458C4.c)
 *     sub_14004E9D4 @ 0x14004E9D4 (sub_14004E9D4.c)
 *     sub_140050D0C @ 0x140050D0C (sub_140050D0C.c)
 *     sub_1400517C0 @ 0x1400517C0 (sub_1400517C0.c)
 * Callees:
 *     sub_14004F7E4 @ 0x14004F7E4 (sub_14004F7E4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_140045810(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rcx
  int v4; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *a2;
  *a1 = 0LL;
  v4 = sub_1400B6010(v3);
  if ( v4 >= 0 )
    v4 = sub_1400B6010(0LL);
  if ( v4 < 0 )
    sub_14004F7E4(retaddr, 1942LL, "onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\com.h", (unsigned int)v4);
  return a1;
}
