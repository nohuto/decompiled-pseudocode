/*
 * XREFs of sub_180025AA4 @ 0x180025AA4
 * Callers:
 *     sub_1800D90EE @ 0x1800D90EE (sub_1800D90EE.c)
 *     sub_1800D940A @ 0x1800D940A (sub_1800D940A.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180024D50 @ 0x180024D50 (sub_180024D50.c)
 */

__int64 __fastcall sub_180025AA4(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_180024D50((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_18000E26C(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFC0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
