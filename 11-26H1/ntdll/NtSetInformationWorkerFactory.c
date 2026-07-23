/*
 * XREFs of NtSetInformationWorkerFactory @ 0x180162470
 * Callers:
 *     TppCleanupGroupMemberCallbackProlog @ 0x1800167D0 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppWorkerThread @ 0x180028B50 (TppWorkerThread.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x18002A1C8 (TppAdjustRunningThreadGoalWithLock.c)
 *     TppCallbackEpilog @ 0x18002A2B0 (TppCallbackEpilog.c)
 *     TppInitializeTimer @ 0x180038F40 (TppInitializeTimer.c)
 *     TpAllocTimer @ 0x180039180 (TpAllocTimer.c)
 *     TpAllocWait @ 0x1800399E0 (TpAllocWait.c)
 *     TpCallbackMayRunLong @ 0x18003F020 (TpCallbackMayRunLong.c)
 *     TpSetPoolThreadCpuSets @ 0x1800855C0 (TpSetPoolThreadCpuSets.c)
 *     TpAdjustBindingCount @ 0x1800859C0 (TpAdjustBindingCount.c)
 *     TpAllocPoolInternal @ 0x180085A1C (TpAllocPoolInternal.c)
 *     TpSetPoolStackInformation @ 0x180086040 (TpSetPoolStackInformation.c)
 *     TpCallbackIndependent @ 0x1800BD4B0 (TpCallbackIndependent.c)
 *     TppDestroyTimer @ 0x1800D7474 (TppDestroyTimer.c)
 *     TpTrimPools @ 0x1800E78E0 (TpTrimPools.c)
 *     TpSetPoolMaxThreads @ 0x1800EC1D0 (TpSetPoolMaxThreads.c)
 *     TpSetPoolMinThreads @ 0x1800FD500 (TpSetPoolMinThreads.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x1800FEE00 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x1800FFC10 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpSetPoolThreadBasePriority @ 0x180104E80 (TpSetPoolThreadBasePriority.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetInformationWorkerFactory(
        HANDLE WorkerFactoryHandle,
        WORKERFACTORYINFOCLASS WorkerFactoryInformationClass,
        PVOID WorkerFactoryInformation,
        ULONG WorkerFactoryInformationLength)
{
  NTSTATUS result; // eax

  result = 434;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
