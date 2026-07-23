/*
 * XREFs of VerifierIoVolumeDeviceToDosName @ 0x140C36630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 */

__int64 __fastcall VerifierIoVolumeDeviceToDosName(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // r8
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( (MmVerifierData & 0x10) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
      CarReportRuleViolationFromNt(196, 229LL, CurrentIrql, 0LL, 0LL, 4u, retaddr);
  }
  return guard_dispatch_icall_no_overrides(a1, a2);
}
