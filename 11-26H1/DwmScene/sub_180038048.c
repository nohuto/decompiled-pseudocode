/*
 * XREFs of sub_180038048 @ 0x180038048
 * Callers:
 *     sub_1800317FC @ 0x1800317FC (sub_1800317FC.c)
 *     sub_180031884 @ 0x180031884 (sub_180031884.c)
 *     sub_180054C14 @ 0x180054C14 (sub_180054C14.c)
 *     sub_180054CD4 @ 0x180054CD4 (sub_180054CD4.c)
 *     sub_1800645C0 @ 0x1800645C0 (sub_1800645C0.c)
 *     sub_1800DA67A @ 0x1800DA67A (sub_1800DA67A.c)
 *     sub_1800DC2EF @ 0x1800DC2EF (sub_1800DC2EF.c)
 *     sub_1800DD1EC @ 0x1800DD1EC (sub_1800DD1EC.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_18002DD68 @ 0x18002DD68 (sub_18002DD68.c)
 */

__int64 __fastcall sub_180038048(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_18002DD68((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_18000E26C(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
