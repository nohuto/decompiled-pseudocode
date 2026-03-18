/*
 * XREFs of imp_VfWdfDeviceInitAssignWdmIrpPreprocessCallback @ 0x1400DEB10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfDeviceInitAssignWdmIrpPreprocessCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        int (__fastcall *EvtDeviceWdmIrpPreprocess)(WDFDEVICE__ *, _IRP *),
        __int64 MajorFunction,
        unsigned __int8 *MinorFunctions,
        unsigned int NumMinorFunctions)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE_INIT *, int (__fastcall *)(WDFDEVICE__ *, _IRP *), __int64, unsigned __int8 *, unsigned int))WdfVersion.Functions.pfnWdfDeviceInitAssignWdmIrpPreprocessCallback)(
           DriverGlobals,
           DeviceInit,
           EvtDeviceWdmIrpPreprocess,
           MajorFunction,
           MinorFunctions,
           NumMinorFunctions);
}
