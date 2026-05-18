/*
 * XREFs of sub_18004F4C4 @ 0x18004F4C4
 * Callers:
 *     sub_1800887D8 @ 0x1800887D8 (sub_1800887D8.c)
 *     sub_1800889A0 @ 0x1800889A0 (sub_1800889A0.c)
 *     sub_180088E28 @ 0x180088E28 (sub_180088E28.c)
 * Callees:
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_180050218 @ 0x180050218 (sub_180050218.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_18004F4C4(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax

  *a1 = &unk_180105B00;
  std::ios::ios(a1 + 18);
  std::istream::istream(a1, a1 + 2, 0LL, 0LL);
  *(_QWORD *)((char *)a1 + *(int *)(*a1 + 4LL)) = &std::istringstream::`vftable';
  *(_DWORD *)((char *)a1 + *(int *)(*a1 + 4LL) - 4) = *(_DWORD *)(*a1 + 4LL) - 144;
  std::streambuf::streambuf(a1 + 2);
  a1[2] = &std::stringbuf::`vftable';
  v4 = sub_1800148EC(a2);
  sub_180050218(a1 + 2, v4, *(_QWORD *)(a2 + 16), 2LL);
  return a1;
}
