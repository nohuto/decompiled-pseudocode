/*
 * XREFs of ADAPTER_RENDER_DdiSuspendContext @ 0x14005DD00
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSuspendContext@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUSPENDCONTEXT@@@Z @ 0x1403D093C (-DdiSuspendContext@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUSPENDCONTEXT@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiSuspendContext(ADAPTER_RENDER *a1, const struct _DXGKARG_SUSPENDCONTEXT *a2)
{
  return ADAPTER_RENDER::DdiSuspendContext(a1, a2);
}
