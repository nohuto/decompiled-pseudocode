/*
 * XREFs of NtSetInformationThread @ 0x18015F0E0
 * Callers:
 *     RtlTryAcquireSRWLockExclusive @ 0x180013650 (RtlTryAcquireSRWLockExclusive.c)
 *     RtlTryEnterCriticalSection @ 0x1800215A0 (RtlTryEnterCriticalSection.c)
 *     RtlpAbFreeKernelEntry @ 0x18002A590 (RtlpAbFreeKernelEntry.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x18002B6D0 (TppCleanupGroupMemberCallbackProlog.c)
 *     RtlSleepConditionVariableSRW @ 0x18002CAF0 (RtlSleepConditionVariableSRW.c)
 *     TppBarrierAdjust @ 0x18002D290 (TppBarrierAdjust.c)
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     TppWorkerFindTask @ 0x18003D370 (TppWorkerFindTask.c)
 *     RtlClearThreadWorkOnBehalfTicket @ 0x18003DBA0 (RtlClearThreadWorkOnBehalfTicket.c)
 *     LdrSetDllDirectory @ 0x18003DCA0 (LdrSetDllDirectory.c)
 *     TppWorkerThread @ 0x18003E5E0 (TppWorkerThread.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x180040250 (TppCallbackCheckThreadAfterCallback.c)
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x1800476B0 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlpxLookupFunctionTable @ 0x18004B2A0 (RtlpxLookupFunctionTable.c)
 *     LdrpCallTlsInitializers @ 0x18004C040 (LdrpCallTlsInitializers.c)
 *     RtlRegisterWait @ 0x18004EEB0 (RtlRegisterWait.c)
 *     RtlpTpResumeImpersonation @ 0x18004F238 (RtlpTpResumeImpersonation.c)
 *     LdrpReleaseDllPath @ 0x180051400 (LdrpReleaseDllPath.c)
 *     TppWorkCallbackPrologRelease @ 0x180053AB0 (TppWorkCallbackPrologRelease.c)
 *     TppAlpcpExecuteCallback @ 0x180054320 (TppAlpcpExecuteCallback.c)
 *     RtlpTpTimerCallback @ 0x180065FE0 (RtlpTpTimerCallback.c)
 *     RtlQueueWorkItem @ 0x180066390 (RtlQueueWorkItem.c)
 *     RtlpTpWorkCallback @ 0x180066C90 (RtlpTpWorkCallback.c)
 *     RtlpTpImpersonate @ 0x1800671C8 (RtlpTpImpersonate.c)
 *     RtlpTpRevertCapture @ 0x180067740 (RtlpTpRevertCapture.c)
 *     EtwpLogger @ 0x180078000 (EtwpLogger.c)
 *     RtlAbPostRelease @ 0x180079680 (RtlAbPostRelease.c)
 *     LdrpThreadTokenSetImpersonationToken @ 0x180087118 (LdrpThreadTokenSetImpersonationToken.c)
 *     RtlTlsFree @ 0x180094120 (RtlTlsFree.c)
 *     TpWorkOnBehalfSetTicket @ 0x1800BF7F0 (TpWorkOnBehalfSetTicket.c)
 *     RtlpTpWaitCallback @ 0x1800C0450 (RtlpTpWaitCallback.c)
 *     RtlSetThreadWorkOnBehalfTicket @ 0x1800C1A30 (RtlSetThreadWorkOnBehalfTicket.c)
 *     RtlReleasePrivilege @ 0x1800D26C0 (RtlReleasePrivilege.c)
 *     RtlAcquirePrivilege @ 0x1800D2850 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1800D2C20 (RtlImpersonateSelfEx.c)
 *     TppCritSetThread @ 0x1800E1D30 (TppCritSetThread.c)
 *     LdrpAcquireSchedulerSharedDataSlot @ 0x1800E4D30 (LdrpAcquireSchedulerSharedDataSlot.c)
 *     TppCritResetThread @ 0x1800EC5D4 (TppCritResetThread.c)
 *     RtlSetThreadIsCritical @ 0x18010BAE0 (RtlSetThreadIsCritical.c)
 *     RtlWow64SetThreadContext @ 0x180138830 (RtlWow64SetThreadContext.c)
 *     RtlDisableThreadProfiling @ 0x180139050 (RtlDisableThreadProfiling.c)
 *     RtlEnableThreadProfiling @ 0x1801390C0 (RtlEnableThreadProfiling.c)
 *     WerReportExceptionWorker @ 0x18013AE00 (WerReportExceptionWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NtSetInformationThread()
{
  __int64 result; // rax

  result = 13LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
