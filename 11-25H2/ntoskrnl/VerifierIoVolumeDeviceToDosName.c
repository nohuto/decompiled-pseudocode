/*
 * XREFs of VerifierIoVolumeDeviceToDosName @ 0x140B821B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     CarReportRuleViolationFromNt @ 0x140B7D934 (CarReportRuleViolationFromNt.c)
 */

__int64 __fastcall VerifierIoVolumeDeviceToDosName(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r8
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( (MmVerifierData & 0x10) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
      CarReportRuleViolationFromNt(196, 229LL, CurrentIrql, 0LL, 0LL, 4u, retaddr);
  }
  return guard_dispatch_icall_no_overrides(a1);
}
