/*
 * XREFs of PopThermalEventTransitionEnableDeepSleep @ 0x14052B4C8
 * Callers:
 *     NtInitiatePowerAction @ 0x1409F2FC0 (NtInitiatePowerAction.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer2 @ 0x1403B40F0 (KeCancelTimer2.c)
 *     PopDeepSleepClearDisengageReason @ 0x1403BE204 (PopDeepSleepClearDisengageReason.c)
 */

void __fastcall PopThermalEventTransitionEnableDeepSleep(int a1)
{
  KIRQL v1; // bl

  if ( (unsigned int)(a1 - 3) <= 3 )
  {
    v1 = KeAcquireSpinLockRaiseToDpc(&PopThermalEventTransitionContext);
    KeCancelTimer2((__int64)&unk_140F0FD10);
    byte_140F0FD98 = 0;
    PopDeepSleepClearDisengageReason(0xAu);
    KeReleaseSpinLock(&PopThermalEventTransitionContext, v1);
  }
}
