/*
 * XREFs of sub_140004ADC @ 0x140004ADC
 * Callers:
 *     sub_140004108 @ 0x140004108 (sub_140004108.c)
 * Callees:
 *     sub_140004B3C @ 0x140004B3C (sub_140004B3C.c)
 */

__int64 *__fastcall sub_140004ADC(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 *result; // rax
  __int64 v9; // r10

  sub_140004B3C(a1);
  result = *(__int64 **)(a1 + 32);
  v9 = *result;
  result[2] = *a2;
  *(_QWORD *)(a1 + 32) = v9;
  *result = a4;
  result[1] = a3;
  ++*(_QWORD *)(a1 + 16);
  return result;
}
