/*
 * XREFs of TppRaiseInvalidParameter @ 0x180067FF8
 * Callers:
 *     TpWaitForWait @ 0x18002A2F0 (TpWaitForWait.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x18002B6D0 (TppCleanupGroupMemberCallbackProlog.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x1800437A0 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     TppPoolpReferenceGlobalPool @ 0x18004E450 (TppPoolpReferenceGlobalPool.c)
 *     TpAllocWork @ 0x18004E830 (TpAllocWork.c)
 *     TpAllocTimer @ 0x18004EC00 (TpAllocTimer.c)
 *     TpAllocWait @ 0x18004F460 (TpAllocWait.c)
 *     TpSetWaitEx @ 0x18004F8E0 (TpSetWaitEx.c)
 *     TpCallbackMayRunLong @ 0x180054AA0 (TpCallbackMayRunLong.c)
 *     TpReleaseWork @ 0x180064C60 (TpReleaseWork.c)
 *     TpWaitForWork @ 0x180064D50 (TpWaitForWork.c)
 *     TppAllocAlpcCompletion @ 0x180064DE4 (TppAllocAlpcCompletion.c)
 *     TpAllocPool @ 0x1800650A0 (TpAllocPool.c)
 *     TpAllocIoCompletion @ 0x180065290 (TpAllocIoCompletion.c)
 *     TpBindFileToDirect @ 0x1800654D4 (TpBindFileToDirect.c)
 *     TpDereferenceGlobalPool @ 0x180067320 (TpDereferenceGlobalPool.c)
 *     TpTimerOutstandingCallbackCount @ 0x1800679A0 (TpTimerOutstandingCallbackCount.c)
 *     TppCancelWait @ 0x180067A40 (TppCancelWait.c)
 *     TpAlpcRegisterCompletionList @ 0x180067BE0 (TpAlpcRegisterCompletionList.c)
 *     TpReleaseTimer @ 0x180067E70 (TpReleaseTimer.c)
 *     TpPostWork @ 0x180067FB0 (TpPostWork.c)
 *     TpWaitForTimer @ 0x180068120 (TpWaitForTimer.c)
 *     TppTimerQueueExpiration @ 0x180068340 (TppTimerQueueExpiration.c)
 *     TpSetTimerEx @ 0x180069020 (TpSetTimerEx.c)
 *     TpIsTimerSet @ 0x1800697E0 (TpIsTimerSet.c)
 *     TpReleaseWait @ 0x1800703F0 (TpReleaseWait.c)
 *     TpCallbackIndependent @ 0x1800BFD20 (TpCallbackIndependent.c)
 *     TpAlpcUnregisterCompletionList @ 0x1800C9770 (TpAlpcUnregisterCompletionList.c)
 *     TppJobpValidateJob @ 0x1800C98CC (TppJobpValidateJob.c)
 *     TppAlpcpValidateAlpc @ 0x1800C99AC (TppAlpcpValidateAlpc.c)
 *     TppIopValidateIo @ 0x1800C9AE0 (TppIopValidateIo.c)
 *     TppCleanupGroupMemberRelease @ 0x1800C9B80 (TppCleanupGroupMemberRelease.c)
 *     TpReleasePool @ 0x1800CB610 (TpReleasePool.c)
 *     RtlpHpGCTimerEnable @ 0x1800CEDE8 (RtlpHpGCTimerEnable.c)
 *     TpStartAsyncIoOperation @ 0x1800D9120 (TpStartAsyncIoOperation.c)
 *     TpSimpleTryPost @ 0x1800DAE30 (TpSimpleTryPost.c)
 *     TpWaitOutstandingCallbackCount @ 0x1800DCD2C (TpWaitOutstandingCallbackCount.c)
 *     TpCancelAsyncIoOperation @ 0x1800E0250 (TpCancelAsyncIoOperation.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x1800E8150 (TpCallbackSendPendingAlpcMessage.c)
 *     TpCallbackUnloadDllOnCompletion @ 0x1800E9AE0 (TpCallbackUnloadDllOnCompletion.c)
 *     TpDisassociateCallback @ 0x1800E9E80 (TpDisassociateCallback.c)
 *     TpReleaseCleanupGroupMembers @ 0x1800EA000 (TpReleaseCleanupGroupMembers.c)
 *     TpSetPoolMaxThreads @ 0x1800ECDE0 (TpSetPoolMaxThreads.c)
 *     TpWaitForIoCompletion @ 0x1800ED3C0 (TpWaitForIoCompletion.c)
 *     TpAllocCleanupGroup @ 0x1800ED550 (TpAllocCleanupGroup.c)
 *     TpAllocJobNotification @ 0x1800FB800 (TpAllocJobNotification.c)
 *     TpSetPoolMinThreads @ 0x1800FDDB0 (TpSetPoolMinThreads.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x1800FF6B0 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpReleaseCleanupGroup @ 0x1800FF770 (TpReleaseCleanupGroup.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x1801004C0 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpCallbackSetEventOnCompletion @ 0x1801055D0 (TpCallbackSetEventOnCompletion.c)
 *     TpCallbackLeaveCriticalSectionOnCompletion @ 0x18010D2C0 (TpCallbackLeaveCriticalSectionOnCompletion.c)
 *     TpCallbackDetectedUnrecoverableError @ 0x180159270 (TpCallbackDetectedUnrecoverableError.c)
 *     TpCallbackReleaseMutexOnCompletion @ 0x1801592A0 (TpCallbackReleaseMutexOnCompletion.c)
 *     TpCallbackReleaseSemaphoreOnCompletion @ 0x1801592E0 (TpCallbackReleaseSemaphoreOnCompletion.c)
 * Callees:
 *     RtlRaiseException @ 0x180040C10 (RtlRaiseException.c)
 *     RtlpLogSetLastWin32ErrorEvent @ 0x180120AF8 (RtlpLogSetLastWin32ErrorEvent.c)
 *     TppReportExceptionFilter @ 0x1801593DC (TppReportExceptionFilter.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

void TppRaiseInvalidParameter()
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
