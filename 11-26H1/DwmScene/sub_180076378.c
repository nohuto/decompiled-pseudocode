/*
 * XREFs of sub_180076378 @ 0x180076378
 * Callers:
 *     sub_180075FB8 @ 0x180075FB8 (sub_180075FB8.c)
 * Callees:
 *     sub_180017A18 @ 0x180017A18 (sub_180017A18.c)
 */

char *__fastcall sub_180076378(void *a1, __int64 a2, char *a3)
{
  sub_180017A18(a1, a2, a3);
  return &a3[(a2 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFC0uLL];
}
