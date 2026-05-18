/*
 * XREFs of sub_18007D154 @ 0x18007D154
 * Callers:
 *     sub_18007AD40 @ 0x18007AD40 (sub_18007AD40.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_18007ACB0 @ 0x18007ACB0 (sub_18007ACB0.c)
 */

__int64 __fastcall sub_18007D154(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    sub_18007ACB0((__int64)v6, *(_QWORD *)(a1 + 8));
    sub_18000E26C(*(void **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 56 * a3;
  result = a2 + 56 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
