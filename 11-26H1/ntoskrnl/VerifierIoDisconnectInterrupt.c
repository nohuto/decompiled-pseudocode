/*
 * XREFs of VerifierIoDisconnectInterrupt @ 0x140C46B00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall VerifierIoDisconnectInterrupt(__int64 a1, __int64 a2)
{
  void *v2; // rbx

  v2 = 0LL;
  if ( (VfRuleClasses & 0x800) != 0 && ViCtxInitializedIsrStateBlocks )
    v2 = *(void **)(a1 + 48);
  guard_dispatch_icall_no_overrides(a1, a2);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
