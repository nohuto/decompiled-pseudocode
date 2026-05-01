/*
 * XREFs of ?GetMemoryUsageGbInstantaneous@GamingOverlayExperienceManager@@UEAAJPEAN0@Z @ 0x180349740
 * Callers:
 *     <none>
 * Callees:
 *     ?StartPerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1803544EC (-StartPerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     ?load@?$_Atomic_storage@N$07@std@@QEBANW4memory_order@2@@Z @ 0x18035996C (-load@-$_Atomic_storage@N$07@std@@QEBANW4memory_order@2@@Z.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::GetMemoryUsageGbInstantaneous(
        GamingOverlayExperienceManager *this,
        double *a2,
        double *a3)
{
  GamingOverlayExperienceManager *v5; // rcx
  double v7; // xmm0_8
  __int64 result; // rax

  v5 = (GamingOverlayExperienceManager *)((char *)this - 136);
  if ( !*((_QWORD *)v5 + 110) )
    GamingOverlayExperienceManager::StartPerfDataCollectionThread(v5);
  *a2 = std::_Atomic_storage<double,8>::load((char *)this + 1192);
  v7 = std::_Atomic_storage<double,8>::load((char *)this + 1200);
  result = 0LL;
  *a3 = v7;
  return result;
}
