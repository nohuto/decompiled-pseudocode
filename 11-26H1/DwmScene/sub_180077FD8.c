/*
 * XREFs of sub_180077FD8 @ 0x180077FD8
 * Callers:
 *     sub_1800764E0 @ 0x1800764E0 (sub_1800764E0.c)
 *     sub_180076580 @ 0x180076580 (sub_180076580.c)
 *     sub_1800778D0 @ 0x1800778D0 (sub_1800778D0.c)
 *     sub_18007A430 @ 0x18007A430 (sub_18007A430.c)
 *     sub_180087E68 @ 0x180087E68 (sub_180087E68.c)
 *     sub_1800885D8 @ 0x1800885D8 (sub_1800885D8.c)
 *     sub_1800887D8 @ 0x1800887D8 (sub_1800887D8.c)
 *     sub_1800DD7BA @ 0x1800DD7BA (sub_1800DD7BA.c)
 *     sub_1800DDF37 @ 0x1800DDF37 (sub_1800DDF37.c)
 *     sub_1800E4CA1 @ 0x1800E4CA1 (sub_1800E4CA1.c)
 *     sub_1800E4CE9 @ 0x1800E4CE9 (sub_1800E4CE9.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_180077FD8(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    result = sub_18000E26C(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
