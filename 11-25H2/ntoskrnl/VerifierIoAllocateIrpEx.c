/*
 * XREFs of VerifierIoAllocateIrpEx @ 0x140B7ADC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     CarReportRuleViolationFromNt @ 0x140B7D934 (CarReportRuleViolationFromNt.c)
 */

__int64 __fastcall VerifierIoAllocateIrpEx(__int64 a1, __int64 a2, char a3)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( a3 && (MmVerifierData & 8) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process == PsIdleProcess )
      CarReportRuleViolationFromNt(0xC4u, 0x10AuLL, 0LL, 0LL, 0LL, 3, retaddr);
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 )
      CarReportRuleViolationFromNt(0xC4u, 0x10BuLL, 0LL, 0LL, 0LL, 3, retaddr);
  }
  return guard_dispatch_icall_no_overrides(a1);
}
