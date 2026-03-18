/*
 * XREFs of ADAPTER_RENDER_DdiCreateDevice @ 0x140074B70
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z @ 0x140372000 (-DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiCreateDevice(ADAPTER_RENDER *a1, struct _DXGKARG_CREATEDEVICE *a2)
{
  return ADAPTER_RENDER::DdiCreateDevice(a1, a2);
}
