/*
 * XREFs of VerifierIoConnectInterrupt @ 0x140C46910
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     ViCtxAllocateIsrContext @ 0x140C46C98 (ViCtxAllocateIsrContext.c)
 */

__int64 __fastcall VerifierIoConnectInterrupt(__int64 a1, __int64 (__fastcall *a2)(), __int64 a3)
{
  void *IsrContext; // rbx
  __int64 (__fastcall *v4)(); // rdi
  int v7; // edi

  IsrContext = 0LL;
  v4 = a2;
  if ( (VfRuleClasses & 0x800) != 0 && ViCtxInitializedIsrStateBlocks )
  {
    IsrContext = (void *)ViCtxAllocateIsrContext(a2, a3, 0LL);
    if ( !IsrContext )
      return 3221225626LL;
    v4 = ViCtxIsr;
  }
  v7 = guard_dispatch_icall_no_overrides(a1, (__int64)v4);
  if ( v7 < 0 )
  {
    if ( IsrContext )
      ExFreePoolWithTag(IsrContext, 0);
  }
  return (unsigned int)v7;
}
