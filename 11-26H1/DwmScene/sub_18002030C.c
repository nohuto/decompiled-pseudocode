/*
 * XREFs of sub_18002030C @ 0x18002030C
 * Callers:
 *     sub_180020074 @ 0x180020074 (sub_180020074.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18002030C(_QWORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, __int64, _QWORD, __int64, __int64, __int64, int); // rbx
  _QWORD *v13; // rax
  char v14; // [rsp+60h] [rbp+8h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  if ( (_BYTE)result )
  {
    v11 = *a1;
    v12 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64, __int64, int))(*(_QWORD *)*a1 + 56LL);
    v13 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)a1[2] + 8LL))(a1[2], &v14);
    return v12(v11, a5, *v13, a6, a4, a2, a3);
  }
  return result;
}
