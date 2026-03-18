/*
 * XREFs of ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800691D0
 * Callers:
 *     ?PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180033A40 (-PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OV.c)
 *     ?PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180034350 (-PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_P.c)
 *     ?Present@CLegacySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x180034610 (-Present@CLegacySwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@I@Z.c)
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ @ 0x18004A9AC (-RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ.c)
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z @ 0x18004AD90 (-CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z.c)
 *     ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z @ 0x180056978 (-Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z.c)
 *     ?EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x180066020 (-EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComma.c)
 *     ?EmitGeometry@CMegaRectBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@@Z @ 0x180067310 (-EmitGeometry@CMegaRectBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@@Z.c)
 *     ?GetPresentStatisticsDWM@CLegacySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x1800685F0 (-GetPresentStatisticsDWM@CLegacySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?PrepareIndexBuffer@CD3DBatchExecutionContext@@AEAAJI@Z @ 0x1800687E0 (-PrepareIndexBuffer@CD3DBatchExecutionContext@@AEAAJI@Z.c)
 *     ?BeginAppend@CD3DDynamicAppendBuffer@@QEAAJII@Z @ 0x180068C20 (-BeginAppend@CD3DDynamicAppendBuffer@@QEAAJII@Z.c)
 *     ?Map@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x180068EB0 (-Map@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180069080 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?AdvanceFrame@CDeviceManager@@IEAA_NXZ @ 0x1800695A0 (-AdvanceFrame@CDeviceManager@@IEAA_NXZ.c)
 *     ?PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z @ 0x1800698E0 (-PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z.c)
 *     ?PopTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z @ 0x18006A6F0 (-PopTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F3BB4 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F4650 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD2DContext@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180102B5C (-TranslateDXGIorD3DErrorInContext@CD2DContext@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?Initialize@CRedirectedGDISurface@@IEAAJXZ @ 0x180112104 (-Initialize@CRedirectedGDISurface@@IEAAJXZ.c)
 *     ?EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x18011B180 (-EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComm.c)
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x180123968 (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180123DDC (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x180123EB4 (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180125AD0 (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?GetPrimaryAdapter@CDisplayManager@@QEAAJPEAPEAUIDXGIAdapter1@@@Z @ 0x180128E34 (-GetPrimaryAdapter@CDisplayManager@@QEAAJPEAPEAUIDXGIAdapter1@@@Z.c)
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x18012C310 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURF.c)
 *     ?GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x180131820 (-GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     ?EndDraw@CD2DContext@@AEAAJXZ @ 0x1801359A0 (-EndDraw@CD2DContext@@AEAAJXZ.c)
 *     ?GetDXGIOutput@CDisplayManager@@QEAAJIPEAPEAUIDXGIOutputDWM@@@Z @ 0x18014A368 (-GetDXGIOutput@CDisplayManager@@QEAAJIPEAPEAUIDXGIOutputDWM@@@Z.c)
 *     ?GetAdapter@CDisplayManager@@QEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z @ 0x18019D57C (-GetAdapter@CDisplayManager@@QEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z.c)
 *     ?GetDXGIOutput@CDisplayManager@@QEAAJU_LUID@@0IPEAPEAUIDXGIOutputDWM@@@Z @ 0x18019D6C0 (-GetDXGIOutput@CDisplayManager@@QEAAJU_LUID@@0IPEAPEAUIDXGIOutputDWM@@@Z.c)
 *     ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x1802584CC (-EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ.c)
 *     ?GetRemotingDXGIOutput@CDisplayManager@@QEAAJPEAUHMONITOR__@@PEAPEAUIDXGIOutputDWM@@@Z @ 0x18029B8D0 (-GetRemotingDXGIOutput@CDisplayManager@@QEAAJPEAUHMONITOR__@@PEAPEAUIDXGIOutputDWM@@@Z.c)
 *     ?ValidateLuidAndMonitor@CDisplayManager@@QEAAJU_LUID@@PEAUHMONITOR__@@@Z @ 0x18029BAA4 (-ValidateLuidAndMonitor@CDisplayManager@@QEAAJU_LUID@@PEAUHMONITOR__@@@Z.c)
 *     ?GetPresentStatistics@CCompSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x1802A3830 (-GetPresentStatistics@CCompSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TranslateDXGIorD3DErrorInContext(int a1, int a2, _DWORD *a3)
{
  unsigned __int8 v3; // r9
  int v4; // edx
  unsigned int v6; // ecx
  int v7; // edx
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // edx
  bool v11; // zf
  unsigned int v12; // ecx
  int v13; // eax

  v3 = 0;
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        if ( a1 == -2147467259 )
          goto LABEL_11;
        if ( a1 == -2005270491 || a1 == 142213127 || a1 == -2005270494 )
          goto LABEL_41;
        if ( (unsigned int)(a1 + 2005270523) <= 2 || a1 == -2005532292 || a1 == -2005270496 )
          goto LABEL_11;
        v11 = a1 == -2005270428;
        goto LABEL_81;
      case 2:
        v8 = (unsigned int)(a1 + 2005270524);
        if ( (unsigned int)v8 <= 0x21 )
        {
          v9 = 0x240000001LL;
          if ( _bittest64(&v9, v8) )
            goto LABEL_41;
        }
        if ( a1 == 142213127 )
          goto LABEL_41;
        if ( (unsigned int)(a1 + 2005270526) <= 0x1E )
        {
          v10 = 1073741865;
          if ( _bittest(&v10, a1 + 2005270526) )
            goto LABEL_11;
        }
        v11 = a1 == -2147467259;
LABEL_81:
        if ( v11 )
          goto LABEL_11;
        return v3;
      case 3:
        if ( a1 != -805306367 && a1 != -805306246 && a1 != -805306355 && a1 != -805306282 )
          goto LABEL_52;
        goto LABEL_41;
      case 4:
        if ( a1 != -2005270526 && a1 != -2147467263 && a1 != -2147024809 && a1 != -2147024865 && a1 != -2003304291 )
          return v3;
LABEL_41:
        *a3 = -2003304442;
        return 1LL;
      case 5:
      case 6:
LABEL_52:
        v12 = a1 + 2005270523;
        if ( v12 <= 0x1D )
        {
          v13 = 671088645;
          if ( _bittest(&v13, v12) )
            goto LABEL_11;
        }
        return v3;
      case 7:
        if ( a1 != -2003304307
          && a1 != -2005530509
          && a1 != -2147024809
          && a1 != -2005270523
          && a1 != -2005270521
          && a1 != -2003304442 )
        {
          return v3;
        }
        goto LABEL_35;
      case 8:
        if ( a1 == -2003292404
          || a1 == -2005532292
          || a1 == -2005270523
          || a1 == -2003304307
          || a1 == -2003304442
          || a1 == -2005530509
          || a1 == -2147024809
          || a1 == -2005270521
          || a1 == -2005530512
          || a1 == -1071243253 )
        {
          goto LABEL_35;
        }
        if ( a1 != -2003304290 )
          return v3;
        *a3 = 0;
        return 1LL;
      case 9:
        if ( a1 == -2147024890 || a1 == -2147023728 || a1 == -2147024895 || a1 == -2147024809 )
          goto LABEL_35;
        if ( a1 != -1071243253 )
          return v3;
        *a3 = 0;
        return 1LL;
      case 10:
        if ( a1 == -2147023728 || a1 == -1071243253 )
          goto LABEL_35;
        if ( a1 != -2147024890 )
          return v3;
        *a3 = 0;
        return 1LL;
      case 11:
        if ( a1 == -1071243253 || a1 == -2147023728 || a1 == -2147024890 )
        {
LABEL_35:
          *a3 = 0;
          return 1LL;
        }
        if ( a1 != -2147024809 )
          return v3;
        *a3 = 0;
        return 1LL;
      case 12:
      case 13:
        if ( a1 != -2003292412 )
          return v3;
        *a3 = -2003304307;
        return 1;
      case 14:
        if ( a1 == -2147024882 )
        {
          *a3 = -2005532292;
          return 1LL;
        }
        v6 = a1 + 2005270523;
        if ( v6 > 0x1B )
          return v3;
        v7 = 134217733;
        if ( !_bittest(&v7, v6) )
          return 0LL;
        break;
      case 15:
        goto LABEL_2;
      default:
        return v3;
    }
    goto LABEL_11;
  }
LABEL_2:
  if ( (unsigned int)(a1 + 2005270523) <= 0x1B && (v4 = 134217733, _bittest(&v4, a1 + 2005270523)) || a1 == -2003238900 )
  {
LABEL_11:
    *a3 = -2003304307;
    return 1;
  }
  if ( a1 == -2005270494 )
  {
    *a3 = -2003304442;
    return 1;
  }
  return v3;
}
