/*
 * XREFs of sub_180095690 @ 0x180095690
 * Callers:
 *     sub_1800975F0 @ 0x1800975F0 (sub_1800975F0.c)
 * Callees:
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180095690(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdi
  __int64 *v5; // rdx
  __int64 result; // rax

  v2 = (__int64 *)(a1 + 24);
  v5 = (__int64 *)(a1 + 8);
  if ( *(_BYTE *)(a1 + 56) || (result = *v5, *v2 != *v5) )
  {
    sub_180013540(v2, v5);
    result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 120LL))(a2, v2);
  }
  *(_BYTE *)(a1 + 56) = 0;
  return result;
}
