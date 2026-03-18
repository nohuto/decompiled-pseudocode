/*
 * XREFs of ADAPTER_RENDER_DdiQueryCurrentFence @ 0x140074C90
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiQueryCurrentFence@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYCURRENTFENCE@@@Z @ 0x140071CFC (-DdiQueryCurrentFence@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYCURRENTFENCE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiQueryCurrentFence(ADAPTER_RENDER *a1, struct _DXGKARG_QUERYCURRENTFENCE *a2)
{
  return ADAPTER_RENDER::DdiQueryCurrentFence(a1, a2);
}
