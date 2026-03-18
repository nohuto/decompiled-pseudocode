/*
 * XREFs of PsTerminateProcess @ 0x14095690C
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x1406E4820 (MiReAcquireCommitFailWorker.c)
 *     PspShutdownCsrProcess @ 0x1407EF3B8 (PspShutdownCsrProcess.c)
 *     PsShutdownSystem @ 0x1407FA284 (PsShutdownSystem.c)
 *     PsCreateMinimalProcess @ 0x1407FC198 (PsCreateMinimalProcess.c)
 *     PsForceCrashForInvalidAccess @ 0x1407FD140 (PsForceCrashForInvalidAccess.c)
 *     RtlpTerminateCurrentProcess @ 0x140804A9C (RtlpTerminateCurrentProcess.c)
 *     WheaTerminateProcess @ 0x140848620 (WheaTerminateProcess.c)
 *     KiSchedulerApcTerminate @ 0x1409576C0 (KiSchedulerApcTerminate.c)
 *     PspRemoveProcessFromJobChain @ 0x140959638 (PspRemoveProcessFromJobChain.c)
 *     PspCallProcessNotifyRoutines @ 0x140A43714 (PspCallProcessNotifyRoutines.c)
 *     PspProcessClose @ 0x140A8E3E0 (PspProcessClose.c)
 *     DbgkpCloseObject @ 0x140AFF4E0 (DbgkpCloseObject.c)
 *     NtCreateUserProcess @ 0x140B77FE0 (NtCreateUserProcess.c)
 *     ExpDebuggerWorker @ 0x140C16D60 (ExpDebuggerWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     PspTerminateProcess @ 0x140956EB0 (PspTerminateProcess.c)
 */

__int64 __fastcall PsTerminateProcess(struct _KPROCESS *a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = PspTerminateProcess(a1);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v3, v4);
  return v2;
}
