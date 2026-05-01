/*
 * XREFs of ??0SnapMigrationHandler@@QEAA@PEAUIWindowManagementEvents@@PEAUIImmersiveMonitorManager@@@Z @ 0x1805B6C30
 * Callers:
 *     ??$make@USnapMigrationHandler@@PEAUIWindowManagementEvents@@PEAUIImmersiveMonitorManager@@@winrt@@YA?A_P$$QEAPEAUIWindowManagementEvents@@$$QEAPEAUIImmersiveMonitorManager@@@Z @ 0x18059C5D0 (--$make@USnapMigrationHandler@@PEAUIWindowManagementEvents@@PEAUIImmersiveMonitorManager@@@winrt.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??$get_weak@VWindowDragInputProvider@@@?$root_implements@VWindowDragInputProvider@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@IEAA?AU?$weak_ref@VWindowDragInputProvider@@@2@XZ @ 0x180054E60 (--$get_weak@VWindowDragInputProvider@@@-$root_implements@VWindowDragInputProvider@@UIInspectable.c)
 *     ??4?$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BHI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1801D4E78 (--4-$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@_ea_1801D4E78.c)
 *     ??1?$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BHI@AA@impl@winrt@@QEAA@XZ @ 0x1801FB2C0 (--1-$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@_ea_1801FB2C0.c)
 *     ??$convert_from_abi@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@@wil@@YA?AUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@PEAUIUnknown@@@Z @ 0x180267490 (--$convert_from_abi@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winr.c)
 *     ??0?$implements@USnapMigrationHandler@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1802A6C34 (--0-$implements@USnapMigrationHandler@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA@XZ.c)
 *     ?Completed@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@3@@Z @ 0x180589AC4 (-Completed@-$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem@UIApp.c)
 *     ??$?0USnapMigrationHandler@@P80@EAAXAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@23456@@_E@?$TypedEventHandler@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@UWindowMigrationEventArgs@23456@@Foundation@Windows@winrt@@QEAA@$$QEAU?$weak_ref@USnapMigrationHandler@@@3@$$QEAP8SnapMigrationHandler@@EAAXAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@23@AEBUWindowMigrationEventArgs@78923@@_E@Z @ 0x1805B6AE0 (--$-0USnapMigrationHandler@@P80@EAAXAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@In.c)
 */

// Hidden C++ exception states: #wind=6
SnapMigrationHandler *__fastcall SnapMigrationHandler::SnapMigrationHandler(
        SnapMigrationHandler *this,
        struct IWindowManagementEvents *a2,
        struct IImmersiveMonitorManager *a3)
{
  struct IUnknown *v5; // r9
  char v6; // r8
  __int64 *v7; // rax
  __int64 v9; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10; // [rsp+28h] [rbp-28h] BYREF
  __int128 v11; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v13; // [rsp+88h] [rbp+38h] BYREF

  winrt::implements<SnapMigrationHandler,winrt::Windows::Foundation::IInspectable>::implements<SnapMigrationHandler,winrt::Windows::Foundation::IInspectable>(
    (__int64)this,
    (__int64)a2);
  *(_QWORD *)this = &SnapMigrationHandler::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  wil::convert_from_abi<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2>(
    (winrt *)&v10,
    v5);
  winrt::impl::root_implements<WindowDragInputProvider,winrt::Windows::Foundation::IInspectable>::get_weak<WindowDragInputProvider>(
    (__int64)this,
    &v9);
  *(_QWORD *)&v11 = SnapMigrationHandler::OnWindowMigrationEvent;
  DWORD2(v11) = 0;
  ____0USnapMigrationHandler__P80_EAAXAEBUIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt__AEBUWindowMigrationEventArgs_23456___E___TypedEventHandler_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt__UWindowMigrationEventArgs_23456__Foundation_Windows_winrt__QEAA___QEAU__weak_ref_USnapMigrationHandler___3___QEAP8SnapMigrationHandler__EAAXAEBUIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_23_AEBUWindowMigrationEventArgs_78923___E_Z(
    &v13,
    &v9,
    &v11);
  v7 = winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>::Completed(
         &v10,
         v12,
         v6,
         &v13);
  __4__event_revoker_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt___MP8type___abi_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BHI_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
    (__int64 *)this + 3,
    v7);
  __1__event_revoker_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt___MP8type___abi_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BHI_AA_impl_winrt__QEAA_XZ(v12);
  if ( v13 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v13);
  if ( v9 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v9);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 5, (__int64)a3);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  return this;
}
