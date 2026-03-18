/*
 * XREFs of ?UpdateAlphaMode@CDDisplayRenderTarget@@IEAAXXZ @ 0x1801D4998
 * Callers:
 *     ?UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ @ 0x1801D4930 (-UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?SetAlphaMode@CDDisplaySwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1801DE4F0 (-SetAlphaMode@CDDisplaySwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 */

void __fastcall CDDisplayRenderTarget::UpdateAlphaMode(CDDisplayRenderTarget *this)
{
  enum DXGI_ALPHA_MODE v1; // edx

  v1 = DXGI_ALPHA_MODE_PREMULTIPLIED;
  if ( *((_DWORD *)this + 58) <= 1u )
    v1 = DXGI_ALPHA_MODE_IGNORE;
  if ( *((_DWORD *)this + 33) != v1 )
  {
    *((_DWORD *)this + 33) = v1;
    CDDisplaySwapChain::SetAlphaMode((CDDisplaySwapChain *)(*((_QWORD *)this + 27) + 24LL), v1);
    CTargetDirtyBase<8>::SetFullDirty((__int64)this + 30224);
  }
}
