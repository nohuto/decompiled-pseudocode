/*
 * XREFs of ??$?O_KU?$ratio@$00$0PECEA@@std@@_JU?$ratio@$00$0DOI@@1@@chrono@std@@YA_NAEBV?$duration@_KU?$ratio@$00$0PECEA@@std@@@01@AEBV?$duration@_JU?$ratio@$00$0DOI@@std@@@01@@Z @ 0x18033B018
 * Callers:
 *     ?HandleTrackedButtonChange@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@_N_K@Z @ 0x18034B2C8 (-HandleTrackedButtonChange@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@_N_K@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::chrono::operator><unsigned __int64,std::ratio<1,1000000>,__int64,std::ratio<1,1000>>(
        _QWORD *a1,
        _QWORD *a2)
{
  return (unsigned __int64)(1000LL * *a2) < *a1;
}
