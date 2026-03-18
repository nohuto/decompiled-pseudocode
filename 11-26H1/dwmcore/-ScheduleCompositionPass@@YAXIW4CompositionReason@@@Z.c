/*
 * XREFs of ?ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z @ 0x1800F3B80
 * Callers:
 *     ?OnProgressChanged@CAnimationController@@QEAAXXZ @ 0x1800232A8 (-OnProgressChanged@CAnimationController@@QEAAXXZ.c)
 *     ?Invalidate@CExpressionManager@@QEAAXXZ @ 0x18010E50C (-Invalidate@CExpressionManager@@QEAAXXZ.c)
 *     ?InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x18012A580 (-InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     ?EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ @ 0x180131620 (-EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NXZ @ 0x18016A5D0 (-UpdateAnimateValues@CAnimation@@UEAA_NXZ.c)
 *     ?ProcessUpdatePlaybackState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_UPDATEPLAYBACKSTATE@@@Z @ 0x18018EA5C (-ProcessUpdatePlaybackState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEA.c)
 *     ?UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z @ 0x18019275C (-UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z.c)
 *     ?WorkerThreadMain@CComputeScribbleScheduler@@AEAAKXZ @ 0x18019337C (-WorkerThreadMain@CComputeScribbleScheduler@@AEAAKXZ.c)
 *     ?UpdateDXGIFactory@CDisplayManager@@IEAAJXZ @ 0x1801D9E90 (-UpdateDXGIFactory@CDisplayManager@@IEAAJXZ.c)
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x1801FC7E4 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?IsRenderTime@COffScreenRenderTarget@@MEAA_NXZ @ 0x1801FCB30 (-IsRenderTime@COffScreenRenderTarget@@MEAA_NXZ.c)
 *     ?Present@CLegacyRenderTarget@@IEAAJXZ @ 0x18025303C (-Present@CLegacyRenderTarget@@IEAAJXZ.c)
 *     ?Present@CRemoteAppRenderTarget@@IEAAJXZ @ 0x180255D8C (-Present@CRemoteAppRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800F39E0 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 */

ULONG __fastcall ScheduleCompositionPass(ULONG a1, unsigned int a2)
{
  ULONG result; // eax

  result = a1;
  if ( g_pComposition )
  {
    if ( *((_BYTE *)g_pComposition + 6465) )
      return CComposition::ScheduleCompositionPass((__int64)g_pComposition, a1, a2);
  }
  return result;
}
