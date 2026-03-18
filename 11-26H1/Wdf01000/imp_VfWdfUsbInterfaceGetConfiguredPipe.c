/*
 * XREFs of imp_VfWdfUsbInterfaceGetConfiguredPipe @ 0x1400E1FF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

WDFUSBPIPE__ *__fastcall imp_VfWdfUsbInterfaceGetConfiguredPipe(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBINTERFACE__ *UsbInterface,
        __int64 PipeIndex,
        _WDF_USB_PIPE_INFORMATION *PipeInfo)
{
  return WdfVersion.Functions.pfnWdfUsbInterfaceGetConfiguredPipe(DriverGlobals, UsbInterface, PipeIndex, PipeInfo);
}
