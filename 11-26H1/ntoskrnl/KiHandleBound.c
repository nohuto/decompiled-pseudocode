/*
 * XREFs of KiHandleBound @ 0x1405E7AB0
 * Callers:
 *     KiBoundFault @ 0x1407393C0 (KiBoundFault.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14029AFF0 (ExReferenceCallBackBlock.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExDereferenceCallBackBlock @ 0x140424890 (ExDereferenceCallBackBlock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiHandleBound(__int64 a1, signed __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _EX_RUNDOWN_REF *v6; // rdi

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  v6 = ExReferenceCallBackBlock(&KiBoundsCallback, a2);
  if ( v6 )
  {
    v3 = guard_dispatch_icall_no_overrides(v5, v4);
    ExDereferenceCallBackBlock(&KiBoundsCallback, v6);
  }
  KeLeaveCriticalRegion();
  return v3;
}
