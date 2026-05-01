/*
 * XREFs of ?GetCpuSpeedInstantaneous@GamingOverlayExperienceManager@@UEAAJPEAN@Z @ 0x180345210
 * Callers:
 *     <none>
 * Callees:
 *     ?StartPerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18034FCF8 (-StartPerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::GetCpuSpeedInstantaneous(
        GamingOverlayExperienceManager *this,
        double *a2)
{
  if ( !*((_QWORD *)this + 86) )
    GamingOverlayExperienceManager::StartPerfDataCollectionThread((GamingOverlayExperienceManager *)((char *)this - 136));
  *a2 = *((double *)this + 132);
  return 0LL;
}
