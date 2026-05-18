/*
 * XREFs of sub_18003EBD4 @ 0x18003EBD4
 * Callers:
 *     sub_18003EA84 @ 0x18003EA84 (sub_18003EA84.c)
 * Callees:
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 */

_QWORD *__fastcall sub_18003EBD4(__int64 a1, _QWORD *a2, __int64 a3, __int64 *a4)
{
  _QWORD *result; // rax

  result = sub_180013440(a2, *a4);
  a2[4] = 0LL;
  a2[5] = 0LL;
  return result;
}
