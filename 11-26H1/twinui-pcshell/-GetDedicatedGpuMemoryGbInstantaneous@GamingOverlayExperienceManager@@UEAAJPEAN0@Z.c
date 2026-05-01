/*
 * XREFs of ?GetDedicatedGpuMemoryGbInstantaneous@GamingOverlayExperienceManager@@UEAAJPEAN0@Z @ 0x180348F50
 * Callers:
 *     <none>
 * Callees:
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x1800E712C (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 *     ?StartPerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1803544EC (-StartPerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::GetDedicatedGpuMemoryGbInstantaneous(
        GamingOverlayExperienceManager *this,
        double *a2,
        double *a3)
{
  GamingOverlayExperienceManager *v5; // rcx
  __int64 v7; // rax
  double v8; // xmm0_8
  __int64 v9; // rax
  double v10; // xmm0_8
  __int64 result; // rax

  v5 = (GamingOverlayExperienceManager *)((char *)this - 136);
  if ( !*((_QWORD *)v5 + 110) )
    GamingOverlayExperienceManager::StartPerfDataCollectionThread(v5);
  v7 = std::_Atomic_storage<unsigned __int64,8>::load((__int64)this + 1032);
  if ( v7 < 0 )
    v8 = (double)(int)(v7 & 1 | ((unsigned __int64)v7 >> 1)) + (double)(int)(v7 & 1 | ((unsigned __int64)v7 >> 1));
  else
    v8 = (double)(int)v7;
  *a2 = v8 / 1048576000.0;
  v9 = std::_Atomic_storage<unsigned __int64,8>::load((__int64)this + 1040);
  if ( v9 < 0 )
    v10 = (double)(int)(v9 & 1 | ((unsigned __int64)v9 >> 1)) + (double)(int)(v9 & 1 | ((unsigned __int64)v9 >> 1));
  else
    v10 = (double)(int)v9;
  result = 0LL;
  *a3 = v10 / 1048576000.0;
  return result;
}
