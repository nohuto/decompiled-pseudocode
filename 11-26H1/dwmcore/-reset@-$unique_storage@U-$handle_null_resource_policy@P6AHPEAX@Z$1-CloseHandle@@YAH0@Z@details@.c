/*
 * XREFs of ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180132948
 * Callers:
 *     ?WaitForWork@CScheduler@@QEAAXPEAUIMessageLoopExtensions@@@Z @ 0x18002F990 (-WaitForWork@CScheduler@@QEAAXPEAUIMessageLoopExtensions@@@Z.c)
 *     ?CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@PEAVID2DBitmapCacheSource@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1801306C8 (-CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@PEAVID2DBitmapCacheSource@@PEAPEAVC.c)
 *     ?StartCompositionThread@CConnection@@IEAAJH@Z @ 0x180131F18 (-StartCompositionThread@CConnection@@IEAAJH@Z.c)
 *     ??$_Emplace_back_with_unused_capacity@AEAU_LUID@@@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@AEAAAEAVAdapterInfo@CGlobalSurfaceManager@@AEAU_LUID@@@Z @ 0x180132180 (--$_Emplace_back_with_unused_capacity@AEAU_LUID@@@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$T@Z @ 0x18013221C (--4-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18013223C (--4-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-Clo_ea_18013223C.c)
 *     ?ProcessSetFlipManager@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETFLIPMANAGER@@@Z @ 0x180132278 (-ProcessSetFlipManager@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDE.c)
 *     ?EnsureDisplaySurface@CDxHandleBitmapRealization@@IEAAJXZ @ 0x1801323EC (-EnsureDisplaySurface@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ?ReleaseFlipResources@CCaptureRenderTarget@@IEAAXXZ @ 0x180132740 (-ReleaseFlipResources@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?Initialize@CCompositionSwapchainStatistics@@IEAAJPEAX_K@Z @ 0x180132868 (-Initialize@CCompositionSwapchainStatistics@@IEAAJPEAX_K@Z.c)
 *     ?EnsureDisplaySurface@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1801333D0 (-EnsureDisplaySurface@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?CreateTokenThread@CSurfaceManager@@IEAAJP6AKPEAX@ZPEBG@Z @ 0x180133FF8 (-CreateTokenThread@CSurfaceManager@@IEAAJP6AKPEAX@ZPEBG@Z.c)
 *     ?CreateSwapChainBuffer@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBUD2D_SIZE_U@@IW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MAEBUDDisplayTargetResources@@PEAUIDisplayPrimaryDescription@Core@Display@Devices@Windows@@PEAPEAVCDDisplaySwapChainBuffer@@@Z @ 0x180134294 (-CreateSwapChainBuffer@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBUD2D_SIZE_U@@IW4DXGI_ALPHA_MODE.c)
 *     ?EnsureDxDisplayModeChangedEvent@CRenderTargetManager@@AEAAJXZ @ 0x1801509A0 (-EnsureDxDisplayModeChangedEvent@CRenderTargetManager@@AEAAJXZ.c)
 *     ?SetSyncRefreshCountWaitTarget@CLegacyRenderTarget@@UEAAJIPEAPEAX@Z @ 0x1801847C0 (-SetSyncRefreshCountWaitTarget@CLegacyRenderTarget@@UEAAJIPEAPEAX@Z.c)
 *     ?CreateWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@PEAPEAUID3D12Fence@@@Z @ 0x1801DCA28 (-CreateWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@PEAPEAUID3D12Fence@@@Z.c)
 *     ?Initialize@CGlobalSurfaceManager@@IEAAJPEAPEAX0@Z @ 0x1801E0558 (-Initialize@CGlobalSurfaceManager@@IEAAJPEAPEAX0@Z.c)
 *     ?Initialize@CScheduler@@QEAAJPEAUIMessageLoopExtensions@@PEAX11@Z @ 0x1801E4434 (-Initialize@CScheduler@@QEAAJPEAUIMessageLoopExtensions@@PEAX11@Z.c)
 *     ?Initialize@CChannel@@AEAAJXZ @ 0x18020155C (-Initialize@CChannel@@AEAAJXZ.c)
 *     ?ProcessCreate@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_CREATE@@@Z @ 0x180206B10 (-ProcessCreate@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGE.c)
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x18022C4D4 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 *     ??$_Emplace_reallocate@AEAU_LUID@@@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@AEAAPEAVAdapterInfo@CGlobalSurfaceManager@@QEAV23@AEAU_LUID@@@Z @ 0x18022DC04 (--$_Emplace_reallocate@AEAU_LUID@@@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V-$allocator@VAd.c)
 *     ?StartWorkerThread@CComputeScribbleScheduler@@AEAAJXZ @ 0x18025D220 (-StartWorkerThread@CComputeScribbleScheduler@@AEAAJXZ.c)
 *     ?Stop@CKstBase@@QEAAXXZ @ 0x1802950BC (-Stop@CKstBase@@QEAAXXZ.c)
 *     ?CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x180296E40 (-CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFor.c)
 *     ?ShareToD3D12@CD3DDevice@@QEAAJPEAUIUnknown@@PEAPEAUID3D12Resource@@@Z @ 0x180298078 (-ShareToD3D12@CD3DDevice@@QEAAJPEAUIUnknown@@PEAPEAUID3D12Resource@@@Z.c)
 *     ?CreateCompositionSwapChain@CD3DDevice@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVCCompSwapChain@@@Z @ 0x18029904C (-CreateCompositionSwapChain@CD3DDevice@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTarg.c)
 *     ?EnsureFlipAwayFenceForPlane@CDDisplaySwapChain@@UEAAJIPEAUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@@Z @ 0x18029A8A0 (-EnsureFlipAwayFenceForPlane@CDDisplaySwapChain@@UEAAJIPEAUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE.c)
 *     ?InitializeVBlankWaitEventHandle@CDDisplaySwapChain@@IEAAJXZ @ 0x18029AC3C (-InitializeVBlankWaitEventHandle@CDDisplaySwapChain@@IEAAJXZ.c)
 *     ?CreateTaskPool@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisplayTaskPoolResources@@@Z @ 0x18029E1AC (-CreateTaskPool@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisplay.c)
 *     ?Initialize@CDummyRemotingSwapChain@@IEAAJPEBG@Z @ 0x1802A2C04 (-Initialize@CDummyRemotingSwapChain@@IEAAJPEBG@Z.c)
 *     ?NotifyInvalidResource@CCompSwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802A3B10 (-NotifyInvalidResource@CCompSwapChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?EnsureFlipAwayFenceForPlane@CLegacySwapChain@@UEAAJIPEAUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@@Z @ 0x1802A5BA0 (-EnsureFlipAwayFenceForPlane@CLegacySwapChain@@UEAAJIPEAUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@.c)
 *     ?EnsureBitmapDest@CLegacyRemotingSwapChain@@IEAAJXZ @ 0x1802A8084 (-EnsureBitmapDest@CLegacyRemotingSwapChain@@IEAAJXZ.c)
 *     ?EnsureDisplaySurface@CSwapChainRealization@@IEAAJXZ @ 0x1802ACDC4 (-EnsureDisplaySurface@CSwapChainRealization@@IEAAJXZ.c)
 *     ?OpenOnAdapter@CCrossAdapterTexture@@UEBAJU_LUID@@PEAPEAVICrossAdapterTexture@@@Z @ 0x1802B8290 (-OpenOnAdapter@CCrossAdapterTexture@@UEBAJU_LUID@@PEAPEAVICrossAdapterTexture@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        void **a1,
        void *a2)
{
  void *v2; // rdi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 && v2 != (void *)-1LL )
  {
    LastError = GetLastError();
    CloseHandle(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
