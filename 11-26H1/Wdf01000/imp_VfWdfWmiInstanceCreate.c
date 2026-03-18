/*
 * XREFs of imp_VfWdfWmiInstanceCreate @ 0x1400E28A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfWmiInstanceCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_WMI_INSTANCE_CONFIG *InstanceConfig,
        _WDF_OBJECT_ATTRIBUTES *InstanceAttributes,
        WDFWMIINSTANCE__ **Instance)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, _WDF_WMI_INSTANCE_CONFIG *, _WDF_OBJECT_ATTRIBUTES *, WDFWMIINSTANCE__ **))WdfVersion.Functions.pfnWdfWmiInstanceCreate)(
           DriverGlobals,
           Device,
           InstanceConfig,
           InstanceAttributes,
           Instance);
}
