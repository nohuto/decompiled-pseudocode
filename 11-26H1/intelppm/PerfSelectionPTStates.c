/*
 * XREFs of PerfSelectionPTStates @ 0x14000EA20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PerfSelectionPTStates(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64); // rax
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp+8h]

  v3 = *(_QWORD *)(a1 + 56);
  v5 = *(_QWORD *)(v3 + 56) + 32LL * a2;
  v8 = a2;
  v6 = *(__int64 (__fastcall **)(__int64))(v3 + 32);
  if ( v6 )
    HIDWORD(v8) = v6(a3);
  *(_QWORD *)a3 = v8;
  result = *(unsigned int *)(v5 + 16);
  *(_DWORD *)(a3 + 20) = result;
  return result;
}
