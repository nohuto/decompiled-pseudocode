/*
 * XREFs of VerifierIoDisconnectInterrupt @ 0x140B91CE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall VerifierIoDisconnectInterrupt(__int64 a1)
{
  void *v1; // rbx

  v1 = 0LL;
  if ( (VfRuleClasses & 0x800) != 0 && ViCtxInitializedIsrStateBlocks )
    v1 = *(void **)(a1 + 48);
  guard_dispatch_icall_no_overrides(a1);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
