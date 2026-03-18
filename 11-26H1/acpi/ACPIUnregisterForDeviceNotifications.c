/*
 * XREFs of ACPIUnregisterForDeviceNotifications @ 0x1400525E0
 * Callers:
 *     ACPIUnregisterForDeviceNotifications2 @ 0x1400525C0 (ACPIUnregisterForDeviceNotifications2.c)
 *     ACPIFanStopDevice @ 0x1400607B0 (ACPIFanStopDevice.c)
 *     ACPIThermalStopZoneWorker @ 0x14006A72C (ACPIThermalStopZoneWorker.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 */

void __fastcall ACPIUnregisterForDeviceNotifications(ULONG_PTR a1)
{
  __int64 DeviceExtension; // rbx
  KIRQL v2; // al

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( DeviceExtension != -376 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&NotifyHandlerLock);
    *(_QWORD *)(DeviceExtension + 392) = 0LL;
    *(_QWORD *)(DeviceExtension + 400) = 0LL;
    KeReleaseSpinLock(&NotifyHandlerLock, v2);
  }
}
