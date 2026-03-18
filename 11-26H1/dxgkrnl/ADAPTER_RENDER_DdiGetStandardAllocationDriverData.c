/*
 * XREFs of ADAPTER_RENDER_DdiGetStandardAllocationDriverData @ 0x140074C70
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1403983A0 (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 */

int __fastcall ADAPTER_RENDER_DdiGetStandardAllocationDriverData(
        ADAPTER_RENDER *a1,
        struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *a2)
{
  return ADAPTER_RENDER::DdiGetStandardAllocationDriverData(a1, a2);
}
