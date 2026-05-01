/*
 * XREFs of ??0SnapMigrationHandler@@QEAA@PEAUIWindowManagementEvents@@PEAUIImmersiveMonitorManager@@@Z @ 0x180592BF0
 * Callers:
 *     ??$make@USnapMigrationHandler@@PEAUIWindowManagementEvents@@PEAUIImmersiveMonitorManager@@@winrt@@YA?A_P$$QEAPEAUIWindowManagementEvents@@$$QEAPEAUIImmersiveMonitorManager@@@Z @ 0x180578EA8 (--$make@USnapMigrationHandler@@PEAUIWindowManagementEvents@@PEAUIImmersiveMonitorManager@@@winrt.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??4?$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BHI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1801583A0 (--4-$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@_ea_1801583A0.c)
 *     ??$convert_from_abi@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@@wil@@YA?AUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@PEAUIUnknown@@@Z @ 0x180158428 (--$convert_from_abi@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winr.c)
 *     ??1?$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BHI@AA@impl@winrt@@QEAA@XZ @ 0x1802074D0 (--1-$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@_ea_1802074D0.c)
 *     ?make_weak_ref@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@Uhstring@4@U64@UPackageVersion@ApplicationModel@34@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@V9std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18024210C (-make_weak_ref@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windo.c)
 *     ??0?$implements@USnapMigrationHandler@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1802B021C (--0-$implements@USnapMigrationHandler@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA@XZ.c)
 *     ??0bad_alloc@std@@QEAA@XZ @ 0x1802CEE8C (--0bad_alloc@std@@QEAA@XZ.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?WindowMigrationEvent@?$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowManagementEvents2@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@UWindowMigrationEventArgs@23456@@Foundation@Windows@3@@Z @ 0x180565830 (-WindowMigrationEvent@-$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowManagementE.c)
 *     ??$?0USnapMigrationHandler@@P80@EAAXAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@23456@@_E@?$TypedEventHandler@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@UWindowMigrationEventArgs@23456@@Foundation@Windows@winrt@@QEAA@$$QEAU?$weak_ref@USnapMigrationHandler@@@3@$$QEAP8SnapMigrationHandler@@EAAXAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@23@AEBUWindowMigrationEventArgs@78923@@_E@Z @ 0x180592A9C (--$-0USnapMigrationHandler@@P80@EAAXAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@In.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
SnapMigrationHandler *__fastcall SnapMigrationHandler::SnapMigrationHandler(
        SnapMigrationHandler *this,
        struct IWindowManagementEvents *a2,
        struct IImmersiveMonitorManager *a3)
{
  struct IUnknown *v5; // r9
  __int64 weak_ref; // rax
  int v7; // eax
  char v8; // r8
  __int64 *v9; // rax
  __int64 v11[2]; // [rsp+28h] [rbp-29h] BYREF
  __int128 v12; // [rsp+38h] [rbp-19h] BYREF
  __int64 v13; // [rsp+48h] [rbp-9h] BYREF
  int v14; // [rsp+50h] [rbp-1h] BYREF
  __int64 v15[2]; // [rsp+58h] [rbp+7h] BYREF
  int v16; // [rsp+68h] [rbp+17h] BYREF
  __int128 v17; // [rsp+70h] [rbp+1Fh]
  _BYTE pExceptionObject[24]; // [rsp+80h] [rbp+2Fh] BYREF
  __int64 v19; // [rsp+D0h] [rbp+7Fh] BYREF

  LODWORD(v19) = 0;
  winrt::implements<SnapMigrationHandler,winrt::Windows::Foundation::IInspectable>::implements<SnapMigrationHandler,winrt::Windows::Foundation::IInspectable>(
    (__int64)this,
    (__int64)a2);
  *(_QWORD *)this = &SnapMigrationHandler::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  wil::convert_from_abi<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2>(
    (winrt *)&v13,
    v5);
  weak_ref = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref((volatile signed __int64 *)this);
  if ( !weak_ref )
  {
    std::bad_alloc::bad_alloc((std::bad_alloc *)pExceptionObject);
    throw (std::bad_alloc *)pExceptionObject;
  }
  *(_QWORD *)&v12 = weak_ref;
  v11[0] = 0LL;
  LODWORD(v19) = 2;
  v16 = 0;
  v17 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)weak_ref + 24LL))(weak_ref, v11);
  winrt::check_hresult(&v14, v7, (__int64)&v16);
  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v12);
  *(_QWORD *)&v12 = SnapMigrationHandler::OnWindowMigrationEvent;
  DWORD2(v12) = 0;
  ____0USnapMigrationHandler__P80_EAAXAEBUIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt__AEBUWindowMigrationEventArgs_23456___E___TypedEventHandler_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt__UWindowMigrationEventArgs_23456__Foundation_Windows_winrt__QEAA___QEAU__weak_ref_USnapMigrationHandler___3___QEAP8SnapMigrationHandler__EAAXAEBUIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_23_AEBUWindowMigrationEventArgs_78923___E_Z(
    &v19,
    v11,
    &v12);
  v9 = winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowManagementEvents2<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2>::WindowMigrationEvent(
         &v13,
         v15,
         v8,
         &v19);
  __4__event_revoker_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt___MP8type___abi_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BHI_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
    (__int64 *)this + 3,
    v9);
  __1__event_revoker_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt___MP8type___abi_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BHI_AA_impl_winrt__QEAA_XZ(v15);
  if ( v19 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v19);
  if ( v11[0] )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v11);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 5, (__int64)a3);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
  return this;
}
