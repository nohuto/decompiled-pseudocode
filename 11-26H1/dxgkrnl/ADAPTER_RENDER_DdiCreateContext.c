/*
 * XREFs of ADAPTER_RENDER_DdiCreateContext @ 0x140074B50
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z @ 0x1403C18B8 (-DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiCreateContext(ADAPTER_RENDER *a1, void *a2, struct _DXGKARG_CREATECONTEXT *a3)
{
  return ADAPTER_RENDER::DdiCreateContext(a1, a2, a3);
}
