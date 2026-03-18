/*
 * XREFs of ADAPTER_RENDER_DdiQueryDependentEngineGroup @ 0x140074CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiQueryDependentEngineGroup@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYDEPENDENTENGINEGROUP@@@Z @ 0x140071F8C (-DdiQueryDependentEngineGroup@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYDEPENDENTENGINEGROUP@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiQueryDependentEngineGroup(
        ADAPTER_RENDER *a1,
        struct _DXGKARG_QUERYDEPENDENTENGINEGROUP *a2)
{
  return ADAPTER_RENDER::DdiQueryDependentEngineGroup(a1, a2);
}
