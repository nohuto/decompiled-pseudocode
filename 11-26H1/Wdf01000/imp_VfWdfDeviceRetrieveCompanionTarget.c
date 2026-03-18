/*
 * XREFs of imp_VfWdfDeviceRetrieveCompanionTarget @ 0x1400DEFB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfDeviceRetrieveCompanionTarget(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        WDFCOMPANIONTARGET__ **CompanionTarget)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, WDFCOMPANIONTARGET__ **))WdfVersion.Functions.pfnWdfDeviceRetrieveCompanionTarget)(
           DriverGlobals,
           Device,
           CompanionTarget);
}
