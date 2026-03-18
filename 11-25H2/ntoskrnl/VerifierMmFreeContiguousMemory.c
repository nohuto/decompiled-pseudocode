/*
 * XREFs of VerifierMmFreeContiguousMemory @ 0x140B907D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     VfTargetFreeContiguousMemory @ 0x140B7B6EC (VfTargetFreeContiguousMemory.c)
 */

__int64 __fastcall VerifierMmFreeContiguousMemory(__int64 a1)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  VfTargetFreeContiguousMemory(retaddr, a1);
  return guard_dispatch_icall_no_overrides(a1);
}
