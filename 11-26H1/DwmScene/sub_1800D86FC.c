/*
 * XREFs of sub_1800D86FC @ 0x1800D86FC
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

void __fastcall __noreturn sub_1800D86FC(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdi
  __int64 v3; // rdi
  void (__fastcall *v4)(__int64, _QWORD, __int64, const char *); // rbx
  __int64 v5; // rax

  v2 = *(__int64 **)(a2 + 80);
  if ( *v2 )
  {
    v3 = *v2;
    v4 = *(void (__fastcall **)(__int64, _QWORD, __int64, const char *))(*(_QWORD *)v3 + 24LL);
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 184) + 8LL))(*(_QWORD *)(a2 + 184));
    v4(v3, 0LL, v5, "2.7.0.2");
  }
  throw;
}
