/*
 * XREFs of PsTerminateProcess @ 0x14094A334
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x1406E94D0 (MiReAcquireCommitFailWorker.c)
 *     PspShutdownCsrProcess @ 0x1407F4F18 (PspShutdownCsrProcess.c)
 *     PsShutdownSystem @ 0x1407FFCB4 (PsShutdownSystem.c)
 *     PsCreateMinimalProcess @ 0x140801BC8 (PsCreateMinimalProcess.c)
 *     PsForceCrashForInvalidAccess @ 0x140802B70 (PsForceCrashForInvalidAccess.c)
 *     RtlpTerminateCurrentProcess @ 0x14080A53C (RtlpTerminateCurrentProcess.c)
 *     WheaTerminateProcess @ 0x14084E8F0 (WheaTerminateProcess.c)
 *     KiSchedulerApcTerminate @ 0x14094B0F0 (KiSchedulerApcTerminate.c)
 *     DbgkpCloseObject @ 0x1409BA900 (DbgkpCloseObject.c)
 *     PspCallProcessNotifyRoutines @ 0x1409FE474 (PspCallProcessNotifyRoutines.c)
 *     PspRemoveProcessFromJobChain @ 0x1409FEEF8 (PspRemoveProcessFromJobChain.c)
 *     PspProcessClose @ 0x140A930B0 (PspProcessClose.c)
 *     NtCreateUserProcess @ 0x140B7D6F0 (NtCreateUserProcess.c)
 *     ExpDebuggerWorker @ 0x140C1CD60 (ExpDebuggerWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     PspTerminateProcess @ 0x14094A8D8 (PspTerminateProcess.c)
 */

__int64 __fastcall PsTerminateProcess(struct _KPROCESS *a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v2; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = PspTerminateProcess(a1);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v2;
}
