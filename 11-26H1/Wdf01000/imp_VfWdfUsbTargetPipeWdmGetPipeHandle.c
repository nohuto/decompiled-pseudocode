/*
 * XREFs of imp_VfWdfUsbTargetPipeWdmGetPipeHandle @ 0x1400E2760
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void *__fastcall imp_VfWdfUsbTargetPipeWdmGetPipeHandle(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFUSBPIPE__ *UsbPipe)
{
  return WdfVersion.Functions.pfnWdfUsbTargetPipeWdmGetPipeHandle(DriverGlobals, UsbPipe);
}
