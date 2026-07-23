/*
 * XREFs of ZwTerminateProcess @ 0x18015F3C0
 * Callers:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x180035D70 (RtlpAcquireSRWLockSharedContended.c)
 *     RtlpWaitOnCriticalSection @ 0x180068F40 (RtlpWaitOnCriticalSection.c)
 *     RtlUserThreadStart @ 0x18007DCC0 (RtlUserThreadStart.c)
 *     RtlExitUserProcess @ 0x18007DD80 (RtlExitUserProcess.c)
 *     RtlReportFatalFailure @ 0x180091238 (RtlReportFatalFailure.c)
 *     RtlAssert @ 0x1800913D0 (RtlAssert.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800BF760 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpLoadShimEngine @ 0x1800C3CD8 (LdrpLoadShimEngine.c)
 *     _LdrpInitialize @ 0x1800CC6B8 (_LdrpInitialize.c)
 *     LdrpInitializeThread @ 0x1800CCB30 (LdrpInitializeThread.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x18010B7E4 (WerpBreakIntoDebuggerIfPresent.c)
 *     LdrpInitializeShimDllDependencies @ 0x180118DCC (LdrpInitializeShimDllDependencies.c)
 *     TppTerminateProcess @ 0x18011F478 (TppTerminateProcess.c)
 *     __raise_securityfailure @ 0x180126728 (__raise_securityfailure.c)
 *     __report_gsfailure @ 0x180126750 (__report_gsfailure.c)
 *     RtlpProcessReflectionStartup @ 0x180139B00 (RtlpProcessReflectionStartup.c)
 *     UninitUser32Proc @ 0x18013A6A0 (UninitUser32Proc.c)
 *     RtlReportExceptionEx @ 0x18013A710 (RtlReportExceptionEx.c)
 *     LdrpFatalExceptionFilter @ 0x18015B5A0 (LdrpFatalExceptionFilter.c)
 *     LdrpGenericExceptionFilter @ 0x18015B628 (LdrpGenericExceptionFilter.c)
 *     LdrpCompleteProcessCloning @ 0x18015DCB8 (LdrpCompleteProcessCloning.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  NTSTATUS result; // eax

  result = 44;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
