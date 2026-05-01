/*
 * XREFs of ?GetTrustLevel@CInsightsExperienceManager@@UEAAJPEAW4TrustLevel@@@Z @ 0x180365AA0
 * Callers:
 *     ?GetTrustLevel@CActionCenterExperienceManager@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x180365AB0 (-GetTrustLevel@CActionCenterExperienceManager@@WBI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CVirtualTouchpadExperienceManager@@WCA@EAAJPEAW4TrustLevel@@@Z @ 0x180365AC0 (-GetTrustLevel@CVirtualTouchpadExperienceManager@@WCA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CActionCenterExperienceManager@@WFA@EAAJPEAW4TrustLevel@@@Z @ 0x180365AD0 (-GetTrustLevel@CActionCenterExperienceManager@@WFA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CControlCenterExperienceManager@@WEA@EAAJPEAW4TrustLevel@@@Z @ 0x18036C940 (-GetTrustLevel@CControlCenterExperienceManager@@WEA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CTaskContinuityActivitiesExperienceManager@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x180379C40 (-GetTrustLevel@CTaskContinuityActivitiesExperienceManager@@WBA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CSnapAssistController@@WDA@EAAJPEAW4TrustLevel@@@Z @ 0x18037C470 (-GetTrustLevel@CSnapAssistController@@WDA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CStartExperienceManager@@WDI@EAAJPEAW4TrustLevel@@@Z @ 0x18037C480 (-GetTrustLevel@CStartExperienceManager@@WDI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CSnapAssistController@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x180389540 (-GetTrustLevel@CSnapAssistController@@WCI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@HolographicPositioner@@WJI@EAAJPEAW4TrustLevel@@@Z @ 0x180403BE0 (-GetTrustLevel@HolographicPositioner@@WJI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@HolographicPositioner@@WLI@EAAJPEAW4TrustLevel@@@Z @ 0x180403C00 (-GetTrustLevel@HolographicPositioner@@WLI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@HolographicPositioner@@WMA@EAAJPEAW4TrustLevel@@@Z @ 0x180403C20 (-GetTrustLevel@HolographicPositioner@@WMA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CShellSnapComponent@@WIA@EAAJPEAW4TrustLevel@@@Z @ 0x18059FCD0 (-GetTrustLevel@CShellSnapComponent@@WIA@EAAJPEAW4TrustLevel@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInsightsExperienceManager::GetTrustLevel(CInsightsExperienceManager *this, enum TrustLevel *a2)
{
  *a2 = FullTrust;
  return 0LL;
}
