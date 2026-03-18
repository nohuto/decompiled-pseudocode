/*
 * XREFs of ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x1801DC480
 * Callers:
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x180123968 (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x18014E468 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSW.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x1801B61B0 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET@@@Z @ 0x180213D20 (-ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTAR.c)
 *     ?ProcessCreate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_CREATE@@@Z @ 0x1802160E0 (-ProcessCreate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTAR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x1800E6AF4 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z @ 0x1800E6DE8 (-IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?GetDefaultDXGIColorSpaceForFormat@@YA?AW4DXGI_COLOR_SPACE_TYPE@@W4DXGI_FORMAT@@@Z @ 0x1800F7118 (-GetDefaultDXGIColorSpaceForFormat@@YA-AW4DXGI_COLOR_SPACE_TYPE@@W4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall COffScreenRenderTarget::UpdatePixelFormatInfo(COffScreenRenderTarget *this, int a2)
{
  int v2; // edx
  __int64 v3; // r8
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // r8
  enum DXGI_FORMAT v7; // edx
  int DefaultDXGIColorSpaceForFormat; // eax
  __int64 v9; // r8

  if ( IsValidPixelFormat(a2) )
  {
    *(_DWORD *)(v3 + 128) = v2;
    v5 = HasAlphaChannel(v2);
    *(_DWORD *)(v6 + 132) = v5 != 0 ? 1 : 3;
    DefaultDXGIColorSpaceForFormat = GetDefaultDXGIColorSpaceForFormat(v7);
    *(_DWORD *)(v9 + 136) = DefaultDXGIColorSpaceForFormat;
    return 0;
  }
  else
  {
    v4 = -2003292288;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292288, 0x106u, 0LL);
  }
  return v4;
}
