/*
 * XREFs of sub_180017D60 @ 0x180017D60
 * Callers:
 *     sub_180017A8C @ 0x180017A8C (sub_180017A8C.c)
 *     sub_18007AFEC @ 0x18007AFEC (sub_18007AFEC.c)
 *     sub_1800852C0 @ 0x1800852C0 (sub_1800852C0.c)
 * Callees:
 *     sub_180017A18 @ 0x180017A18 (sub_180017A18.c)
 */

char *__fastcall sub_180017D60(void *a1, __int64 a2, char *a3)
{
  sub_180017A18(a1, a2, a3);
  return &a3[8 * ((a2 - (__int64)a1) >> 3)];
}
