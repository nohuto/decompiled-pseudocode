/*
 * XREFs of Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline @ 0x140019D4C
 * Callers:
 *     ?GetDirtyRegionRectCount@CIFlipPresentHistoryTokenFlipManager@@UEBAIXZ @ 0x140018930 (-GetDirtyRegionRectCount@CIFlipPresentHistoryTokenFlipManager@@UEBAIXZ.c)
 *     ?GetDirtyRegionRects@CIFlipPresentHistoryTokenFlipManager@@UEBAPEBUtagRECT@@XZ @ 0x140018960 (-GetDirtyRegionRects@CIFlipPresentHistoryTokenFlipManager@@UEBAPEBUtagRECT@@XZ.c)
 *     ?Initialize@CFlipContentToken@@QEAAJIPEBUtagRECT@@@Z @ 0x1400199F0 (-Initialize@CFlipContentToken@@QEAAJIPEBUtagRECT@@@Z.c)
 *     ?CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipPropertySet@@_NAEAU_LIST_ENTRY@@@Z @ 0x14001ACD0 (-CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipProp.c)
 *     ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@_K@Z @ 0x140023164 (-PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpd.c)
 *     ?PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x140023B84 (-PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpd.c)
 * Callees:
 *     Feature_CompSwapchainDX12Support__private_IsEnabledFallback @ 0x140067A38 (Feature_CompSwapchainDX12Support__private_IsEnabledFallback.c)
 */

__int64 Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CompSwapchainDX12Support__private_featureState & 0x10) != 0 )
    return Feature_CompSwapchainDX12Support__private_featureState & 1;
  else
    return Feature_CompSwapchainDX12Support__private_IsEnabledFallback(
             (unsigned int)Feature_CompSwapchainDX12Support__private_featureState,
             3LL);
}
