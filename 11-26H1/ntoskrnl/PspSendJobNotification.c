/*
 * XREFs of PspSendJobNotification @ 0x1404C9CC0
 * Callers:
 *     PsReportProcessMemoryLimitViolation @ 0x14077E448 (PsReportProcessMemoryLimitViolation.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1407FD820 (PspEnforceLimitsJobPostCallback.c)
 *     PspIncrementJobChainProcessCounts @ 0x1407FE7A4 (PspIncrementJobChainProcessCounts.c)
 *     PspSendSiloTerminationNotification @ 0x1407FECF8 (PspSendSiloTerminationNotification.c)
 *     PspRemoveProcessFromJobChain @ 0x1409FEEF8 (PspRemoveProcessFromJobChain.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x140A05C20 (PspChangeJobMemoryUsageByProcess.c)
 *     PspValidateJobAssignmentProcessLimits @ 0x140AD39F4 (PspValidateJobAssignmentProcessLimits.c)
 *     PspSendProcessNotificationToJobChain @ 0x140AE4DDC (PspSendProcessNotificationToJobChain.c)
 *     PspAssociateCompletionPortCallback @ 0x140B09E10 (PspAssociateCompletionPortCallback.c)
 * Callees:
 *     IoSetIoCompletion @ 0x140A85470 (IoSetIoCompletion.c)
 */

__int64 __fastcall PspSendJobNotification(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 result; // rax

  result = IoSetIoCompletion(*(_QWORD *)(a1 + 552), *(_QWORD *)(a1 + 560), a3, 0, a2, a4);
  if ( (int)result >= 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 568));
  return result;
}
