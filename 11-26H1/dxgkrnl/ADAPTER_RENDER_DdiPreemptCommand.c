/*
 * XREFs of ADAPTER_RENDER_DdiPreemptCommand @ 0x14000A1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiPreemptCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PREEMPTCOMMAND@@@Z @ 0x14000A1C8 (-DdiPreemptCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PREEMPTCOMMAND@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiPreemptCommand(ADAPTER_RENDER *a1, const struct _DXGKARG_PREEMPTCOMMAND *a2)
{
  return ADAPTER_RENDER::DdiPreemptCommand(a1, a2);
}
