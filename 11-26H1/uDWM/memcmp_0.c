/*
 * XREFs of memcmp_0 @ 0x18008EF18
 * Callers:
 *     ?CreateTextLayout@CDWriteText@@AEAAJXZ @ 0x18000BE00 (-CreateTextLayout@CDWriteText@@AEAAJXZ.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x18003CDE4 (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x18003E298 (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ?GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x18003E990 (-GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x18003F510 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ?Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z @ 0x18003F77C (-Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z.c)
 *     ?Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x18003F854 (-Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x1800436A0 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?ApplyColorizationParameters@CDesktopManager@@QEAA_NPEAVCGlassColorizationParameters@@@Z @ 0x18004EB44 (-ApplyColorizationParameters@CDesktopManager@@QEAA_NPEAVCGlassColorizationParameters@@@Z.c)
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18005BA90 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x18005BDE0 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?LowerBound@RawUsageIndex@details_abi@wil@@AEAAPEAEPEAE_KPEAX1@Z @ 0x18005BF74 (-LowerBound@RawUsageIndex@details_abi@wil@@AEAAPEAEPEAE_KPEAX1@Z.c)
 *     ??$ActivateInstance@UISessionBrokerInstance@DispBrokerDesktop@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUISessionBrokerInstance@DispBrokerDesktop@@@Z @ 0x180062270 (--$ActivateInstance@UISessionBrokerInstance@DispBrokerDesktop@@@Foundation@Windows@@YAJPEAUHSTRI.c)
 *     ?_OnEndAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180069D8C (-_OnEndAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x18006F2D4 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?SetFont@CDWriteText@@UEAAXAEBUtagLOGFONTW@@@Z @ 0x1800700E0 (-SetFont@CDWriteText@@UEAAXAEBUtagLOGFONTW@@@Z.c)
 *     ?IsEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x1800B493C (-IsEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 *     ?OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800BA0FC (-OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1800D56D8 (-search@input_archive@tson@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp_0(const void *Buf1, const void *Buf2, size_t Size)
{
  return memcmp(Buf1, Buf2, Size);
}
