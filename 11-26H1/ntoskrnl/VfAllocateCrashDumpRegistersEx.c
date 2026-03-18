/*
 * XREFs of VfAllocateCrashDumpRegistersEx @ 0x140C23870
 * Callers:
 *     <none>
 * Callees:
 *     VfDisableHalVerifier @ 0x1405332A4 (VfDisableHalVerifier.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VfAllocateCrashDumpRegistersEx(__int64 a1, __int64 a2)
{
  if ( KeGetCurrentIrql() == 15 )
    VfDisableHalVerifier();
  return guard_dispatch_icall_no_overrides(a1, a2);
}
