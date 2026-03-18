/*
 * XREFs of ADAPTER_DISPLAY_DdiCancelFlips @ 0x140074A90
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiCancelFlips@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CANCELFLIPS@@@Z @ 0x140071120 (-DdiCancelFlips@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CANCELFLIPS@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY_DdiCancelFlips(ADAPTER_DISPLAY *a1, struct _DXGKARG_CANCELFLIPS *a2)
{
  return ADAPTER_DISPLAY::DdiCancelFlips(a1, a2);
}
