/*
 * XREFs of ?GetFramesPerSecondInstantaneous@GamingOverlayExperienceManager@@UEAAJKPEAH@Z @ 0x1803462E0
 * Callers:
 *     <none>
 * Callees:
 *     ?load@?$_Atomic_storage@W4PreloadPreference@KeyboardHosting@@$03@std@@QEBA?AW4PreloadPreference@KeyboardHosting@@W4memory_order@2@@Z @ 0x1802DEC4C (-load@-$_Atomic_storage@W4PreloadPreference@KeyboardHosting@@$03@std@@QEBA-AW4PreloadPreference@.c)
 *     ?StartPerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18034FCF8 (-StartPerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::GetFramesPerSecondInstantaneous(
        GamingOverlayExperienceManager *this,
        int a2,
        int *a3)
{
  bool v5; // zf

  if ( a2 != *((_DWORD *)this + 212) || !*((_BYTE *)this + 852) )
  {
    v5 = *((_QWORD *)this + 86) == 0LL;
    *((_DWORD *)this + 212) = a2;
    if ( v5 )
      GamingOverlayExperienceManager::StartPerfDataCollectionThread((GamingOverlayExperienceManager *)((char *)this - 136));
  }
  *a3 = std::_Atomic_storage<enum KeyboardHosting::PreloadPreference,4>::load((unsigned int *)this + 214);
  return 0LL;
}
