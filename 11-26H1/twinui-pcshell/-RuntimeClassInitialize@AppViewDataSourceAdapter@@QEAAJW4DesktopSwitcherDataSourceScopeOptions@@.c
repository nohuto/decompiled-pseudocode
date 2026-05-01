/*
 * XREFs of ?RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4DesktopSwitcherDataSourceScopeOptions@@PEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEBUIWindowTabExtension@9UI@Internal@Windows@winrt@@@Z @ 0x18015F31C
 * Callers:
 *     ??$MakeAndInitialize@VAppViewDataSourceAdapter@@V1@AEAW4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAUIWindowTabExtension@9UI@Internal@Windows@winrt@@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewDataSourceAdapter@@AEAW4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@$$QEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAUIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@@Z @ 0x18015F148 (--$MakeAndInitialize@VAppViewDataSourceAdapter@@V1@AEAW4DesktopSwitcherDataSourceScopeOptions@@A.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x180026FEC (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B9B04 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800DC92C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ?InitializeAppViewItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x1800F1CE8 (-InitializeAppViewItems@AppViewDataSourceAdapter@@AEAAXXZ.c)
 *     ?InitializeDataSource@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@Z @ 0x18015F76C (-InitializeDataSource@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationViewCollection@@PEAUIAp.c)
 *     ?InitializeTaskGroupItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x1801C8D88 (-InitializeTaskGroupItems@AppViewDataSourceAdapter@@AEAAXXZ.c)
 *     ?AppViewSwitchItemZOrderSort_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802932E4 (-AppViewSwitchItemZOrderSort_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$com_weak_query_failfast@PEAVAppViewDataSourceAdapter@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@$$QEAPEAVAppViewDataSourceAdapter@@@Z @ 0x18029999C (--$com_weak_query_failfast@PEAVAppViewDataSourceAdapter@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@.c)
 *     ??1?$event_revoker@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@$MP8type@?$abi@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFI@AA@impl@winrt@@QEAA@XZ @ 0x18029F89C (--1-$event_revoker@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@$MP8type@-$abi@UIWindow.c)
 *     ?ActiveTabChanged@?$consume_Windows_Internal_UI_Shell_IWindowTabExtension@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UActiveTabChangedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x1805C1904 (-ActiveTabChanged@-$consume_Windows_Internal_UI_Shell_IWindowTabExtension@UIWindowTabExtension@S.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs_::TypedEventHandler_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs___lambda_2a851c89b37b22f5db043065bc559031___ @ 0x1806C1C2C (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--UI--Shell--IWindowTabExt.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall AppViewDataSourceAdapter::RuntimeClassInitialize(
        __int64 a1,
        int a2,
        struct IApplicationViewCollection *a3,
        struct IApplicationViewIconLoader *a4,
        struct IImmersiveShellHookService *a5,
        struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *a6,
        __int64 *a7)
{
  AppViewDataSourceAdapterBase *v8; // rcx
  const struct _GUID *v9; // rcx
  int v10; // eax
  void *v11; // rbx
  int v12; // eax
  char v13; // r8
  __int64 *v14; // r14
  const char *v15; // r9
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 active; // rax
  void *v20; // rcx
  __int64 v21; // rcx
  __int64 result; // rax
  int v23; // [rsp+20h] [rbp-68h]
  __int64 v24; // [rsp+30h] [rbp-58h] BYREF
  __int64 v25; // [rsp+38h] [rbp-50h] BYREF
  __int64 v26; // [rsp+40h] [rbp-48h] BYREF
  __int64 v27; // [rsp+48h] [rbp-40h]
  __int64 v28; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v29[48]; // [rsp+58h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  void *v31; // [rsp+90h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 192) = a2;
  v8 = (AppViewDataSourceAdapterBase *)(a1 + 8);
  try
  {
    AppViewDataSourceAdapterBase::InitializeDataSource(v8, a3, a4, a5, a6);
    v31 = 0LL;
    v10 = AppViewSwitchItemZOrderSort_CreateInstance(v9, &v31);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x96,
        (int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)(unsigned int)v10,
        v23);
    v11 = v31;
    v12 = (*(__int64 (__fastcall **)(_QWORD, void *))(**(_QWORD **)(a1 + 32) + 72LL))(*(_QWORD *)(a1 + 32), v31);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x97,
        (int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)(unsigned int)v12,
        v23);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_WTMPublic>::GetImpl'::`2'::impl,
      1u,
      v13);
    v14 = a7;
    winrt::Windows::Foundation::IUnknown::operator=((__int64 *)(a1 + 248), a7);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 120));
    v28 = a1 + 120;
    AppViewDataSourceAdapter::InitializeAppViewItems((AppViewDataSourceAdapter *)a1);
    if ( a1 != -120 )
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 120));
    if ( (*(_BYTE *)(a1 + 192) & 4) != 0 )
      AppViewDataSourceAdapter::InitializeTaskGroupItems((AppViewDataSourceAdapter *)a1);
    if ( (*(_BYTE *)(a1 + 192) & 2) != 0 && *v14 )
    {
      v26 = a1;
      v16 = (__int64 *)wil::com_weak_query_failfast<AppViewDataSourceAdapter *>(&v28, &v26);
      v17 = *v16;
      *v16 = 0LL;
      v25 = v17;
      winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs_::TypedEventHandler_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs___lambda_2a851c89b37b22f5db043065bc559031___(
        &v24,
        &v25);
      active = winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabExtension<winrt::Windows::Internal::UI::Shell::IWindowTabExtension>::ActiveTabChanged(
                 v14,
                 v29,
                 v18,
                 &v24);
      v20 = *(void **)active;
      *(_QWORD *)active = 0LL;
      v27 = *(_QWORD *)(active + 8);
      v26 = 0LL;
      v31 = v20;
      winrt::com_ptr<winrt::impl::IWeakReference>::operator=(&v26, (__int64 *)(a1 + 232));
      winrt::com_ptr<winrt::impl::IWeakReference>::operator=((__int64 *)(a1 + 232), (__int64 *)&v31);
      if ( v31 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v31);
      v21 = v27;
      v27 = *(_QWORD *)(a1 + 240);
      *(_QWORD *)(a1 + 240) = v21;
      __1__event_revoker_UIWindowTabExtension_Shell_UI_Internal_Windows_winrt___MP8type___abi_UIWindowTabExtension_Shell_UI_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFI_AA_impl_winrt__QEAA_XZ(&v26);
      __1__event_revoker_UIWindowTabExtension_Shell_UI_Internal_Windows_winrt___MP8type___abi_UIWindowTabExtension_Shell_UI_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFI_AA_impl_winrt__QEAA_XZ(v29);
      if ( v24 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v24);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v28);
    }
    if ( v11 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xBA,
                           (int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
                           v15);
  }
  return result;
}
