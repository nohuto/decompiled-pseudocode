/*
 * XREFs of Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline @ 0x14001EAE8
 * Callers:
 *     ?ConsumerPostMessage@CFlipManager@@QEAAXPEAVCFlipConsumerMessage@@PEAPEAUPresentedContentOverlayInfo@@@Z @ 0x140019E2C (-ConsumerPostMessage@CFlipManager@@QEAAXPEAVCFlipConsumerMessage@@PEAPEAUPresentedContentOverlay.c)
 *     ?IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14001A4B8 (-IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K_N@Z.c)
 *     ?ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z @ 0x14001A7BC (-ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14001D8F4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14001D924 (-ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z.c)
 *     ?FlipManagerDwmProcessFlipManagerSignal@@YAXPEAU_LIST_ENTRY@@_K@Z @ 0x14001E0E0 (-FlipManagerDwmProcessFlipManagerSignal@@YAXPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?Release@CCompositionFrame@@UEAAJXZ @ 0x14001E210 (-Release@CCompositionFrame@@UEAAJXZ.c)
 *     ?Discard@CCompositionFrame@@UEAAXXZ @ 0x14001E5A0 (-Discard@CCompositionFrame@@UEAAXXZ.c)
 *     ?Confirm@CCompositionFrame@@UEAAXXZ @ 0x14001E8E0 (-Confirm@CCompositionFrame@@UEAAXXZ.c)
 *     ?PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z @ 0x14001EC30 (-PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z.c)
 *     ??0CAdapter@@IEAA@I@Z @ 0x140036C5C (--0CAdapter@@IEAA@I@Z.c)
 *     ?AddContent@CFlipManager@@QEAAJ_KPEAVCFlipPropertySet@@@Z @ 0x1400449B8 (-AddContent@CFlipManager@@QEAAJ_KPEAVCFlipPropertySet@@@Z.c)
 *     ?Initialize@CContentResource@@IEAAJPEAUPresentationSurfaceInfo@@@Z @ 0x1400451FC (-Initialize@CContentResource@@IEAAJPEAUPresentationSurfaceInfo@@@Z.c)
 *     ?GetInfo@CCompositionSwapchainBuffer@@UEBAJPEAUCSM_BUFFER_INFO@@@Z @ 0x140055BC0 (-GetInfo@CCompositionSwapchainBuffer@@UEBAJPEAUCSM_BUFFER_INFO@@@Z.c)
 *     ?Initialize@CFlipManager@@IEAAJPEAX@Z @ 0x14005E0A0 (-Initialize@CFlipManager@@IEAAJPEAX@Z.c)
 *     ?FlipManagerCreateFlipObjectHandle@@YAJPEAUFlipManagerObject@@_KPEAPEAX@Z @ 0x14006BDC8 (-FlipManagerCreateFlipObjectHandle@@YAJPEAUFlipManagerObject@@_KPEAPEAX@Z.c)
 *     ??1CAdapter@@IEAA@XZ @ 0x1400A19BC (--1CAdapter@@IEAA@XZ.c)
 *     ?Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z @ 0x1400A44D0 (-Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z.c)
 *     ?Delete@CFlipManager@@MEAAJPEAX@Z @ 0x1400A4570 (-Delete@CFlipManager@@MEAAJPEAX@Z.c)
 *     ??1DXGSESSIONDATA@@QEAA@XZ @ 0x140201C2C (--1DXGSESSIONDATA@@QEAA@XZ.c)
 * Callees:
 *     Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledFallback @ 0x1400678E4 (Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledFallback.c)
 */

__int64 Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CompSwapchainRenderAndPresentSync__private_featureState & 0x10) != 0 )
    return Feature_CompSwapchainRenderAndPresentSync__private_featureState & 1;
  else
    return Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledFallback(
             (unsigned int)Feature_CompSwapchainRenderAndPresentSync__private_featureState,
             3LL);
}
