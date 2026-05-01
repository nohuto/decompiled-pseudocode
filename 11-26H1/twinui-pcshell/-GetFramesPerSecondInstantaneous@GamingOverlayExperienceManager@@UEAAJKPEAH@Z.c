/*
 * XREFs of ?GetFramesPerSecondInstantaneous@GamingOverlayExperienceManager@@UEAAJKPEAH@Z @ 0x1803492F0
 * Callers:
 *     <none>
 * Callees:
 *     ?load@?$_Atomic_storage@W4PreloadPreference@KeyboardHosting@@$03@std@@QEBA?AW4PreloadPreference@KeyboardHosting@@W4memory_order@2@@Z @ 0x1802C861C (-load@-$_Atomic_storage@W4PreloadPreference@KeyboardHosting@@$03@std@@QEBA-AW4PreloadPreference@.c)
 *     ?StartPerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1803544EC (-StartPerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::GetFramesPerSecondInstantaneous(
        GamingOverlayExperienceManager *this,
        int a2,
        int *a3)
{
  GamingOverlayExperienceManager *v5; // rcx
  bool v6; // zf

  v5 = (GamingOverlayExperienceManager *)((char *)this - 136);
  if ( a2 != *((_DWORD *)v5 + 262) || !*((_BYTE *)this + 916) )
  {
    v6 = *((_QWORD *)this + 93) == 0LL;
    *((_DWORD *)this + 228) = a2;
    if ( v6 )
      GamingOverlayExperienceManager::StartPerfDataCollectionThread(v5);
  }
  *a3 = std::_Atomic_storage<enum KeyboardHosting::PreloadPreference,4>::load((unsigned int *)this + 230);
  return 0LL;
}
