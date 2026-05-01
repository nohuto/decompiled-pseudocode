/*
 * XREFs of ??1?$event_revoker@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFA@AA@impl@winrt@@QEAA@XZ @ 0x18020E3F0
 * Callers:
 *     ??4?$event_revoker@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1802AAA3C (--4-$event_revoker@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@$MP8ty_ea_1802AAA3C.c)
 *     ??1CControlCenterExperienceManager@@UEAA@XZ @ 0x18036B050 (--1CControlCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CStartExperienceManager@@UEAA@XZ @ 0x1803876F0 (--1CStartExperienceManager@@UEAA@XZ.c)
 *     CStartExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x180388050 (CStartExperienceManager--CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 *     _CControlCenterExperienceManager::CControlCenterExperienceManager_::_1_::dtor$6 @ 0x1806DB846 (_CControlCenterExperienceManager--CControlCenterExperienceManager_--_1_--dtor$6.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$27 @ 0x1806E6EDB (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$27.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??_9ITabletModeController@@$BFA@AA @ 0x18036B6D0 (--_9ITabletModeController@@$BFA@AA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall __1__event_revoker_UIDisplayMonitorInfoCollection_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIDisplayMonitorInfoCollection_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BFA_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v3 = 0LL;
    (*(void (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>,
      &v3);
    if ( v3 )
       ITabletModeController::`vcall'{80,{flat}}(v3, a1[1]);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v3);
  }
  if ( *a1 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1);
}
