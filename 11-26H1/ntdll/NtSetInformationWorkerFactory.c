/*
 * XREFs of NtSetInformationWorkerFactory @ 0x180162570
 * Callers:
 *     TppCleanupGroupMemberCallbackProlog @ 0x18002B6D0 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppWorkerThread @ 0x18003E5E0 (TppWorkerThread.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x18003FC58 (TppAdjustRunningThreadGoalWithLock.c)
 *     TppCallbackEpilog @ 0x18003FD40 (TppCallbackEpilog.c)
 *     TppInitializeTimer @ 0x18004E9C0 (TppInitializeTimer.c)
 *     TpAllocTimer @ 0x18004EC00 (TpAllocTimer.c)
 *     TpAllocWait @ 0x18004F460 (TpAllocWait.c)
 *     TpCallbackMayRunLong @ 0x180054AA0 (TpCallbackMayRunLong.c)
 *     TpSetPoolThreadCpuSets @ 0x180065170 (TpSetPoolThreadCpuSets.c)
 *     TpAdjustBindingCount @ 0x180065570 (TpAdjustBindingCount.c)
 *     TpAllocPoolInternal @ 0x1800655CC (TpAllocPoolInternal.c)
 *     TpSetPoolStackInformation @ 0x180065BF0 (TpSetPoolStackInformation.c)
 *     TpCallbackIndependent @ 0x1800BFD20 (TpCallbackIndependent.c)
 *     TppDestroyTimer @ 0x1800DA4B4 (TppDestroyTimer.c)
 *     TpTrimPools @ 0x1800E86D0 (TpTrimPools.c)
 *     TpSetPoolMaxThreads @ 0x1800ECDE0 (TpSetPoolMaxThreads.c)
 *     TpSetPoolMinThreads @ 0x1800FDDB0 (TpSetPoolMinThreads.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x1800FF6B0 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x1801004C0 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpSetPoolThreadBasePriority @ 0x180105610 (TpSetPoolThreadBasePriority.c)
 * Callees:
 *     <none>
 */

__int64 NtSetInformationWorkerFactory()
{
  __int64 result; // rax

  result = 434LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
