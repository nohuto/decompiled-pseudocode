/*
 * XREFs of imp_VfWdfUsbTargetPipeSetNoMaximumPacketSizeCheck @ 0x1400E2740
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfUsbTargetPipeSetNoMaximumPacketSizeCheck(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe)
{
  WdfVersion.Functions.pfnWdfUsbTargetPipeSetNoMaximumPacketSizeCheck(DriverGlobals, Pipe);
}
