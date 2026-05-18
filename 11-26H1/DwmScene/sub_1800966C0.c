/*
 * XREFs of sub_1800966C0 @ 0x1800966C0
 * Callers:
 *     sub_1800975F0 @ 0x1800975F0 (sub_1800975F0.c)
 * Callees:
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800966C0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 68)
    || *(_QWORD *)(a1 + 24) != *(_QWORD *)(a1 + 8)
    || (result = *(unsigned int *)(a1 + 56), *(_DWORD *)(a1 + 60) != (_DWORD)result) )
  {
    sub_180013540((__int64 *)(a1 + 24), (_QWORD *)(a1 + 8));
    *(_DWORD *)(a1 + 60) = *(_DWORD *)(a1 + 56);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 160LL))(a2, a1 + 24);
  }
  *(_BYTE *)(a1 + 68) = 0;
  return result;
}
