/*
 * XREFs of PopDevicePowerTransitionInProgressWorker @ 0x1404C1CF0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 */

void PopDevicePowerTransitionInProgressWorker()
{
  KIRQL v0; // dl
  BOOL Buffer; // [rsp+58h] [rbp+10h] BYREF

  v0 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PpmIdlePolicyLock.Queue);
  do
  {
    Buffer = PopPendingSetPowerDeviceIrps != 0;
    KeReleaseSpinLock((PKSPIN_LOCK)&PpmIdlePolicyLock.Queue, v0);
    ZwUpdateWnfStateData(&WNF_PO_DEVICE_POWER_TRANSITION, &Buffer, 4u, 0LL, 0LL, 0, 0);
    v0 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PpmIdlePolicyLock.Queue);
  }
  while ( Buffer != (PopPendingSetPowerDeviceIrps != 0) );
  PopDevicePowerTransitionInProgressWorkerQueued = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)&PpmIdlePolicyLock.Queue, v0);
}
