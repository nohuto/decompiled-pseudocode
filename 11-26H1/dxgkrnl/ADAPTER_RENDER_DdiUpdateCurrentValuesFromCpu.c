/*
 * XREFs of ADAPTER_RENDER_DdiUpdateCurrentValuesFromCpu @ 0x140074E30
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiUpdateCurrentValuesFromCpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_UPDATECURRENTVALUESFROMCPU@@@Z @ 0x140072FA4 (-DdiUpdateCurrentValuesFromCpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_UPDATECURRENTVALUESFROMCPU@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiUpdateCurrentValuesFromCpu(
        ADAPTER_RENDER *a1,
        struct _DXGKARG_UPDATECURRENTVALUESFROMCPU *a2)
{
  return ADAPTER_RENDER::DdiUpdateCurrentValuesFromCpu(a1, a2);
}
