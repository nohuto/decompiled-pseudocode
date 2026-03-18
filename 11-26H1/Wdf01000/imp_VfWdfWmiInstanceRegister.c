/*
 * XREFs of imp_VfWdfWmiInstanceRegister @ 0x1400E2950
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfWmiInstanceRegister(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFWMIINSTANCE__ *WmiInstance)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFWMIINSTANCE__ *))WdfVersion.Functions.pfnWdfWmiInstanceRegister)(
           DriverGlobals,
           WmiInstance);
}
