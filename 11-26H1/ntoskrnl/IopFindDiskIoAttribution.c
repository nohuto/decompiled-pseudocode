/*
 * XREFs of IopFindDiskIoAttribution @ 0x140207950
 * Callers:
 *     IoGetIoRateControl @ 0x140207650 (IoGetIoRateControl.c)
 *     IoRecordIoAttribution @ 0x1402078B0 (IoRecordIoAttribution.c)
 *     IoNotifyQuotaState @ 0x1404D0850 (IoNotifyQuotaState.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

unsigned __int64 __fastcall IopFindDiskIoAttribution(unsigned __int64 a1)
{
  unsigned __int64 v2; // rsi
  KIRQL v3; // al
  unsigned __int64 Blink; // rdx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0LL;
  v3 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
  Blink = (unsigned __int64)IopPerfIoTrackingLock.Header.WaitListHead.Blink;
  v5 = v3;
  if ( ((__int64)IopPerfIoTrackingLock.SListFaultAddress & 1) != 0 && IopPerfIoTrackingLock.Header.WaitListHead.Blink )
    Blink = (unsigned __int64)&IopPerfIoTrackingLock.Header.WaitListHead.Blink ^ (unsigned __int64)IopPerfIoTrackingLock.Header.WaitListHead.Blink;
  while ( Blink )
  {
    if ( a1 < *(_QWORD *)(Blink + 24) )
    {
      v6 = *(_QWORD *)Blink;
    }
    else
    {
      if ( a1 <= *(_QWORD *)(Blink + 24) )
        break;
      v6 = *(_QWORD *)(Blink + 8);
    }
    if ( ((__int64)IopPerfIoTrackingLock.SListFaultAddress & 1) != 0 && v6 )
      Blink ^= v6;
    else
      Blink = v6;
  }
  if ( Blink )
  {
    v2 = Blink;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(Blink + 32)) <= 1 )
      __fastfail(0xEu);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _InterlockedAnd(&IopDiskIoAttributionLock, 0xBFFFFFFF);
    _InterlockedDecrement(&IopDiskIoAttributionLock);
  }
  else
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&IopDiskIoAttributionLock, retaddr);
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(Blink) = v5;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), Blink);
  }
  __writecr8(v5);
  return v2;
}
