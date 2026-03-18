/*
 * XREFs of ACPIThermalStopZone @ 0x140055990
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x14005ADC0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x14005B380 (ACPIBusIrpSurpriseRemoval.c)
 *     AcpiThermalDeviceTargetChange @ 0x14006AA70 (AcpiThermalDeviceTargetChange.c)
 *     ACPIBusIrpStopDevice @ 0x1400AE270 (ACPIBusIrpStopDevice.c)
 * Callees:
 *     ACPIThermalLoop @ 0x140029C00 (ACPIThermalLoop.c)
 */

NTSTATUS __fastcall ACPIThermalStopZone(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 200);
  ACPIThermalLoop(a1, 0x10000000LL);
  return KeWaitForSingleObject((PVOID)(v1 + 280), Executive, 0, 0, 0LL);
}
