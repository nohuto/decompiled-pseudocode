/*
 * XREFs of NtSetInformationThread @ 0x18015EFE0
 * Callers:
 *     RtlTryEnterCriticalSection @ 0x18000C670 (RtlTryEnterCriticalSection.c)
 *     RtlpAbFreeKernelEntry @ 0x180015690 (RtlpAbFreeKernelEntry.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x1800167D0 (TppCleanupGroupMemberCallbackProlog.c)
 *     RtlSleepConditionVariableSRW @ 0x180017BF0 (RtlSleepConditionVariableSRW.c)
 *     TppBarrierAdjust @ 0x180018390 (TppBarrierAdjust.c)
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     TppWorkerFindTask @ 0x1800278E0 (TppWorkerFindTask.c)
 *     RtlClearThreadWorkOnBehalfTicket @ 0x180028110 (RtlClearThreadWorkOnBehalfTicket.c)
 *     LdrSetDllDirectory @ 0x180028210 (LdrSetDllDirectory.c)
 *     TppWorkerThread @ 0x180028B50 (TppWorkerThread.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18002A7C0 (TppCallbackCheckThreadAfterCallback.c)
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x180031C30 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpxLookupFunctionTable @ 0x180035820 (RtlpxLookupFunctionTable.c)
 *     LdrpCallTlsInitializers @ 0x1800365C0 (LdrpCallTlsInitializers.c)
 *     RtlRegisterWait @ 0x180039430 (RtlRegisterWait.c)
 *     RtlpTpResumeImpersonation @ 0x1800397B8 (RtlpTpResumeImpersonation.c)
 *     LdrpReleaseDllPath @ 0x18003B980 (LdrpReleaseDllPath.c)
 *     TppWorkCallbackPrologRelease @ 0x18003E030 (TppWorkCallbackPrologRelease.c)
 *     TppAlpcpExecuteCallback @ 0x18003E8A0 (TppAlpcpExecuteCallback.c)
 *     RtlTryAcquireSRWLockExclusive @ 0x18005ED80 (RtlTryAcquireSRWLockExclusive.c)
 *     EtwpLogger @ 0x180066820 (EtwpLogger.c)
 *     RtlAbPostRelease @ 0x180067EA0 (RtlAbPostRelease.c)
 *     RtlTlsFree @ 0x1800732F0 (RtlTlsFree.c)
 *     LdrpThreadTokenSetImpersonationToken @ 0x18007E488 (LdrpThreadTokenSetImpersonationToken.c)
 *     RtlpTpTimerCallback @ 0x180086430 (RtlpTpTimerCallback.c)
 *     RtlQueueWorkItem @ 0x1800867E0 (RtlQueueWorkItem.c)
 *     RtlpTpWorkCallback @ 0x1800870E0 (RtlpTpWorkCallback.c)
 *     RtlpTpImpersonate @ 0x180087618 (RtlpTpImpersonate.c)
 *     RtlpTpRevertCapture @ 0x180087B90 (RtlpTpRevertCapture.c)
 *     TpWorkOnBehalfSetTicket @ 0x1800BCF80 (TpWorkOnBehalfSetTicket.c)
 *     RtlpTpWaitCallback @ 0x1800BDBE0 (RtlpTpWaitCallback.c)
 *     RtlSetThreadWorkOnBehalfTicket @ 0x1800BF6E0 (RtlSetThreadWorkOnBehalfTicket.c)
 *     RtlReleasePrivilege @ 0x1800D2590 (RtlReleasePrivilege.c)
 *     RtlAcquirePrivilege @ 0x1800D2720 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1800D2AF0 (RtlImpersonateSelfEx.c)
 *     TppCritSetThread @ 0x1800DF5D0 (TppCritSetThread.c)
 *     LdrpAcquireSchedulerSharedDataSlot @ 0x1800E2BE0 (LdrpAcquireSchedulerSharedDataSlot.c)
 *     TppCritResetThread @ 0x1800EB7A4 (TppCritResetThread.c)
 *     RtlSetThreadIsCritical @ 0x18010B630 (RtlSetThreadIsCritical.c)
 *     RtlWow64SetThreadContext @ 0x1801385A0 (RtlWow64SetThreadContext.c)
 *     RtlDisableThreadProfiling @ 0x180138DC0 (RtlDisableThreadProfiling.c)
 *     RtlEnableThreadProfiling @ 0x180138E30 (RtlEnableThreadProfiling.c)
 *     WerReportExceptionWorker @ 0x18013AB70 (WerReportExceptionWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength)
{
  NTSTATUS result; // eax

  result = 13;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
