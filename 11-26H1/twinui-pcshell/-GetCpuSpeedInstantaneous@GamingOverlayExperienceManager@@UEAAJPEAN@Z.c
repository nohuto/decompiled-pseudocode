/*
 * XREFs of ?GetCpuSpeedInstantaneous@GamingOverlayExperienceManager@@UEAAJPEAN@Z @ 0x180348080
 * Callers:
 *     <none>
 * Callees:
 *     ?StartPerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1803544EC (-StartPerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     ?load@?$_Atomic_storage@N$07@std@@QEBANW4memory_order@2@@Z @ 0x18035996C (-load@-$_Atomic_storage@N$07@std@@QEBANW4memory_order@2@@Z.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::GetCpuSpeedInstantaneous(
        GamingOverlayExperienceManager *this,
        double *a2)
{
  GamingOverlayExperienceManager *v4; // rcx
  double v5; // xmm0_8
  __int64 result; // rax

  v4 = (GamingOverlayExperienceManager *)((char *)this - 136);
  if ( !*((_QWORD *)v4 + 110) )
    GamingOverlayExperienceManager::StartPerfDataCollectionThread(v4);
  v5 = std::_Atomic_storage<double,8>::load((char *)this + 1120);
  result = 0LL;
  *a2 = v5;
  return result;
}
