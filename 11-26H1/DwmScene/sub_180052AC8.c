/*
 * XREFs of sub_180052AC8 @ 0x180052AC8
 * Callers:
 *     sub_180052968 @ 0x180052968 (sub_180052968.c)
 *     sub_1800C90E0 @ 0x1800C90E0 (sub_1800C90E0.c)
 *     sub_1800C9218 @ 0x1800C9218 (sub_1800C9218.c)
 * Callees:
 *     sub_180017A18 @ 0x180017A18 (sub_180017A18.c)
 */

char *__fastcall sub_180052AC8(void *a1, __int64 a2, char *a3)
{
  sub_180017A18(a1, a2, a3);
  return &a3[(a2 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFE0uLL];
}
