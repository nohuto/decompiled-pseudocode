/*
 * XREFs of VfAllocateCrashDumpRegistersEx @ 0x140B75930
 * Callers:
 *     <none>
 * Callees:
 *     VfDisableHalVerifier @ 0x140604C58 (VfDisableHalVerifier.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VfAllocateCrashDumpRegistersEx(__int64 a1)
{
  if ( KeGetCurrentIrql() == 15 )
    VfDisableHalVerifier();
  return guard_dispatch_icall_no_overrides(a1);
}
