/*
 * XREFs of ?QueryMitigatedRangeCount@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_QUERYMITIGATEDRANGECOUNT@@@Z @ 0x14021F0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiQueryMitigatedRangeCount@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYMITIGATEDRANGECOUNT@@@Z @ 0x140219E04 (-DdiQueryMitigatedRangeCount@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYMITIGATEDRANGECOUNT@@@Z.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::QueryMitigatedRangeCount(
        ADAPTER_RENDER **this,
        struct _DXGKARG_QUERYMITIGATEDRANGECOUNT *a2)
{
  ADAPTER_RENDER::DdiQueryMitigatedRangeCount(this[1], a2);
  return 0LL;
}
