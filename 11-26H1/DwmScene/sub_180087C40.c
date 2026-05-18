/*
 * XREFs of sub_180087C40 @ 0x180087C40
 * Callers:
 *     sub_1800878C0 @ 0x1800878C0 (sub_1800878C0.c)
 * Callees:
 *     sub_180017A18 @ 0x180017A18 (sub_180017A18.c)
 */

char *__fastcall sub_180087C40(void *a1, __int64 a2, char *a3)
{
  sub_180017A18(a1, a2, a3);
  return &a3[a2 - (_QWORD)a1];
}
