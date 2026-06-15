/*
 * XREFs of sub_140011248 @ 0x140011248
 * Callers:
 *     sub_140011A18 @ 0x140011A18 (sub_140011A18.c)
 *     sub_140011EE8 @ 0x140011EE8 (sub_140011EE8.c)
 * Callees:
 *     sub_1400112A8 @ 0x1400112A8 (sub_1400112A8.c)
 */

__int64 *__fastcall sub_140011248(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 *result; // rax
  __int64 v9; // r10

  sub_1400112A8();
  result = *(__int64 **)(a1 + 32);
  v9 = *result;
  result[2] = *a2;
  *(_QWORD *)(a1 + 32) = v9;
  *result = a4;
  result[1] = a3;
  ++*(_QWORD *)(a1 + 16);
  return result;
}
