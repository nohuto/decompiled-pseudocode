/*
 * XREFs of ?FinalRelease@CRenderTarget@@MEAAXXZ @ 0x1801DF770
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveFromRenderTargetManager@CRenderTarget@@QEAAXXZ @ 0x180148E64 (-RemoveFromRenderTargetManager@CRenderTarget@@QEAAXXZ.c)
 */

void __fastcall CRenderTarget::FinalRelease(CRenderTarget *this)
{
  if ( *((_BYTE *)this + 156) )
    CRenderTarget::RemoveFromRenderTargetManager(this);
}
