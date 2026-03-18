/*
 * XREFs of PopPowerAggregatorNotifyPdcSleepTransition @ 0x140B41C58
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x14060D4E0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140ABB41C (PopPowerAggregatorScheduleWorker.c)
 *     PopPowerAggregatorDiagTracePdcSleepTransition @ 0x140B41D24 (PopPowerAggregatorDiagTracePdcSleepTransition.c)
 */

__int64 __fastcall PopPowerAggregatorNotifyPdcSleepTransition(
        char a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  int v5; // ebx
  int v6; // ebp
  int v7; // ecx
  unsigned int v8; // edi

  v5 = a3;
  v6 = a2;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, a2, a3, a4);
  if ( LODWORD(PopPowerAggregatorLock.CycleTime) == 1 )
  {
    v8 = 0;
    if ( a1 )
      goto LABEL_5;
    goto LABEL_7;
  }
  if ( LODWORD(PopPowerAggregatorLock.CycleTime) == 4 )
  {
    v8 = 0;
    if ( !a1 )
    {
LABEL_5:
      LOBYTE(PopPowerAggregatorLock.KernelStack) = 0;
      *(void **)((char *)&PopPowerAggregatorLock.KernelStack + 4) = 0LL;
      goto LABEL_8;
    }
LABEL_7:
    LODWORD(PopPowerAggregatorLock.StateSaveArea) = v5;
    v8 = 259;
    HIDWORD(PopPowerAggregatorLock.KernelStack) = v6;
    LOBYTE(PopPowerAggregatorLock.KernelStack) = 1;
    PopPowerAggregatorScheduleWorker((__int64)&PopPowerAggregatorLock.Header.WaitListHead.Blink);
    goto LABEL_8;
  }
  v8 = -1073741811;
LABEL_8:
  LOBYTE(v7) = a1;
  PopPowerAggregatorDiagTracePdcSleepTransition(
    v7,
    v6,
    (unsigned int)&PopPowerAggregatorLock.QuantumTarget,
    (unsigned int)&PopPowerAggregatorLock.CycleTime,
    v8);
  PopReleaseRwLock(&PopPowerAggregatorLock);
  return v8;
}
