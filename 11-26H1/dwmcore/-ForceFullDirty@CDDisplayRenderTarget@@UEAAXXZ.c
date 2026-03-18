/*
 * XREFs of ?ForceFullDirty@CDDisplayRenderTarget@@UEAAXXZ @ 0x1801DD1D0
 * Callers:
 *     ?ForceFullDirty@CDDisplayRenderTarget@@WEI@EAAXXZ @ 0x180247340 (-ForceFullDirty@CDDisplayRenderTarget@@WEI@EAAXXZ.c)
 *     ?ForceFullDirty@CDDisplayRenderTarget@@WFA@EAAXXZ @ 0x180247350 (-ForceFullDirty@CDDisplayRenderTarget@@WFA@EAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDDisplayRenderTarget::ForceFullDirty(CDDisplayRenderTarget *this)
{
  CTargetDirtyBase<8>::SetFullDirty((__int64)this + 30128);
}
