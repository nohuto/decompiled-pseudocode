/*
 * XREFs of PopRecordPhysicalPowerButton @ 0x1407CC108
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x14060FE80 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404DEFD0 (PopBsdHandleRequest.c)
 *     PopGetCurrentPdcPhase @ 0x140610778 (PopGetCurrentPdcPhase.c)
 */

__int64 __fastcall PopRecordPhysicalPowerButton(char a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v5; // r9d
  char CurrentPdcPhase; // al
  __int64 v7; // r8
  unsigned __int64 v8; // rcx

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock, a2, a3, a4);
  v5 = 1;
  if ( a1 )
  {
    *(_QWORD *)&stru_140E67200.ResourceIndex = MEMORY[0xFFFFF78000000014];
    ++LODWORD(stru_140E67200.SchedulerSharedSwappablePage);
    WORD2(stru_140E67200.SchedulerSharedSwappablePage) = MEMORY[0xFFFFF780000002C4];
    BYTE6(stru_140E67200.SchedulerSharedSwappablePage) = stru_140E67200.OtherOperationCount;
    HIBYTE(stru_140E67200.SchedulerSharedSwappablePage) = stru_140E67200.ReadTransferCount & 1 | HIBYTE(stru_140E67200.SchedulerSharedSwappablePage) & 0xFC | (2 * (BYTE4(stru_140E67200.OtherOperationCount) & 1));
    *(_OWORD *)&stru_140E67200.AutoBoostThreadState = *(_OWORD *)&PopPdcDeviceListLock.NpxState;
    CurrentPdcPhase = PopGetCurrentPdcPhase();
    *(_QWORD *)&PopPdcDeviceListLock.UserAffinityPrimaryGroup |= v7;
    LODWORD(PopPdcDeviceListLock.UserAffinity) += v5;
    LOBYTE(stru_140E67200.SchedulerAssistLastYieldBoostTime) = CurrentPdcPhase;
    HIDWORD(stru_140E67200.SchedulerAssistLastYieldBoostTime) = stru_140F12EA0.Padding[4];
    LODWORD(stru_140E67200.Padding[0]) = HIDWORD(stru_140F12EA0.Padding[3]);
    HIDWORD(stru_140E67200.Padding[0]) = stru_140F12EA0.Padding[3];
    PopPdcDeviceListLock.AffinityVersion = v8;
  }
  else
  {
    stru_140E67200.KcsanThread = MEMORY[0xFFFFF78000000014];
    ++stru_140E67200.SchedulerAssistYieldCounter;
    *(_QWORD *)&PopPdcDeviceListLock.UserAffinityPrimaryGroup &= ~(1LL << (LOBYTE(PopPdcDeviceListLock.UserAffinity)
                                                                         + BYTE4(PopPdcDeviceListLock.UserAffinity)));
    ++HIDWORD(PopPdcDeviceListLock.UserAffinity);
    LOWORD(stru_140E67200.SchedulerAssistYieldBoostCount) = MEMORY[0xFFFFF780000002C4];
    *(_OWORD *)&stru_140E67200.AutoBoostThreadState = 0LL;
    PopPdcDeviceListLock.Affinity = (_KAFFINITY_EX *)MEMORY[0xFFFFF78000000014];
  }
  if ( LODWORD(PopPdcDeviceListLock.UserAffinity) < HIDWORD(PopPdcDeviceListLock.UserAffinity)
    || LODWORD(PopPdcDeviceListLock.UserAffinity) - HIDWORD(PopPdcDeviceListLock.UserAffinity) > v5 )
  {
    PopPdcDeviceListLock.SavedApcStateFill[32] = v5;
  }
  PopBsdHandleRequest(4u);
  return PopReleaseRwLock((struct _KTHREAD *)&PopBsdUpdateLock);
}
