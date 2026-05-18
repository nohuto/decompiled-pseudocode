/*
 * XREFs of sub_1800963E0 @ 0x1800963E0
 * Callers:
 *     sub_1800975F0 @ 0x1800975F0 (sub_1800975F0.c)
 * Callees:
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800963E0(__int64 a1, __int64 a2)
{
  unsigned int *v3; // rdi
  _QWORD *v5; // r14
  unsigned int i; // ebp
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rbx

  v3 = (unsigned int *)(a1 + 908);
  v5 = (_QWORD *)(a1 + 8);
  for ( i = 0; i < 0xF; ++i )
  {
    if ( *(_BYTE *)(a1 + 1088) || v5[30] != *v5 || *(v3 - 30) != *(v3 - 45) || (result = *v3, v3[15] != (_DWORD)result) )
    {
      v8 = 16LL * i;
      v9 = v8 + a1;
      sub_180013540((__int64 *)(v8 + a1 + 248), (_QWORD *)(v8 + a1 + 8));
      *(v3 - 30) = *(v3 - 45);
      v3[15] = *v3;
      result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 144LL))(a2, v9 + 248, i);
    }
    ++v3;
    v5 += 2;
  }
  *(_BYTE *)(a1 + 1088) = 0;
  return result;
}
