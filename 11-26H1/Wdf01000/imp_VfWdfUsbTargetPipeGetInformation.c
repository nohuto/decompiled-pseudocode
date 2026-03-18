/*
 * XREFs of imp_VfWdfUsbTargetPipeGetInformation @ 0x1400E2640
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfUsbTargetPipeGetInformation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        _WDF_USB_PIPE_INFORMATION *PipeInformation)
{
  WdfVersion.Functions.pfnWdfUsbTargetPipeGetInformation(DriverGlobals, Pipe, PipeInformation);
}
