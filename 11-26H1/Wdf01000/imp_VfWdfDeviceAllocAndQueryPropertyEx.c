/*
 * XREFs of imp_VfWdfDeviceAllocAndQueryPropertyEx @ 0x1400DE6F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfDeviceAllocAndQueryPropertyEx(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_PROPERTY_DATA *DeviceProperty,
        __int64 PoolType,
        _WDF_OBJECT_ATTRIBUTES *PropertyMemoryAttributes,
        WDFMEMORY__ **PropertyMemory,
        unsigned int *Type)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, _WDF_DEVICE_PROPERTY_DATA *, __int64, _WDF_OBJECT_ATTRIBUTES *, WDFMEMORY__ **, unsigned int *))WdfVersion.Functions.pfnWdfDeviceAllocAndQueryPropertyEx)(
           DriverGlobals,
           Device,
           DeviceProperty,
           PoolType,
           PropertyMemoryAttributes,
           PropertyMemory,
           Type);
}
