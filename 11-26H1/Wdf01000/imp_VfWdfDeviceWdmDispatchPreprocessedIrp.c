/*
 * XREFs of imp_VfWdfDeviceWdmDispatchPreprocessedIrp @ 0x1400DF260
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfDeviceWdmDispatchPreprocessedIrp(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _IRP *Irp)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, _IRP *))WdfVersion.Functions.pfnWdfDeviceWdmDispatchPreprocessedIrp)(
           DriverGlobals,
           Device,
           Irp);
}
