/*
 * XREFs of imp_WdfIoTargetFormatRequestForIoctl @ 0x14005D0A0
 * Callers:
 *     <none>
 * Callees:
 *     FxIoTargetFormatIoctl @ 0x14005D154 (FxIoTargetFormatIoctl.c)
 */

int __fastcall imp_WdfIoTargetFormatRequestForIoctl(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        unsigned int Ioctl,
        WDFMEMORY__ *InputBuffer,
        _WDFMEMORY_OFFSET *InputBufferOffsets,
        WDFMEMORY__ *OutputBuffer,
        _WDFMEMORY_OFFSET *OutputBufferOffsets)
{
  return FxIoTargetFormatIoctl(
           (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
           IoTarget,
           Request,
           Ioctl,
           0,
           InputBuffer,
           InputBufferOffsets,
           OutputBuffer,
           OutputBufferOffsets);
}
