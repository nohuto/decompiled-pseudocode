/*
 * XREFs of Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140053634
 * Callers:
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z @ 0x14020547C (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z.c)
 *     ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x140205EE8 (-DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z.c)
 *     ?InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1402068D8 (-InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHA.c)
 *     ?OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN_CLIENT_SURF_INFO@1@PEAXH_N@Z @ 0x140206CB4 (-OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN.c)
 *     ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX_NH@Z @ 0x14020732C (-OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX_NH@Z.c)
 *     DxgkAddSurfaceToSwapChain @ 0x140208210 (DxgkAddSurfaceToSwapChain.c)
 *     DxgkCreateSwapChain @ 0x140208650 (DxgkCreateSwapChain.c)
 *     DxgkRemoveSurfaceFromSwapChain @ 0x140209190 (DxgkRemoveSurfaceFromSwapChain.c)
 *     DxgkUnOrderedPresentSwapChain @ 0x1402094A0 (DxgkUnOrderedPresentSwapChain.c)
 *     DxgkAcquireSwapChain @ 0x140300AB0 (DxgkAcquireSwapChain.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N1@Z @ 0x1403018A0 (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N1@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x140301D84 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAIH@Z @ 0x14030261C (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAIH@Z.c)
 *     ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@_KH@Z @ 0x140302A58 (-InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@_KH@Z.c)
 *     ?InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@_K@Z @ 0x1403068C4 (-InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@_K@Z.c)
 *     ?OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHHH@Z @ 0x1403FFB38 (-OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHHH@Z.c)
 * Callees:
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledFallback @ 0x140067938 (Feature_IdSwapChainUserModeSync__private_IsEnabledFallback.c)
 */

__int64 Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_IdSwapChainUserModeSync__private_featureState & 0x10) != 0 )
    return Feature_IdSwapChainUserModeSync__private_featureState & 1;
  else
    return Feature_IdSwapChainUserModeSync__private_IsEnabledFallback(
             (unsigned int)Feature_IdSwapChainUserModeSync__private_featureState,
             3LL);
}
