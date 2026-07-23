/*
 * XREFs of TppRaiseInvalidParameter @ 0x180088448
 * Callers:
 *     TpWaitForWait @ 0x1800153F0 (TpWaitForWait.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x1800167D0 (TppCleanupGroupMemberCallbackProlog.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x18002DD10 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     TppPoolpReferenceGlobalPool @ 0x1800389D0 (TppPoolpReferenceGlobalPool.c)
 *     TpAllocWork @ 0x180038DB0 (TpAllocWork.c)
 *     TpAllocTimer @ 0x180039180 (TpAllocTimer.c)
 *     TpAllocWait @ 0x1800399E0 (TpAllocWait.c)
 *     TpSetWaitEx @ 0x180039E60 (TpSetWaitEx.c)
 *     TpCallbackMayRunLong @ 0x18003F020 (TpCallbackMayRunLong.c)
 *     TpReleaseWork @ 0x1800850B0 (TpReleaseWork.c)
 *     TpWaitForWork @ 0x1800851A0 (TpWaitForWork.c)
 *     TppAllocAlpcCompletion @ 0x180085234 (TppAllocAlpcCompletion.c)
 *     TpAllocPool @ 0x1800854F0 (TpAllocPool.c)
 *     TpAllocIoCompletion @ 0x1800856E0 (TpAllocIoCompletion.c)
 *     TpBindFileToDirect @ 0x180085924 (TpBindFileToDirect.c)
 *     TpDereferenceGlobalPool @ 0x180087770 (TpDereferenceGlobalPool.c)
 *     TpTimerOutstandingCallbackCount @ 0x180087DF0 (TpTimerOutstandingCallbackCount.c)
 *     TppCancelWait @ 0x180087E90 (TppCancelWait.c)
 *     TpAlpcRegisterCompletionList @ 0x180088030 (TpAlpcRegisterCompletionList.c)
 *     TpReleaseTimer @ 0x1800882C0 (TpReleaseTimer.c)
 *     TpPostWork @ 0x180088400 (TpPostWork.c)
 *     TpWaitForTimer @ 0x180088570 (TpWaitForTimer.c)
 *     TppTimerQueueExpiration @ 0x180088790 (TppTimerQueueExpiration.c)
 *     TpSetTimerEx @ 0x180089470 (TpSetTimerEx.c)
 *     TpIsTimerSet @ 0x180089C30 (TpIsTimerSet.c)
 *     TpReleaseWait @ 0x180090840 (TpReleaseWait.c)
 *     TpCallbackIndependent @ 0x1800BD4B0 (TpCallbackIndependent.c)
 *     TpAlpcUnregisterCompletionList @ 0x1800C6EF0 (TpAlpcUnregisterCompletionList.c)
 *     TppJobpValidateJob @ 0x1800C704C (TppJobpValidateJob.c)
 *     TppAlpcpValidateAlpc @ 0x1800C712C (TppAlpcpValidateAlpc.c)
 *     TppIopValidateIo @ 0x1800C7260 (TppIopValidateIo.c)
 *     TppCleanupGroupMemberRelease @ 0x1800C7300 (TppCleanupGroupMemberRelease.c)
 *     TpReleasePool @ 0x1800C8D80 (TpReleasePool.c)
 *     RtlpHpGCTimerEnable @ 0x1800CC558 (RtlpHpGCTimerEnable.c)
 *     TpStartAsyncIoOperation @ 0x1800D60E0 (TpStartAsyncIoOperation.c)
 *     TpSimpleTryPost @ 0x1800D7DF0 (TpSimpleTryPost.c)
 *     TpWaitOutstandingCallbackCount @ 0x1800D9C9C (TpWaitOutstandingCallbackCount.c)
 *     TpCancelAsyncIoOperation @ 0x1800DDAF0 (TpCancelAsyncIoOperation.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x1800E6BB0 (TpCallbackSendPendingAlpcMessage.c)
 *     TpCallbackUnloadDllOnCompletion @ 0x1800E8CF0 (TpCallbackUnloadDllOnCompletion.c)
 *     TpDisassociateCallback @ 0x1800E9090 (TpDisassociateCallback.c)
 *     TpReleaseCleanupGroupMembers @ 0x1800E9210 (TpReleaseCleanupGroupMembers.c)
 *     TpSetPoolMaxThreads @ 0x1800EC1D0 (TpSetPoolMaxThreads.c)
 *     TpWaitForIoCompletion @ 0x1800EC860 (TpWaitForIoCompletion.c)
 *     TpAllocCleanupGroup @ 0x1800EC9F0 (TpAllocCleanupGroup.c)
 *     TpAllocJobNotification @ 0x1800FAF50 (TpAllocJobNotification.c)
 *     TpSetPoolMinThreads @ 0x1800FD500 (TpSetPoolMinThreads.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x1800FEE00 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpReleaseCleanupGroup @ 0x1800FEEC0 (TpReleaseCleanupGroup.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x1800FFC10 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpCallbackSetEventOnCompletion @ 0x180104E40 (TpCallbackSetEventOnCompletion.c)
 *     TpCallbackLeaveCriticalSectionOnCompletion @ 0x18010CE10 (TpCallbackLeaveCriticalSectionOnCompletion.c)
 *     TpCallbackDetectedUnrecoverableError @ 0x180159140 (TpCallbackDetectedUnrecoverableError.c)
 *     TpCallbackReleaseMutexOnCompletion @ 0x180159170 (TpCallbackReleaseMutexOnCompletion.c)
 *     TpCallbackReleaseSemaphoreOnCompletion @ 0x1801591B0 (TpCallbackReleaseSemaphoreOnCompletion.c)
 * Callees:
 *     RtlRaiseException @ 0x18002B180 (RtlRaiseException.c)
 *     RtlpLogSetLastWin32ErrorEvent @ 0x1801208A8 (RtlpLogSetLastWin32ErrorEvent.c)
 *     TppReportExceptionFilter @ 0x1801592AC (TppReportExceptionFilter.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

void __fastcall TppRaiseInvalidParameter()
{
  struct _TEB *v0; // rax
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  memset_thunk_772440563353939046(&ExceptionRecord.ExceptionFlags, 0, 0x94uLL);
  ExceptionRecord.ExceptionCode = -1073741811;
  v0 = NtCurrentTeb();
  if ( g_dwLastErrorToBreakOn == 87 )
    __debugbreak();
  if ( v0->LastErrorValue != 87 )
  {
    v0->LastErrorValue = 87;
    if ( g_isErrorOriginProviderEnabled )
      RtlpLogSetLastWin32ErrorEvent(87LL);
  }
  RtlRaiseException(&ExceptionRecord);
}
