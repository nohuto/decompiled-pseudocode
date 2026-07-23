/*
 * XREFs of PopPowerAggregatorNotifyPdcSleepTransition @ 0x140B43B48
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1406105F0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140ABC8DC (PopPowerAggregatorScheduleWorker.c)
 *     PopPowerAggregatorDiagTracePdcSleepTransition @ 0x140B43C14 (PopPowerAggregatorDiagTracePdcSleepTransition.c)
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
  if ( (_DWORD)xmmword_140F0D8F8 == 1 )
  {
    v8 = 0;
    if ( a1 )
      goto LABEL_5;
    goto LABEL_7;
  }
  if ( (_DWORD)xmmword_140F0D8F8 == 4 )
  {
    v8 = 0;
    if ( !a1 )
    {
LABEL_5:
      LOBYTE(xmmword_140F0D908) = 0;
      *(_QWORD *)((char *)&xmmword_140F0D908 + 4) = 0LL;
      goto LABEL_8;
    }
LABEL_7:
    DWORD2(xmmword_140F0D908) = v5;
    v8 = 259;
    DWORD1(xmmword_140F0D908) = v6;
    LOBYTE(xmmword_140F0D908) = 1;
    PopPowerAggregatorScheduleWorker((__int64)PopPowerAggregatorContext);
    goto LABEL_8;
  }
  v8 = -1073741811;
LABEL_8:
  LOBYTE(v7) = a1;
  PopPowerAggregatorDiagTracePdcSleepTransition(
    v7,
    v6,
    (unsigned int)&xmmword_140F0D8D0,
    (unsigned int)&xmmword_140F0D8F8,
    v8);
  PopReleaseRwLock((struct _KTHREAD *)&PopPowerAggregatorLock);
  return v8;
}
