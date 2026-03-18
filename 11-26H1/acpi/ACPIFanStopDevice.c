/*
 * XREFs of ACPIFanStopDevice @ 0x1400607B0
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x14005ADC0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x14005B380 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIBusIrpStopDevice @ 0x1400AE270 (ACPIBusIrpStopDevice.c)
 * Callees:
 *     ACPIFanLoop @ 0x140017774 (ACPIFanLoop.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x140046BE8 (ACPIThermalReleaseCoolingInterfaces.c)
 *     ACPIUnregisterForDeviceNotifications @ 0x1400525E0 (ACPIUnregisterForDeviceNotifications.c)
 */

NTSTATUS __fastcall ACPIFanStopDevice(__int64 a1)
{
  ACPIUnregisterForDeviceNotifications(*(_QWORD *)(a1 + 768));
  ACPIThermalReleaseCoolingInterfaces(a1);
  ACPIFanLoop(a1, 0x20000000, 0);
  return KeWaitForSingleObject((PVOID)(a1 + 344), Executive, 0, 0, 0LL);
}
