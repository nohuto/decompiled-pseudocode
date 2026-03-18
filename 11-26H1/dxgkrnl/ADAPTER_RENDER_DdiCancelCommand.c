/*
 * XREFs of ADAPTER_RENDER_DdiCancelCommand @ 0x140074B30
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiCancelCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_CANCELCOMMAND@@@Z @ 0x1401AB014 (-DdiCancelCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_CANCELCOMMAND@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiCancelCommand(ADAPTER_RENDER *a1, const struct _DXGKARG_CANCELCOMMAND *a2)
{
  return ADAPTER_RENDER::DdiCancelCommand(a1, a2);
}
