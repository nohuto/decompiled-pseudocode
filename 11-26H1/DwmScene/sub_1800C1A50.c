/*
 * XREFs of sub_1800C1A50 @ 0x1800C1A50
 * Callers:
 *     sub_1800C1D80 @ 0x1800C1D80 (sub_1800C1D80.c)
 *     sub_1800C4100 @ 0x1800C4100 (sub_1800C4100.c)
 *     sub_1800C57C0 @ 0x1800C57C0 (sub_1800C57C0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800BF284 @ 0x1800BF284 (sub_1800BF284.c)
 */

_QWORD *__fastcall sub_1800C1A50(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  sub_1800BF284(a1, a2);
  v4 = *(_QWORD *)(v3 + 8);
  if ( v4 )
    sub_180010EC8(v4);
  return a1;
}
