/*
 * XREFs of ?reset@?$com_ptr_t@VIDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801851A0
 * Callers:
 *     ?EnsureShaderResourceView@CD2DBitmap@@IEAAJXZ @ 0x180130D80 (-EnsureShaderResourceView@CD2DBitmap@@IEAAJXZ.c)
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801DF110 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GetSpectreTexture@CSceneResourceManager@@QEAAJPEAVCResource@@PEAPEAUISpectreTexture@@@Z @ 0x18022F230 (-GetSpectreTexture@CSceneResourceManager@@QEAAJPEAVCResource@@PEAPEAUISpectreTexture@@@Z.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1802351BC (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z.c)
 *     ?ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1802509A0 (-ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CGammaBlendLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x180251070 (-RenderLayer@CGammaBlendLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLanczos@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3D11_VIEWPORT@@@Z @ 0x1802513A4 (-RenderLanczos@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAE.c)
 *     ?GetSourceSwapChainTextureFormat@CCaptureRenderTarget@@IEAAJPEAW4DXGI_FORMAT@@@Z @ 0x18025768C (-GetSourceSwapChainTextureFormat@CCaptureRenderTarget@@IEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?EnsureRenderTargets@CVisualCapture@@MEAAJXZ @ 0x1802864B0 (-EnsureRenderTargets@CVisualCapture@@MEAAJXZ.c)
 *     ?EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ @ 0x1802A75A8 (-EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ.c)
 *     ?RecordUse@CSwapChainRealization@@UEAAJPEAVCDrawingContext@@@Z @ 0x1802AE070 (-RecordUse@CSwapChainRealization@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetSecondaryD2DBitmap@CTextureCollection@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802B19FC (-GetSecondaryD2DBitmap@CTextureCollection@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?ReleaseResources@CCachedTexture@@AEAAXXZ @ 0x1802B1F4C (-ReleaseResources@CCachedTexture@@AEAAXXZ.c)
 *     ?Initialize@?$CDeviceTextureT@VICrossAdapterTexture@@@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z @ 0x1802B7F64 (-Initialize@-$CDeviceTextureT@VICrossAdapterTexture@@@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11T.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IDeviceTexture,wil::err_returncode_policy>::reset(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  *result = 0LL;
  if ( v2 )
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return result;
}
