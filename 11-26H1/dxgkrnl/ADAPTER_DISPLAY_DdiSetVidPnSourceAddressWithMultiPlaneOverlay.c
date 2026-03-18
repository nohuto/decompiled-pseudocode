/*
 * XREFs of ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay @ 0x14000B670
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSetVidPnSourceAddressWithMultiPlaneOverlay@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY@@@Z @ 0x14000B310 (-DdiSetVidPnSourceAddressWithMultiPlaneOverlay@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCE.c)
 */

__int64 __fastcall ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay(
        struct DXGADAPTER **a1,
        const struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY *a2,
        __int64 a3)
{
  return ADAPTER_DISPLAY::DdiSetVidPnSourceAddressWithMultiPlaneOverlay(a1, a2, a3);
}
