/*
 * XREFs of VerifierMmMapLockedPages @ 0x140B90AD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ViTargetAddToCounter @ 0x140B7B910 (ViTargetAddToCounter.c)
 */

__int64 __fastcall VerifierMmMapLockedPages(__int64 a1)
{
  __int64 v2; // rbx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = guard_dispatch_icall_no_overrides(a1);
  if ( v2 && (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(retaddr, 200LL, 0xD0u, *(unsigned int *)(a1 + 40));
  return v2;
}
