/*
 * XREFs of _guard_dispatch_icall @ 0x1400058C0
 * Callers:
 *     CiProcessNotification @ 0x140001010 (CiProcessNotification.c)
 *     CiSystemDetectPotentiallyStarvedProcessors @ 0x140003770 (CiSystemDetectPotentiallyStarvedProcessors.c)
 *     WPP_SF_ @ 0x1400043B0 (WPP_SF_.c)
 *     WPP_SF_D @ 0x1400045E8 (WPP_SF_D.c)
 *     WPP_SF_Sd @ 0x140004634 (WPP_SF_Sd.c)
 *     WPP_SF_Z @ 0x1400046B8 (WPP_SF_Z.c)
 *     WPP_SF_Zd @ 0x140004738 (WPP_SF_Zd.c)
 *     WPP_SF_Zq @ 0x1400047C8 (WPP_SF_Zq.c)
 *     WPP_SF_d @ 0x140004844 (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x140004888 (WPP_SF_dd.c)
 *     WPP_SF_q @ 0x1400048E4 (WPP_SF_q.c)
 *     WPP_SF_P @ 0x140004B64 (WPP_SF_P.c)
 *     WPP_SF_S @ 0x140004BB0 (WPP_SF_S.c)
 *     WPP_SF_dI @ 0x140004C28 (WPP_SF_dI.c)
 *     WPP_SF_qqd @ 0x140004C84 (WPP_SF_qqd.c)
 *     WPP_SF_L @ 0x140004CEC (WPP_SF_L.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1400050F8 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x140005174 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x140005260 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140007030 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     WppLoadTracingSupport @ 0x14000D010 (WppLoadTracingSupport.c)
 *     WppInitKm @ 0x14000D160 (WppInitKm.c)
 *     WppCleanupKm @ 0x14000D51C (WppCleanupKm.c)
 *     WppTraceCallback @ 0x14000D5A0 (WppTraceCallback.c)
 *     CiDispatchCreate @ 0x14000F670 (CiDispatchCreate.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall guard_dispatch_icall()
{
  __int64 (__fastcall *v0)(); // rax

  return v0();
}
