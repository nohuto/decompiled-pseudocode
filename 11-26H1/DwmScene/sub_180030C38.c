/*
 * XREFs of sub_180030C38 @ 0x180030C38
 * Callers:
 *     sub_18003587C @ 0x18003587C (sub_18003587C.c)
 *     sub_180036040 @ 0x180036040 (sub_180036040.c)
 * Callees:
 *     sub_18002DC64 @ 0x18002DC64 (sub_18002DC64.c)
 */

__int64 *__fastcall sub_180030C38(__int64 *a1, __int64 a2)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  sub_18002DC64(a1, (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 4, (_QWORD **)a2, (_QWORD *)(a2 + 8));
  return a1;
}
