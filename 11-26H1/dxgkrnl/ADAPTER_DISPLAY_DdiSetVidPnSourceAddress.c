/*
 * XREFs of ADAPTER_DISPLAY_DdiSetVidPnSourceAddress @ 0x14000AEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x14000AB78 (-DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY_DdiSetVidPnSourceAddress(
        struct DXGADAPTER **a1,
        const struct _DXGKARG_SETVIDPNSOURCEADDRESS *a2,
        __int64 a3)
{
  return ADAPTER_DISPLAY::DdiSetVidPnSourceAddress(a1, a2, a3);
}
