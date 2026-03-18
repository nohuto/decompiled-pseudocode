/*
 * XREFs of ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x180046630
 * Callers:
 *     ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x180044E40 (-SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 *     ?IsPastDelay@CNaturalAnimation@@AEAA_NXZ @ 0x180045304 (-IsPastDelay@CNaturalAnimation@@AEAA_NXZ.c)
 *     ?MarkStaleRealizations@CWindowBackgroundBitmapProducer@@QEAAX_N@Z @ 0x1800456B4 (-MarkStaleRealizations@CWindowBackgroundBitmapProducer@@QEAAX_N@Z.c)
 *     ?ProcessSetSeekState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETSEEKSTATE@@@Z @ 0x180045738 (-ProcessSetSeekState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATIO.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180046660 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResu.c)
 *     ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180078480 (-RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180125850 (-EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEBG@Z @ 0x18012A6A8 (-EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEBG@Z.c)
 *     ?StartInertia@CScrollAnimation@@QEAAXM_N@Z @ 0x18013E42C (-StartInertia@CScrollAnimation@@QEAAXM_N@Z.c)
 *     ?BeginUpdateCursors@CGlobalComposition@@UEAAXXZ @ 0x18018A020 (-BeginUpdateCursors@CGlobalComposition@@UEAAXXZ.c)
 *     ?FrameTick@CSceneResourceManager@@QEAAXXZ @ 0x180192218 (-FrameTick@CSceneResourceManager@@QEAAXXZ.c)
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x1801A0388 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x1801ADF20 (-ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRea.c)
 *     ?UpdateSwapChainTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXW4SwapChainStat@CCompositionSurfaceInfo@@_N@Z @ 0x1801BB0A0 (-UpdateSwapChainTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXW4SwapChainStat@CComposi.c)
 *     ??0CAnimation@@QEAA@PEAVCComposition@@@Z @ 0x1801BF9E0 (--0CAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ?ProcessSetPaused@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETPAUSED@@@Z @ 0x1801C348C (-ProcessSetPaused@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETPAUSED@@@Z.c)
 *     ?CalculateAnimationElapsedTimeInSeconds@CNaturalAnimation@@AEAAMXZ @ 0x1801CA34C (-CalculateAnimationElapsedTimeInSeconds@CNaturalAnimation@@AEAAMXZ.c)
 *     ?ProcessSetSeek@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETSEEK@@@Z @ 0x1801CABAC (-ProcessSetSeek@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETSEEK@@@Z.c)
 *     ?CalculateCurrentElapsedTime@CScrollAnimation@@AEAAMXZ @ 0x1801CFFA0 (-CalculateCurrentElapsedTime@CScrollAnimation@@AEAAMXZ.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@UDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW45KeyframeAnimationDelayBehavior@@MW45KeyframeAnimationDirection@@MW45KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1801E1D08 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@UDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EX.c)
 *     ?Present@CCaptureRenderTarget@@MEAAJXZ @ 0x1801FCCF0 (-Present@CCaptureRenderTarget@@MEAAJXZ.c)
 *     ?ProcessTrigger@CLegacyAnimationTrigger@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYANIMATIONTRIGGER_TRIGGER@@@Z @ 0x18021A384 (-ProcessTrigger@CLegacyAnimationTrigger@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYANIMATIONT.c)
 *     ?OnCursorIdChanged@CCursorVisual@@IEAAXXZ @ 0x18021F828 (-OnCursorIdChanged@CCursorVisual@@IEAAXXZ.c)
 *     ?StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ @ 0x18027A010 (-StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ.c)
 *     ?StartInContact@CScrollAnimation@@AEAAXXZ @ 0x180289A00 (-StartInContact@CScrollAnimation@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int64 __fastcall CComposition::GetFrameTargetTime(CComposition *this)
{
  return *(_QWORD *)((*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 39) + 24LL))(*((_QWORD *)this + 39)) + 24);
}
