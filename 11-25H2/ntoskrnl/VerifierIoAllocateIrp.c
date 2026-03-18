/*
 * XREFs of VerifierIoAllocateIrp @ 0x140B7ACA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     CarReportRuleViolationFromNt @ 0x140B7D934 (CarReportRuleViolationFromNt.c)
 *     VfFaultsInjectResourceFailure @ 0x140B86588 (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierIoAllocateIrp(__int64 a1, char a2)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( a2 && (MmVerifierData & 8) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process == PsIdleProcess )
      CarReportRuleViolationFromNt(0xC4u, 0x10AuLL, 0LL, 0LL, 0LL, 3, retaddr);
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 )
      CarReportRuleViolationFromNt(0xC4u, 0x10BuLL, 0LL, 0LL, 0LL, 3, retaddr);
  }
  if ( (VfRuleClasses & 4) != 0 && (unsigned int)VfFaultsInjectResourceFailure(0LL)
    || (VfRuleClasses & 0x40000) != 0
    && ViFnAutoFailInject
    && (unsigned __int8)guard_dispatch_icall_no_overrides("IoAllocateIrp") )
  {
    return 0LL;
  }
  else
  {
    return guard_dispatch_icall_no_overrides(0LL);
  }
}
