/*
 * XREFs of PspSendJobNotification @ 0x1404D0290
 * Callers:
 *     PsReportProcessMemoryLimitViolation @ 0x14077B808 (PsReportProcessMemoryLimitViolation.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1407F7D20 (PspEnforceLimitsJobPostCallback.c)
 *     PspIncrementJobChainProcessCounts @ 0x1407F8CA4 (PspIncrementJobChainProcessCounts.c)
 *     PspSendSiloTerminationNotification @ 0x1407F91F8 (PspSendSiloTerminationNotification.c)
 *     PspSendProcessNotificationToJobChain @ 0x140958A58 (PspSendProcessNotificationToJobChain.c)
 *     PspRemoveProcessFromJobChain @ 0x140959638 (PspRemoveProcessFromJobChain.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x140960360 (PspChangeJobMemoryUsageByProcess.c)
 *     PspValidateJobAssignmentProcessLimits @ 0x140AD6CE4 (PspValidateJobAssignmentProcessLimits.c)
 *     PspAssociateCompletionPortCallback @ 0x140B07CE0 (PspAssociateCompletionPortCallback.c)
 * Callees:
 *     IoSetIoCompletion @ 0x140A7F600 (IoSetIoCompletion.c)
 */

__int64 __fastcall PspSendJobNotification(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 result; // rax

  result = IoSetIoCompletion(*(_QWORD *)(a1 + 552), *(_QWORD *)(a1 + 560), a3, 0, a2, a4);
  if ( (int)result >= 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 568));
  return result;
}
