/*
 * XREFs of sub_18003EEE4 @ 0x18003EEE4
 * Callers:
 *     sub_18003E5C0 @ 0x18003E5C0 (sub_18003E5C0.c)
 *     sub_18003EA84 @ 0x18003EA84 (sub_18003EA84.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18003EEE4(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = sub_180011790(0x50uLL);
  return a1;
}
