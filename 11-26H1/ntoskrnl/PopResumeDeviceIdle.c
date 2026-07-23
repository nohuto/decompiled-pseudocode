/*
 * XREFs of PopResumeDeviceIdle @ 0x140511A94
 * Callers:
 *     PoClearBroadcast @ 0x140B35BB8 (PoClearBroadcast.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

void PopResumeDeviceIdle()
{
  KIRQL v0; // al

  v0 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PpmIdlePolicyLock.WaitBlockFill11[160]);
  byte_140E676D4 = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)&PpmIdlePolicyLock.WaitBlockFill11[160], v0);
}
