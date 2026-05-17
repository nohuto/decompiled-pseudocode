/*
 * XREFs of ZwAlertThreadByThreadIdEx @ 0x18015FD70
 * Callers:
 *     RtlpOptimizeSRWLockList @ 0x18002A5E0 (RtlpOptimizeSRWLockList.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlSleepConditionVariableSRW @ 0x18002CAF0 (RtlSleepConditionVariableSRW.c)
 *     TppBarrierAdjust @ 0x18002D290 (TppBarrierAdjust.c)
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     TppWorkerFindTask @ 0x18003D370 (TppWorkerFindTask.c)
 *     LdrSetDllDirectory @ 0x18003DCA0 (LdrSetDllDirectory.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpxLookupFunctionTable @ 0x18004B2A0 (RtlpxLookupFunctionTable.c)
 *     RtlpWakeByAddress @ 0x18004BA40 (RtlpWakeByAddress.c)
 *     LdrpCallTlsInitializers @ 0x18004C040 (LdrpCallTlsInitializers.c)
 *     LdrpReleaseDllPath @ 0x180051400 (LdrpReleaseDllPath.c)
 *     RtlpWakeSRWLock @ 0x1800C8F70 (RtlpWakeSRWLock.c)
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
