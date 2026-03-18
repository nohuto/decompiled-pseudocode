/*
 * XREFs of PopThermalEventTransitionDisableDeepSleep @ 0x140512170
 * Callers:
 *     PopThermalProcessUsermodeEvent @ 0x140B44A20 (PopThermalProcessUsermodeEvent.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetTimer2 @ 0x14037A500 (KeSetTimer2.c)
 *     PopDeepSleepSetDisengageReason @ 0x1403B40FC (PopDeepSleepSetDisengageReason.c)
 */

void __fastcall PopThermalEventTransitionDisableDeepSleep(unsigned int a1)
{
  KIRQL v2; // di

  if ( a1 <= 1 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140F0F620.SchedulerApc.ApcListEntry.Blink);
    if ( stru_140F0F620.SchedulerApcFill3[32] || a1 < *(_DWORD *)&stru_140F0F620.SchedulerApcFill5[36] )
    {
      PopDeepSleepSetDisengageReason(0xAu);
      *(_DWORD *)&stru_140F0F620.SchedulerApcFill5[36] = a1;
      stru_140F0F620.SchedulerApcFill3[32] = 0;
      KeSetTimer2((__int64)&stru_140F0F620.SchedulerApc.Reserved[1], a1 != 0 ? -50000000LL : -600000000LL, 0LL, 0LL);
      stru_140F0F620.PriorityFloorCounts[0] = 1;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_140F0F620.SchedulerApc.ApcListEntry.Blink, v2);
  }
}
