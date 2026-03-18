/*
 * XREFs of ADAPTER_RENDER_DdiCreateProcess @ 0x140074BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiCreateProcess@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEPROCESS@@@Z @ 0x140371C54 (-DdiCreateProcess@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEPROCESS@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiCreateProcess(ADAPTER_RENDER *a1, struct _DXGKARG_CREATEPROCESS *a2)
{
  return ADAPTER_RENDER::DdiCreateProcess(a1, a2);
}
