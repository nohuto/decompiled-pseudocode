/*
 * XREFs of McTemplateU0xq_EventWriteTransfer @ 0x180199E68
 * Callers:
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x180032404 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z @ 0x18008D838 (-PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z.c)
 *     ?ApplyConfiguration@COverlayContext@@QEAAX_NPEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x1800F0094 (-ApplyConfiguration@COverlayContext@@QEAAX_NPEAV-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@.c)
 *     ?GetComputeScribbleInvalidRects@CScribbleSwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCMergedRect@@@Z @ 0x18012F240 (-GetComputeScribbleInvalidRects@CScribbleSwapChain@@UEAAJAEBVCMILMatrix@@AEBV-$TMilRect@IUMilRec.c)
 *     ?PreRender@CComputeScribbleFramebuffer@@QEAAX_K@Z @ 0x180130638 (-PreRender@CComputeScribbleFramebuffer@@QEAAX_K@Z.c)
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x180171000 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 *     ?DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KPEAUIDCompositionDirectInkSuperWetRenderer@@PEAUComputeScribbleLatencyData@@@Z @ 0x180193D7C (-DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbl.c)
 *     ?CheckOcclusionState@CLegacySwapChain@@UEBAJXZ @ 0x180199D10 (-CheckOcclusionState@CLegacySwapChain@@UEBAJXZ.c)
 *     ?PostRender@CComputeScribbleRenderer@@QEAAJPEAVIMonitorTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BA684 (-PostRender@CComputeScribbleRenderer@@QEAAJPEAVIMonitorTarget@@AEBV-$TMilRect@IUMilRectU@@UMil3D.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x1801E6704 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1801FD204 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ?LockForDraw@CComputeScribbleFramebuffer@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180214A94 (-LockForDraw@CComputeScribbleFramebuffer@@AEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_po.c)
 *     ?IsCandidateOverlayCompatible@COverlayContext@@IEBA_NPEAVCVisual@@PEBVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4OverlaySize@@_NI5@Z @ 0x180218B50 (-IsCandidateOverlayCompatible@COverlayContext@@IEBA_NPEAVCVisual@@PEBVCCompositionSurfaceInfo@@P.c)
 *     ?ClearDirectFlip@COverlayContext@@IEAAXXZ @ 0x18021E3C4 (-ClearDirectFlip@COverlayContext@@IEAAXXZ.c)
 *     ?HasOverlappingCornerRects@COverlayContext@@KA_NPEAVOverlayPlaneInfo@1@AEBV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18023C880 (-HasOverlappingCornerRects@COverlayContext@@KA_NPEAVOverlayPlaneInfo@1@AEBV-$vector_facade@PEAVO.c)
 *     ?IsCandidateDirectFlipCompatible@COverlayContext@@IEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@I_N@Z @ 0x18023CAF0 (-IsCandidateDirectFlipCompatible@COverlayContext@@IEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapCh.c)
 *     ?TransferCandidatesToPlaneAssignments@COverlayContext@@IEAAJXZ @ 0x18023DDF8 (-TransferCandidatesToPlaneAssignments@COverlayContext@@IEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0xq_EventWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-48h] BYREF
  __int64 *v6; // [rsp+40h] [rbp-38h]
  __int64 v7; // [rsp+48h] [rbp-30h]
  int *v8; // [rsp+50h] [rbp-28h]
  __int64 v9; // [rsp+58h] [rbp-20h]
  __int64 v10; // [rsp+90h] [rbp+18h] BYREF
  int v11; // [rsp+98h] [rbp+20h] BYREF

  v11 = a4;
  v10 = a3;
  v7 = 8LL;
  v6 = &v10;
  v9 = 4LL;
  v8 = &v11;
  return McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, a2, a3, 3u, &v5);
}
