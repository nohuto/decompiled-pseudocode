/*
 * XREFs of PopThermalEventTransitionTimerCallback @ 0x14060A750
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDeepSleepClearDisengageReason @ 0x1403BE204 (PopDeepSleepClearDisengageReason.c)
 */

void PopThermalEventTransitionTimerCallback()
{
  KIRQL v0; // bl

  v0 = KeAcquireSpinLockRaiseToDpc(&PopThermalEventTransitionContext);
  if ( byte_140F0FD98 )
  {
    PopDeepSleepClearDisengageReason(0xAu);
    dword_140F0FD0C = -1;
    byte_140F0FD98 = 0;
  }
  KeReleaseSpinLock(&PopThermalEventTransitionContext, v0);
}
