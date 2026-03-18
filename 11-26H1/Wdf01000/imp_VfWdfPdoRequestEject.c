/*
 * XREFs of imp_VfWdfPdoRequestEject @ 0x1400E11C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfPdoRequestEject(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  WdfVersion.Functions.pfnWdfPdoRequestEject(DriverGlobals, Device);
}
