/*
 * XREFs of sub_18003B63C @ 0x18003B63C
 * Callers:
 *     sub_18003B678 @ 0x18003B678 (sub_18003B678.c)
 *     sub_18003C58C @ 0x18003C58C (sub_18003C58C.c)
 * Callees:
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_18003D718 @ 0x18003D718 (sub_18003D718.c)
 */

_QWORD *__fastcall sub_18003B63C(__int64 a1, _QWORD *a2)
{
  sub_18003D718(a1);
  sub_180012A94(a1 + 128, a2);
  return a2;
}
