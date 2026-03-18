/*
 * XREFs of DxgkGetWin32kImportTable @ 0x14001F42C
 * Callers:
 *     ?FreeQueuedUpdates@CFlipManager@@AEAAXXZ @ 0x14001862C (-FreeQueuedUpdates@CFlipManager@@AEAAXXZ.c)
 *     wil::details::lambda_call__lambda_88f3ed85026e62755ea077db9998d4dd___::reset @ 0x140018740 (wil--details--lambda_call__lambda_88f3ed85026e62755ea077db9998d4dd___--reset.c)
 *     ?PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z @ 0x140018B90 (-PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z.c)
 *     ?ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x140018DCC (-ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEA.c)
 *     _lambda_45b452eeef8f878a1390d07846441040_::operator() @ 0x140019548 (_lambda_45b452eeef8f878a1390d07846441040_--operator().c)
 *     ?OpenEndpoint@CFlipManager@@QEAAJHPEAPEAX@Z @ 0x14001A1B8 (-OpenEndpoint@CFlipManager@@QEAAJHPEAPEAX@Z.c)
 *     ?IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14001A4B8 (-IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K_N@Z.c)
 *     ?ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z @ 0x14001A7BC (-ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z.c)
 *     ?CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipPropertySet@@_NAEAU_LIST_ENTRY@@@Z @ 0x14001ACD0 (-CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipProp.c)
 *     ?SetContent@CFlipManager@@QEAAJ_K0PEAVCFlipPropertySet@@@Z @ 0x14001C354 (-SetContent@CFlipManager@@QEAAJ_K0PEAVCFlipPropertySet@@@Z.c)
 *     ?EnqueueConsumerUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x14001C5F4 (-EnqueueConsumerUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?ProcessPendingProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x14001C7D8 (-ProcessPendingProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x14001CD74 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 *     ?UpdateNextConsumerPresentIdForUpdate@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@I@Z @ 0x14001D2A8 (-UpdateNextConsumerPresentIdForUpdate@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@I@Z.c)
 *     ?RemoveUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x14001D790 (-RemoveUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 *     ?AddUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x14001D894 (-AddUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 *     ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14001D924 (-ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z.c)
 *     NtTokenManagerCreateCompositionTokenHandle @ 0x14001DAE0 (NtTokenManagerCreateCompositionTokenHandle.c)
 *     ?PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z @ 0x14001EC30 (-PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z.c)
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14001EDE0 (-DxgkQuerySwapChainBindingStatus@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?NotifyPendingFlipPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14001F0D0 (-NotifyPendingFlipPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x14001FA50 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x14001FD20 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1400206F4 (-CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I.c)
 *     ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAU_LIST_ENTRY@@PEAVCCompositionFrame@@@Z @ 0x1400220B4 (-ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAU_LIST_ENTRY@@PEAVCCompositionFrame@@@Z.c)
 *     ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@_K@Z @ 0x140023164 (-PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpd.c)
 *     ?FlipManagerCreateProducerTokenInitInfo@@YAJPEAXU_LUID@@_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x140023904 (-FlipManagerCreateProducerTokenInitInfo@@YAJPEAXU_LUID@@_N_KIPEAUFlipPropertyItem@@PEAUFlipManag.c)
 *     NtTokenManagerCreateFlipObjectTokenHandle @ 0x140023FB0 (NtTokenManagerCreateFlipObjectTokenHandle.c)
 *     ?ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z @ 0x1400245EC (-ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z.c)
 *     ?PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@_K@Z @ 0x140024EA8 (-PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPrese.c)
 *     NtTokenManagerCreateFlipObjectReturnTokenHandle @ 0x140025570 (NtTokenManagerCreateFlipObjectReturnTokenHandle.c)
 *     NtTokenManagerThread @ 0x140026010 (NtTokenManagerThread.c)
 *     NtSetCompositionSurfaceBufferUsage @ 0x1400262E0 (NtSetCompositionSurfaceBufferUsage.c)
 *     ?InitializeAttributes@CFlipExBuffer@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x140026BDC (-InitializeAttributes@CFlipExBuffer@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?Initialize@CBufferRealization@@IEAAJ_N@Z @ 0x140026CE0 (-Initialize@CBufferRealization@@IEAAJ_N@Z.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x140026DB0 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtUnBindCompositionSurface @ 0x140027080 (NtUnBindCompositionSurface.c)
 *     NtBindCompositionSurface @ 0x140027340 (NtBindCompositionSurface.c)
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x1400277A0 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtOpenCompositionSurfaceRealizationInfo @ 0x140027E60 (NtOpenCompositionSurfaceRealizationInfo.c)
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x140028290 (NtQueryCompositionSurfaceRenderingRealization.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x140028460 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     ?OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAUCSM_RGNDATA_@@@Z @ 0x140029630 (-OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAUCSM_RGNDATA_@@@Z.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z @ 0x140029778 (-RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z.c)
 *     ?ClearCompositionSurfaceBinding@CContentResource@@QEAAJPEAPEAVCDisableScanoutToken@@@Z @ 0x140029854 (-ClearCompositionSurfaceBinding@CContentResource@@QEAAJPEAPEAVCDisableScanoutToken@@@Z.c)
 *     NtConfirmCompositionSurfaceIndependentFlipEntry @ 0x1400298F0 (NtConfirmCompositionSurfaceIndependentFlipEntry.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x140029AB0 (NtSetCompositionSurfaceDirectFlipState.c)
 *     ?RemoveContent@CFlipManager@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z @ 0x140029BFC (-RemoveContent@CFlipManager@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z.c)
 *     ?RemovePoolBuffer@CFlipManager@@QEAAJ_K@Z @ 0x14002A1DC (-RemovePoolBuffer@CFlipManager@@QEAAJ_K@Z.c)
 *     ?AddDisableScanoutToken@CTokenManager@@UEAAJAEAPEAVCDisableScanoutToken@@@Z @ 0x14003A1E0 (-AddDisableScanoutToken@CTokenManager@@UEAAJAEAPEAVCDisableScanoutToken@@@Z.c)
 *     ?Discard@CCompositionToken@@UEAAXXZ @ 0x14003A5A0 (-Discard@CCompositionToken@@UEAAXXZ.c)
 *     ?AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z @ 0x14003AFA8 (-AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z.c)
 *     ?ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ @ 0x14003B0E4 (-ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ.c)
 *     ?AddContent@CFlipManager@@QEAAJ_KPEAVCFlipPropertySet@@@Z @ 0x1400449B8 (-AddContent@CFlipManager@@QEAAJ_KPEAVCFlipPropertySet@@@Z.c)
 *     ?AddPoolBuffer@CFlipManager@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z @ 0x140044CF8 (-AddPoolBuffer@CFlipManager@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z.c)
 *     ?NotifyPendingFlipManagerPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x140045760 (-NotifyPendingFlipManagerPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?GetSwapChainRealizationInfo@CFlipExBuffer@@UEBAJ_NPEAIPEAUCSM_REALIZATION_INFO@@@Z @ 0x14004EA10 (-GetSwapChainRealizationInfo@CFlipExBuffer@@UEBAJ_NPEAIPEAUCSM_REALIZATION_INFO@@@Z.c)
 *     ?ConsumerIFlipTokenSubmitted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@@Z @ 0x1400543A0 (-ConsumerIFlipTokenSubmitted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@@Z.c)
 *     ?TokenThread@CTokenManager@@UEAAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x140059190 (-TokenThread@CTokenManager@@UEAAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 *     ?Initialize@CFlipManager@@IEAAJPEAX@Z @ 0x14005E0A0 (-Initialize@CFlipManager@@IEAAJPEAX@Z.c)
 *     ?SetTokenThreadProcess@CTokenManager@@IEAAXXZ @ 0x14005FAA4 (-SetTokenThreadProcess@CTokenManager@@IEAAXXZ.c)
 *     NtTokenManagerOpenSectionAndEvents @ 0x140063E00 (NtTokenManagerOpenSectionAndEvents.c)
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z @ 0x140066F64 (-CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x1400673F4 (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 *     ?PresentCancel@CFlipManager@@QEAAJ_K@Z @ 0x14006E014 (-PresentCancel@CFlipManager@@QEAAJ_K@Z.c)
 *     ?DestroySyncContextForFlipManager@CAdapterCollection@@QEAAXAEAU_LUID@@PEAUFlipManagerObject@@PEA_N@Z @ 0x1400A1490 (-DestroySyncContextForFlipManager@CAdapterCollection@@QEAAXAEAU_LUID@@PEAUFlipManagerObject@@PEA.c)
 *     ??1CFlipAwayFence@@QEAA@XZ @ 0x1400A28B4 (--1CFlipAwayFence@@QEAA@XZ.c)
 *     ?Create@CFlipAwayFence@@SAJPEAU_LIST_ENTRY@@IAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@PEAPEAV1@@Z @ 0x1400A293C (-Create@CFlipAwayFence@@SAJPEAU_LIST_ENTRY@@IAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@PEAPEAV1.c)
 *     ?DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1400A2AE4 (-DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1400A2DC0 (NtOpenCompositionSurfaceSectionInfo.c)
 *     ?Initialize@CCompositionBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x1400A38F4 (-Initialize@CCompositionBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z.c)
 *     ?Delete@CFlipManager@@MEAAJPEAX@Z @ 0x1400A4570 (-Delete@CFlipManager@@MEAAJPEAX@Z.c)
 *     ?CurrentProcessHasCapturePermission@OUTPUTDUPL_MGR@@AEAAHXZ @ 0x14036B95C (-CurrentProcessHasCapturePermission@OUTPUTDUPL_MGR@@AEAAHXZ.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 DxgkGetWin32kImportTable()
{
  int v1; // edx
  int v2; // r8d

  if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2650;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          2650,
          v1,
          v2,
          0LL,
          2,
          -1,
          (__int64)L"m_pGlobal != NULL",
          2650LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return *(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304968LL);
}
