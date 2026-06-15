/*
 * XREFs of sub_14005A3AC @ 0x14005A3AC
 * Callers:
 *     sub_14005A234 @ 0x14005A234 (sub_14005A234.c)
 * Callees:
 *     sub_14005A1FC @ 0x14005A1FC (sub_14005A1FC.c)
 */

char *__fastcall sub_14005A3AC(void *a1, __int64 a2, char *a3)
{
  sub_14005A1FC(a1, a2, a3);
  return &a3[(a2 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFF0uLL];
}
