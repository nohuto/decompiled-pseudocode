/*
 * XREFs of sub_180093380 @ 0x180093380
 * Callers:
 *     sub_1800936BC @ 0x1800936BC (sub_1800936BC.c)
 * Callees:
 *     sub_1800902F8 @ 0x1800902F8 (sub_1800902F8.c)
 */

__int64 __fastcall sub_180093380(_QWORD *a1)
{
  _QWORD *v1; // rdx
  __int64 result; // rax

  v1 = (_QWORD *)a1[2];
  a1[2] = *v1;
  sub_1800902F8((__int64)a1, v1);
  result = *a1;
  --*(_QWORD *)(*a1 + 8LL);
  return result;
}
