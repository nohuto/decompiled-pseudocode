/*
 * XREFs of ?TryUpdateWindowedSwapChainMetadata@CCaptureRenderTarget@@IEAAJPEA_N@Z @ 0x180257F84
 * Callers:
 *     ?RenderTargetDirty@CCaptureRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180257B50 (-RenderTargetDirty@CCaptureRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSourceSwapChainTextureFormat@CCaptureRenderTarget@@IEAAJPEAW4DXGI_FORMAT@@@Z @ 0x18025768C (-GetSourceSwapChainTextureFormat@CCaptureRenderTarget@@IEAAJPEAW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CCaptureRenderTarget::TryUpdateWindowedSwapChainMetadata(CCaptureRenderTarget *this, bool *a2)
{
  int SourceSwapChainTextureFormat; // eax
  unsigned int v5; // edi
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0;
  SourceSwapChainTextureFormat = CCaptureRenderTarget::GetSourceSwapChainTextureFormat(this, (enum DXGI_FORMAT *)&v9);
  v5 = SourceSwapChainTextureFormat;
  if ( SourceSwapChainTextureFormat >= 0 )
  {
    v7 = v9;
    if ( *((_BYTE *)this + 2828) != (v9 == 0) )
    {
      *((_BYTE *)this + 2828) = v9 == 0;
      *a2 = 1;
    }
    if ( *((_DWORD *)this + 708) != v7 )
    {
      *((_DWORD *)this + 708) = v7;
      *a2 = 1;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C1,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\capturerendertarget.cpp",
      (const char *)(unsigned int)SourceSwapChainTextureFormat);
    return v5;
  }
}
