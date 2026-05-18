/*
 * XREFs of sub_180029634 @ 0x180029634
 * Callers:
 *     sub_1800294F4 @ 0x1800294F4 (sub_1800294F4.c)
 *     sub_180076054 @ 0x180076054 (sub_180076054.c)
 *     sub_18007FA94 @ 0x18007FA94 (sub_18007FA94.c)
 *     sub_18008CC50 @ 0x18008CC50 (sub_18008CC50.c)
 *     sub_1800C2850 @ 0x1800C2850 (sub_1800C2850.c)
 * Callees:
 *     sub_180017A18 @ 0x180017A18 (sub_180017A18.c)
 */

char *__fastcall sub_180029634(void *a1, __int64 a2, char *a3)
{
  sub_180017A18(a1, a2, a3);
  return &a3[(a2 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFF0uLL];
}
