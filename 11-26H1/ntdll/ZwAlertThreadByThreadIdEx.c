/*
 * XREFs of ZwAlertThreadByThreadIdEx @ 0x18015FC70
 * Callers:
 *     RtlpOptimizeSRWLockList @ 0x1800156E0 (RtlpOptimizeSRWLockList.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlSleepConditionVariableSRW @ 0x180017BF0 (RtlSleepConditionVariableSRW.c)
 *     TppBarrierAdjust @ 0x180018390 (TppBarrierAdjust.c)
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     TppWorkerFindTask @ 0x1800278E0 (TppWorkerFindTask.c)
 *     LdrSetDllDirectory @ 0x180028210 (LdrSetDllDirectory.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpxLookupFunctionTable @ 0x180035820 (RtlpxLookupFunctionTable.c)
 *     RtlpWakeByAddress @ 0x180035FC0 (RtlpWakeByAddress.c)
 *     LdrpCallTlsInitializers @ 0x1800365C0 (LdrpCallTlsInitializers.c)
 *     LdrpReleaseDllPath @ 0x18003B980 (LdrpReleaseDllPath.c)
 *     RtlpWakeSRWLock @ 0x1800C6730 (RtlpWakeSRWLock.c)
 * Callees:
 *     <none>
 */

__int64 ZwAlertThreadByThreadIdEx()
{
  __int64 result; // rax

  result = 114LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
