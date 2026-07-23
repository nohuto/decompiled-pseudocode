/*
 * XREFs of CmpMachineHiveLoadedWorkItem @ 0x1408572A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpMachineHiveCallbackFatalFilter @ 0x140857268 (CmpMachineHiveCallbackFatalFilter.c)
 */

__int64 __fastcall CmpMachineHiveLoadedWorkItem(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 result; // rax

  v2 = (_QWORD *)(a2 + 96);
  *(_QWORD *)(a2 + 96) = KeGetCurrentThread();
  result = guard_dispatch_icall_no_overrides(*(_QWORD *)(a2 + 88), a2);
  *v2 = 0LL;
  return result;
}
