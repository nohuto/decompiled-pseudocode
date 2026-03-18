/*
 * XREFs of ?ForceFullDirty@COffScreenRenderTarget@@UEAAXXZ @ 0x1801E3C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall COffScreenRenderTarget::ForceFullDirty(COffScreenRenderTarget *this)
{
  CTargetDirtyBase<8>::SetFullDirty((__int64)this + 312);
}
