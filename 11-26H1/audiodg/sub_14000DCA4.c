/*
 * XREFs of sub_14000DCA4 @ 0x14000DCA4
 * Callers:
 *     sub_140047144 @ 0x140047144 (sub_140047144.c)
 *     sub_1400840C8 @ 0x1400840C8 (sub_1400840C8.c)
 * Callees:
 *     sub_14000DD74 @ 0x14000DD74 (sub_14000DD74.c)
 */

__int64 *__fastcall sub_14000DCA4(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 *result; // rax
  __int64 v9; // r10

  sub_14000DD74(a1);
  result = *(__int64 **)(a1 + 32);
  v9 = *result;
  result[2] = *a2;
  *(_QWORD *)(a1 + 32) = v9;
  *result = a4;
  result[1] = a3;
  ++*(_QWORD *)(a1 + 16);
  return result;
}
