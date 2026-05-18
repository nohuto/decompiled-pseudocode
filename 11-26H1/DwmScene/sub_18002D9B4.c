/*
 * XREFs of sub_18002D9B4 @ 0x18002D9B4
 * Callers:
 *     sub_18002FE28 @ 0x18002FE28 (sub_18002FE28.c)
 * Callees:
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_18000D81C @ 0x18000D81C (sub_18000D81C.c)
 *     sub_1800D5364 @ 0x1800D5364 (sub_1800D5364.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall sub_18002D9B4(__int64 a1)
{
  memset((void *)a1, 0, 0x128uLL);
  sub_1800D5364(a1);
  *(_BYTE *)(a1 + 8) = 1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return sub_18000D81C(a1 + 56, 24LL, 10LL, (__int64 (__fastcall *)(__int64))unknown_libname_6);
}
