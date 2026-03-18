/*
 * XREFs of ACPIDeviceCompleteCommon @ 0x14002743C
 * Callers:
 *     ACPIDeviceCompleteGenericPhase @ 0x140025B40 (ACPIDeviceCompleteGenericPhase.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x1400274D0 (ACPIDevicePowerProcessPhase5DeviceSubPhase5.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase6 @ 0x1400320C0 (ACPIDevicePowerProcessPhase5SystemSubPhase6.c)
 *     ACPIDeviceCompleteOscReevalPhase @ 0x14004C440 (ACPIDeviceCompleteOscReevalPhase.c)
 * Callees:
 *     ACPIPowerScheduleDpc @ 0x140027488 (ACPIPowerScheduleDpc.c)
 */

void __fastcall ACPIDeviceCompleteCommon(volatile signed __int32 *a1, signed __int32 a2)
{
  KIRQL v2; // bl

  _InterlockedCompareExchange(a1, a2, 1);
  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  ACPIPowerScheduleDpc();
  KeReleaseSpinLock(&AcpiPowerQueueLock, v2);
}
