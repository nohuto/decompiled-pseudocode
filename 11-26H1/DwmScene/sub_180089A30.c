/*
 * XREFs of sub_180089A30 @ 0x180089A30
 * Callers:
 *     <none>
 * Callees:
 *     sub_180088358 @ 0x180088358 (sub_180088358.c)
 */

__m128 *__fastcall sub_180089A30(__int64 a1, __m128 *a2, __m128 *a3)
{
  __int64 v3; // rcx
  __m128 v6; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v6 = *a3;
  sub_180088358(v3, a2, &v6);
  return a2;
}
