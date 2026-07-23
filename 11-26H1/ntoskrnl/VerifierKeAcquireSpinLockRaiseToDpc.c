/*
 * XREFs of VerifierKeAcquireSpinLockRaiseToDpc @ 0x140C4DA70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140C4CCE4 (ViKeIrqlLogAndTrimMemory.c)
 */

__int64 __fastcall VerifierKeAcquireSpinLockRaiseToDpc(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 result; // rax

  v2 = 0LL;
  v3 = a1;
  if ( (VfRuleClasses & 2) != 0 )
  {
    LOBYTE(a1) = 2;
    v2 = ViKeIrqlLogAndTrimMemory(a1, a2);
  }
  result = guard_dispatch_icall_no_overrides(v3, a2);
  if ( (VfRuleClasses & 2) != 0 )
  {
    if ( v2 )
      *(_WORD *)(v2 + 10) = KeGetPcr()->Prcb.Number;
  }
  return result;
}
