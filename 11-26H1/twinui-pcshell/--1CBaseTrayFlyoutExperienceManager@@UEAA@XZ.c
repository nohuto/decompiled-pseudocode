/*
 * XREFs of ??1CBaseTrayFlyoutExperienceManager@@UEAA@XZ @ 0x1803C1440
 * Callers:
 *     ??_GCBaseTrayFlyoutExperienceManager@@UEAAPEAXI@Z @ 0x1803C1A80 (--_GCBaseTrayFlyoutExperienceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180065220 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x1800C0C28 (--1CSingleViewShellExperience@@QEAA@XZ.c)
 *     ?NotifyTrayFlyoutIsVisible@CBaseTrayFlyoutExperienceManager@@AEAAX_N@Z @ 0x18022EB40 (-NotifyTrayFlyoutIsVisible@CBaseTrayFlyoutExperienceManager@@AEAAX_N@Z.c)
 *     ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x1802C3D14 (--1CExperienceManagerAnimationHelper@@QEAA@XZ.c)
 *     ??1DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAA@XZ @ 0x180380320 (--1DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAA@XZ.c)
 */

void __fastcall CBaseTrayFlyoutExperienceManager::~CBaseTrayFlyoutExperienceManager(
        CBaseTrayFlyoutExperienceManager *this)
{
  *(_QWORD *)this = &CBaseTrayFlyoutExperienceManager::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CBaseTrayFlyoutExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ILightDismissNotification,IWeakReferenceSource,IInputHostLayoutChanges>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ILightDismissNotification,IInputHostLayoutChanges>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CBaseTrayFlyoutExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInputHostLayoutChanges>'};
  *((_QWORD *)this + 6) = &CBaseTrayFlyoutExperienceManager::`vftable';
  CBaseTrayFlyoutExperienceManager::NotifyTrayFlyoutIsVisible(this, 0);
  CPeopleBarFlyoutExperienceManager::DebounceDetection::~DebounceDetection((CBaseTrayFlyoutExperienceManager *)((char *)this + 448));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 47);
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CBaseTrayFlyoutExperienceManager *)((char *)this + 336));
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CBaseTrayFlyoutExperienceManager *)((char *)this + 304));
  Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)this + 36);
  CSingleViewShellExperience::~CSingleViewShellExperience((CBaseTrayFlyoutExperienceManager *)((char *)this + 72));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 8);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IVirtualDesktopSwitchAnimator,IVirtualDesktopSwitchAnimator2>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IVirtualDesktopSwitchAnimator,IVirtualDesktopSwitchAnimator2>((__int64)this);
}
