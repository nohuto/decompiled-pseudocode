/*
 * XREFs of ADAPTER_RENDER_DdiUpdateMonitoredValues @ 0x140074E50
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiUpdateMonitoredValues@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_UPDATEMONITOREDVALUES@@@Z @ 0x1400731F8 (-DdiUpdateMonitoredValues@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_UPDATEMONITOREDVALUES@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiUpdateMonitoredValues(
        ADAPTER_RENDER *a1,
        struct _DXGKARG_UPDATEMONITOREDVALUES *a2)
{
  return ADAPTER_RENDER::DdiUpdateMonitoredValues(a1, a2);
}
