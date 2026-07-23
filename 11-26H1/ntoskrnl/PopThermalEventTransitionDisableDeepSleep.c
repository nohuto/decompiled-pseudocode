/*
 * XREFs of PopThermalEventTransitionDisableDeepSleep @ 0x14050BBE0
 * Callers:
 *     PopThermalProcessUsermodeEvent @ 0x140B46A5C (PopThermalProcessUsermodeEvent.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     PopDeepSleepSetDisengageReason @ 0x1403BE008 (PopDeepSleepSetDisengageReason.c)
 */

void __fastcall PopThermalEventTransitionDisableDeepSleep(unsigned int a1)
{
  KIRQL v2; // di

  if ( a1 <= 1 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&PopThermalEventTransitionContext);
    if ( byte_140F0FD08 || a1 < dword_140F0FD0C )
    {
      PopDeepSleepSetDisengageReason(0xAu);
      dword_140F0FD0C = a1;
      byte_140F0FD08 = 0;
      KeSetTimer2((__int64)&unk_140F0FD10, a1 != 0 ? -50000000LL : -600000000LL, 0LL, 0LL);
      byte_140F0FD98 = 1;
    }
    KeReleaseSpinLock(&PopThermalEventTransitionContext, v2);
  }
}
