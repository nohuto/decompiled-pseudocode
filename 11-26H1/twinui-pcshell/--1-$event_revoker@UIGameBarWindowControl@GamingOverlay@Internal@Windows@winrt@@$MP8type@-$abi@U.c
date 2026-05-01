/*
 * XREFs of ??1?$event_revoker@UIGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@$MP8type@?$abi@UIGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BOA@AA@impl@winrt@@QEAA@XZ @ 0x1803420E0
 * Callers:
 *     ??1GamingOverlayExperienceManager@@EEAA@XZ @ 0x180342624 (--1GamingOverlayExperienceManager@@EEAA@XZ.c)
 *     ??4?$event_revoker@UIGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@$MP8type@?$abi@UIGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BOA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x180342FE4 (--4-$event_revoker@UIGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@$MP8type@-$abi@U.c)
 *     ?OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18034F484 (-OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$18 @ 0x1806E3B72 (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$18.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??_9type@?$abi@UIGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@X@impl@winrt@@$BOA@AA @ 0x180344D84 (--_9type@-$abi@UIGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@X@impl@winrt@@$BOA@A.c)
 *     ?get@?$weak_ref@UIGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x1803596A0 (-get@-$weak_ref@UIGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@@winrt@@QEBA@XZ.c)
 */

void __fastcall __1__event_revoker_UIGameBarWindowControl_GamingOverlay_Internal_Windows_winrt___MP8type___abi_UIGameBarWindowControl_GamingOverlay_Internal_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BOA_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v2; // rdi
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( *a1 )
  {
    v2 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)winrt::weak_ref<winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl>::get(
                                                                                               a1,
                                                                                               v3);
    if ( *(_QWORD *)v2 )
       winrt::impl::abi<winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl,void>::type::`vcall'{224,{flat}}(
        *(_QWORD *)v2,
        a1[1]);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(v2);
  }
  if ( *a1 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1);
}
