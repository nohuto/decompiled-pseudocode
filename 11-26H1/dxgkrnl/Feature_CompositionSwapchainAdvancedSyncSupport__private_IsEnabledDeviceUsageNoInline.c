/*
 * XREFs of Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline @ 0x14001B070
 * Callers:
 *     ?ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x140018DCC (-ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEA.c)
 *     ??1FlipManagerTokenIFlipInfo@@QEAA@XZ @ 0x1400194D0 (--1FlipManagerTokenIFlipInfo@@QEAA@XZ.c)
 *     ??1CFlipManagerSignal@@UEAA@XZ @ 0x140019FF4 (--1CFlipManagerSignal@@UEAA@XZ.c)
 *     ??0CFlipManagerSignal@@IEAA@_K_NPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x14001A120 (--0CFlipManagerSignal@@IEAA@_K_NPEAUFlipManagerTokenIFlipInfo@@@Z.c)
 *     ?IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14001A4B8 (-IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K_N@Z.c)
 *     ?GetIndependentFlipTrueImmediate@CIFlipPresentHistoryTokenFlipManager@@UEBA_NXZ @ 0x14001AF80 (-GetIndependentFlipTrueImmediate@CIFlipPresentHistoryTokenFlipManager@@UEBA_NXZ.c)
 *     ?GetVariableRefreshOverrideEligible@CIFlipPresentHistoryTokenFlipManager@@UEBA_NXZ @ 0x14001AFD0 (-GetVariableRefreshOverrideEligible@CIFlipPresentHistoryTokenFlipManager@@UEBA_NXZ.c)
 *     ?GetFlipInterval@CIFlipPresentHistoryTokenFlipManager@@UEBA?BW4D3DDDI_FLIPINTERVAL_TYPE@@XZ @ 0x14001B020 (-GetFlipInterval@CIFlipPresentHistoryTokenFlipManager@@UEBA-BW4D3DDDI_FLIPINTERVAL_TYPE@@XZ.c)
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x14001CD74 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 *     ?PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x140023B84 (-PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpd.c)
 *     ?IssueFlipManagerSignal@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBU_LUID@@PEAXPEAU_KEVENT@@_K@Z @ 0x1400A161C (-IssueFlipManagerSignal@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBU_LUID@@PEAXPEAU_KEVE.c)
 *     ?IssueFlipManagerSignal@CAdapter@@QEAAJPEAUFlipManagerObject@@PEAXPEAU_KEVENT@@_K@Z @ 0x1400A2138 (-IssueFlipManagerSignal@CAdapter@@QEAAJPEAUFlipManagerObject@@PEAXPEAU_KEVENT@@_K@Z.c)
 *     CheckFeatureOSSupport @ 0x140288B70 (CheckFeatureOSSupport.c)
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1402F1C34 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 * Callees:
 *     Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledFallback @ 0x140067954 (Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledFallback.c)
 */

__int64 Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CompositionSwapchainAdvancedSyncSupport__private_featureState & 0x10) != 0 )
    return Feature_CompositionSwapchainAdvancedSyncSupport__private_featureState & 1;
  else
    return Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledFallback(
             (unsigned int)Feature_CompositionSwapchainAdvancedSyncSupport__private_featureState,
             3LL);
}
