/*
 * XREFs of ADAPTER_RENDER_DdiAcquireSwizzlingRange @ 0x140064630
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiAcquireSwizzlingRange@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_ACQUIRESWIZZLINGRANGE@@@Z @ 0x140419490 (-DdiAcquireSwizzlingRange@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_ACQUIRESWIZZLINGRANGE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiAcquireSwizzlingRange(
        ADAPTER_RENDER *a1,
        struct _DXGKARG_ACQUIRESWIZZLINGRANGE *a2)
{
  return ADAPTER_RENDER::DdiAcquireSwizzlingRange(a1, a2);
}
