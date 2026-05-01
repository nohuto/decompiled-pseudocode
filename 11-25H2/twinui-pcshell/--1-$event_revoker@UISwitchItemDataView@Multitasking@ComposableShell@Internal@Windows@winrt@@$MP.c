/*
 * XREFs of ??1?$event_revoker@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@$MP8type@?$abi@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFI@AA@impl@winrt@@QEAA@XZ @ 0x180197DA0
 * Callers:
 *     ??1XamlSnapAssistViewHost@@UEAA@XZ @ 0x180197CA4 (--1XamlSnapAssistViewHost@@UEAA@XZ.c)
 *     ??4?$event_revoker@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@$MP8type@?$abi@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1802BA68C (--4-$event_revoker@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@$MP.c)
 *     ??0CachedDataSource@@QEAA@_N0PEAUIAppViewDataSourceAdapter@@AEBUIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBUIVirtualDesktopDataSource@34567@@Z @ 0x1802C1E0C (--0CachedDataSource@@QEAA@_N0PEAUIAppViewDataSourceAdapter@@AEBUIVirtualDesktopController@Multit.c)
 *     ??1CachedDataSource@@QEAA@XZ @ 0x180677B94 (--1CachedDataSource@@QEAA@XZ.c)
 *     ??1TaskViewHost@@UEAA@XZ @ 0x18067EB8C (--1TaskViewHost@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x180680158 (-RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     ??1TaskViewFrame@@UEAA@XZ @ 0x180694F44 (--1TaskViewFrame@@UEAA@XZ.c)
 *     ?CreateFilteredItemCollection@TaskViewFrame@@AEAAXAEBUSwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x1806954B4 (-CreateFilteredItemCollection@TaskViewFrame@@AEAAXAEBUSwitchItemDataView@Multitasking@Composable.c)
 *     _CachedDataSource::CachedDataSource_::_1_::dtor$1 @ 0x1806B9008 (_CachedDataSource--CachedDataSource_--_1_--dtor$1.c)
 *     _TaskViewHost::TaskViewHost_::_1_::dtor$21 @ 0x1806DE0D6 (_TaskViewHost--TaskViewHost_--_1_--dtor$21.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??_9type@?$abi@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@X@impl@winrt@@$BFI@AA @ 0x1802E4880 (--_9type@-$abi@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@X@impl@winrt@@$BFI@AA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall __1__event_revoker_UISwitchItemDataView_Multitasking_ComposableShell_Internal_Windows_winrt___MP8type___abi_UISwitchItemDataView_Multitasking_ComposableShell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFI_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v3 = 0LL;
    (*(void (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      &winrt::impl::guid_v<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView>,
      &v3);
    v4 = v3;
    if ( v3 )
       winrt::impl::abi<winrt::WindowsUdk::UI::StartScreen::ITileCollection,void>::type::`vcall'{88,{flat}}(v3, a1[1]);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v4);
  }
  if ( *a1 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1);
}
