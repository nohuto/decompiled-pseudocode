/*
 * XREFs of VerifierMmFreePagesFromMdl @ 0x140B908E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ViTargetAddToCounter @ 0x140B7B910 (ViTargetAddToCounter.c)
 */

__int64 __fastcall VerifierMmFreePagesFromMdl(__int64 a1)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(retaddr, 232LL, 0xF0u, -(__int64)*(unsigned int *)(a1 + 40));
  return guard_dispatch_icall_no_overrides(a1);
}
