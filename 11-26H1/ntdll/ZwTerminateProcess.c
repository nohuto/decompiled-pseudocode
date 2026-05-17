/*
 * XREFs of ZwTerminateProcess @ 0x18015F4C0
 * Callers:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x18004B7F0 (RtlpAcquireSRWLockSharedContended.c)
 *     RtlReportFatalFailure @ 0x180070DE8 (RtlReportFatalFailure.c)
 *     RtlAssert @ 0x180070F80 (RtlAssert.c)
 *     RtlpWaitOnCriticalSection @ 0x18007A720 (RtlpWaitOnCriticalSection.c)
 *     RtlUserThreadStart @ 0x180086920 (RtlUserThreadStart.c)
 *     RtlExitUserProcess @ 0x1800869E0 (RtlExitUserProcess.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800C1AB0 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpLoadShimEngine @ 0x1800C6518 (LdrpLoadShimEngine.c)
 *     _LdrpInitialize @ 0x1800CEF48 (_LdrpInitialize.c)
 *     LdrpInitializeThread @ 0x1800CF3C0 (LdrpInitializeThread.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x18010BC94 (WerpBreakIntoDebuggerIfPresent.c)
 *     LdrpInitializeShimDllDependencies @ 0x18011901C (LdrpInitializeShimDllDependencies.c)
 *     TppTerminateProcess @ 0x18011F6C8 (TppTerminateProcess.c)
 *     __raise_securityfailure @ 0x1801269B8 (__raise_securityfailure.c)
 *     __report_gsfailure @ 0x1801269E0 (__report_gsfailure.c)
 *     RtlpProcessReflectionStartup @ 0x180139D90 (RtlpProcessReflectionStartup.c)
 *     UninitUser32Proc @ 0x18013A930 (UninitUser32Proc.c)
 *     RtlReportExceptionEx @ 0x18013A9A0 (RtlReportExceptionEx.c)
 *     LdrpFatalExceptionFilter @ 0x18015B6E0 (LdrpFatalExceptionFilter.c)
 *     LdrpGenericExceptionFilter @ 0x18015B768 (LdrpGenericExceptionFilter.c)
 *     LdrpCompleteProcessCloning @ 0x18015DDF8 (LdrpCompleteProcessCloning.c)
 * Callees:
 *     <none>
 */

__int64 ZwTerminateProcess()
{
  __int64 result; // rax

  result = 44LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
