/*
 * XREFs of ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BJA@AA@impl@winrt@@QEAA@XZ @ 0x1802D1B4C
 * Callers:
 *     ??1FlyoutInstanceRecord@SnapFlyoutHost@@QEAA@XZ @ 0x1800A8078 (--1FlyoutInstanceRecord@SnapFlyoutHost@@QEAA@XZ.c)
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x18058E8F0 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?get@?$weak_ref@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x1801E34BC (-get@-$weak_ref@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ.c)
 *     ??_9type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@winrt@@$BJA@AA @ 0x1802E48A0 (--_9type@-$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@winrt@@$B.c)
 */

void __fastcall __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BJA_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v2; // rdi
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 )
  {
    v2 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)winrt::weak_ref<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::get(
                                                                                               a1,
                                                                                               &v3);
    if ( *(_QWORD *)v2 )
       winrt::impl::abi<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance,void>::type::`vcall'{144,{flat}}(
        *(_QWORD *)v2,
        a1[1]);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(v2);
  }
  if ( *a1 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1);
}
