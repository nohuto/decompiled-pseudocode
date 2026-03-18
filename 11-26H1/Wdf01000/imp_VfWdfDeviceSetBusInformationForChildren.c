/*
 * XREFs of imp_VfWdfDeviceSetBusInformationForChildren @ 0x1400DF040
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDeviceSetBusInformationForChildren(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _PNP_BUS_INFORMATION *BusInformation)
{
  WdfVersion.Functions.pfnWdfDeviceSetBusInformationForChildren(DriverGlobals, Device, BusInformation);
}
