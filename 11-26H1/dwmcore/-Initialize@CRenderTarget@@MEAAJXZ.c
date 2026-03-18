/*
 * XREFs of ?Initialize@CRenderTarget@@MEAAJXZ @ 0x18014AB50
 * Callers:
 *     <none>
 * Callees:
 *     ?AddToRenderTargetManager@CRenderTarget@@QEAAXXZ @ 0x18014AB68 (-AddToRenderTargetManager@CRenderTarget@@QEAAXXZ.c)
 */

__int64 __fastcall CRenderTarget::Initialize(CRenderTarget *this)
{
  CRenderTarget::AddToRenderTargetManager(this);
  return 0LL;
}
