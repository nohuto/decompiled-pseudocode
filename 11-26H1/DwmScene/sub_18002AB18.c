/*
 * XREFs of sub_18002AB18 @ 0x18002AB18
 * Callers:
 *     sub_18002A494 @ 0x18002A494 (sub_18002A494.c)
 * Callees:
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 */

_QWORD *__fastcall sub_18002AB18(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  _QWORD *result; // rax

  result = sub_1800181BC((_QWORD *)a2, a3);
  *(double *)(a2 + 32) = (double)*a4;
  return result;
}
