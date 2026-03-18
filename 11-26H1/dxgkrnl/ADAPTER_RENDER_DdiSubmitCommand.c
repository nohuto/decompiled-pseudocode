/*
 * XREFs of ADAPTER_RENDER_DdiSubmitCommand @ 0x14000AEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSubmitCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x14000A628 (-DdiSubmitCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMAND@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiSubmitCommand(
        struct DXGADAPTER **a1,
        const struct _DXGKARG_SUBMITCOMMAND *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiSubmitCommand(a1, a2, a3);
}
