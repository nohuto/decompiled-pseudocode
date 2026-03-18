/*
 * XREFs of imp_VfWdfFdoInitQueryPropertyEx @ 0x1400DFA80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfFdoInitQueryPropertyEx(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_DEVICE_PROPERTY_DATA *DeviceProperty,
        __int64 BufferLength,
        void *PropertyBuffer,
        unsigned int *ResultLength,
        unsigned int *Type)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE_INIT *, _WDF_DEVICE_PROPERTY_DATA *, __int64, void *, unsigned int *, unsigned int *))WdfVersion.Functions.pfnWdfFdoInitQueryPropertyEx)(
           DriverGlobals,
           DeviceInit,
           DeviceProperty,
           BufferLength,
           PropertyBuffer,
           ResultLength,
           Type);
}
