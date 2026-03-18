/*
 * XREFs of ADAPTER_RENDER_DdiQueryEngineStatus @ 0x14002F030
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiQueryEngineStatus@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYENGINESTATUS@@@Z @ 0x14002F574 (-DdiQueryEngineStatus@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYENGINESTATUS@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiQueryEngineStatus(ADAPTER_RENDER *a1, struct _DXGKARG_QUERYENGINESTATUS *a2)
{
  return ADAPTER_RENDER::DdiQueryEngineStatus(a1, a2);
}
