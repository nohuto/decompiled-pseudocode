/*
 * XREFs of VerifierIoConnectInterrupt @ 0x140B91B00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     ViCtxAllocateIsrContext @ 0x140B91E78 (ViCtxAllocateIsrContext.c)
 */

__int64 __fastcall VerifierIoConnectInterrupt(__int64 a1, __int64 a2, __int64 a3)
{
  void *IsrContext; // rbx
  int v6; // edi

  IsrContext = 0LL;
  if ( (VfRuleClasses & 0x800) != 0 )
  {
    if ( ViCtxInitializedIsrStateBlocks )
    {
      IsrContext = (void *)ViCtxAllocateIsrContext(a2, a3, 0LL);
      if ( !IsrContext )
        return 3221225626LL;
    }
  }
  v6 = guard_dispatch_icall_no_overrides(a1);
  if ( v6 < 0 )
  {
    if ( IsrContext )
      ExFreePoolWithTag(IsrContext, 0);
  }
  return (unsigned int)v6;
}
