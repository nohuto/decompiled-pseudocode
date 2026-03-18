/*
 * XREFs of VerifierMmFreeNonCachedMemory @ 0x140C3F680
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     VfTargetFreeContiguousMemory @ 0x140C29374 (VfTargetFreeContiguousMemory.c)
 */

__int64 __fastcall VerifierMmFreeNonCachedMemory(__int64 a1, __int64 a2)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  VfTargetFreeContiguousMemory(retaddr, a1);
  return guard_dispatch_icall_no_overrides(a1, a2);
}
