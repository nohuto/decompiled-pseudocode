/*
 * XREFs of IopFindDiskIoAttribution @ 0x140207870
 * Callers:
 *     IoGetIoRateControl @ 0x140207570 (IoGetIoRateControl.c)
 *     IoRecordIoAttribution @ 0x1402077D0 (IoRecordIoAttribution.c)
 *     IoNotifyQuotaState @ 0x1404D7080 (IoNotifyQuotaState.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockShared @ 0x1402EDF10 (ExAcquireSpinLockShared.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036A848 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

unsigned __int64 __fastcall IopFindDiskIoAttribution(unsigned __int64 a1)
{
  unsigned __int64 v2; // rsi
  KIRQL v3; // al
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0LL;
  v3 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)&IopSessionNotificationLock.TrapFrame + 1);
  v4 = *(_QWORD *)&IopSessionNotificationLock.SchedulerApcFill5[80];
  v5 = v3;
  if ( (IopSessionNotificationLock.SuspendEvent.Header.Type & 1) != 0
    && *(_QWORD *)&IopSessionNotificationLock.SchedulerApcFill5[80] )
  {
    v4 = (unsigned __int64)&IopSessionNotificationLock.SchedulerApcFill5[80] ^ *(_QWORD *)&IopSessionNotificationLock.SchedulerApcFill5[80];
  }
  while ( v4 )
  {
    if ( a1 < *(_QWORD *)(v4 + 24) )
    {
      v6 = *(_QWORD *)v4;
    }
    else
    {
      if ( a1 <= *(_QWORD *)(v4 + 24) )
        break;
      v6 = *(_QWORD *)(v4 + 8);
    }
    if ( (IopSessionNotificationLock.SuspendEvent.Header.Type & 1) != 0 && v6 )
      v4 ^= v6;
    else
      v4 = v6;
  }
  if ( v4 )
  {
    v2 = v4;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 32)) <= 1 )
      __fastfail(0xEu);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    _InterlockedAnd((_DWORD *)&IopSessionNotificationLock.TrapFrame + 1, 0xBFFFFFFF);
    _InterlockedDecrement((_DWORD *)&IopSessionNotificationLock.TrapFrame + 1);
  }
  else
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented((char *)&IopSessionNotificationLock.TrapFrame + 4, retaddr);
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = v5;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
  }
  __writecr8(v5);
  return v2;
}
