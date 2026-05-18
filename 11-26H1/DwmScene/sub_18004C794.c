/*
 * XREFs of sub_18004C794 @ 0x18004C794
 * Callers:
 *     sub_18004C408 @ 0x18004C408 (sub_18004C408.c)
 *     sub_180075850 @ 0x180075850 (sub_180075850.c)
 * Callees:
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 */

_QWORD *__fastcall sub_18004C794(__int64 a1, _QWORD *a2, __int64 a3, __int64 *a4)
{
  _QWORD *result; // rax

  result = sub_1800181BC(a2, *a4);
  a2[4] = 0LL;
  a2[5] = 0LL;
  return result;
}
