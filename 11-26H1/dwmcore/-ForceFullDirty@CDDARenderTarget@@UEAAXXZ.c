/*
 * XREFs of ?ForceFullDirty@CDDARenderTarget@@UEAAXXZ @ 0x1801FD1F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDDARenderTarget::ForceFullDirty(CDDARenderTarget *this)
{
  CTargetDirtyBase<8>::SetFullDirty((__int64)this + 408);
}
