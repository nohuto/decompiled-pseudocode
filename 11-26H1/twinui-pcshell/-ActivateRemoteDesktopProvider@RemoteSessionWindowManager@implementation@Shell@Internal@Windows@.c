/*
 * XREFs of ?ActivateRemoteDesktopProvider@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBURemoteDesktopProviderInfo@3456@@Z @ 0x18065A194
 * Callers:
 *     _lambda_1b883f708510332cacc7ae6dcbc72df7_::operator() @ 0x18063F090 (_lambda_1b883f708510332cacc7ae6dcbc72df7_--operator().c)
 *     ?ActivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x180659F8C (-ActivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@Q.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002AE28 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028BFAC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802A27AC (-is_running@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??0?$test_data_control@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1805CB8EC (--0-$test_data_control@V-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@t.c)
 *     ?GetCloudPCMode@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAIXZ @ 0x18064C3D0 (-GetCloudPCMode@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAIXZ.c)
 *     ??1?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x180655354 (--1-$pair@$$CBUhstring@winrt@@V-$shared_ptr@URemoteSessionInformation@implementation@Shell@Inter.c)
 *     ??$?0Uhstring@winrt@@AEAV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@$0A@@?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@$$QEAUhstring@winrt@@AEAV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@1@@Z @ 0x180655B98 (--$-0Uhstring@winrt@@AEAV-$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Wi.c)
 *     ??$emplace@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@1@@Z @ 0x180656CD4 (--$emplace@U-$pair@$$CBUhstring@winrt@@V-$shared_ptr@URemoteSessionInformation@implementation@Sh.c)
 *     ??$make_shared@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@AEAURemoteDesktopProviderInfo@3456@AEAUTransitionScreen@8CloudDesktop@3456@UTransitionScreenId@893456@W4CloudPCState@3456@_N@std@@YA?AV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@0@AEAURemoteDesktopProviderInfo@Shell@Internal@Windows@winrt@@AEAUTransitionScreen@7CloudDesktop@3456@$$QEAUTransitionScreenId@783456@$$QEAW4CloudPCState@3456@$$QEA_N@Z @ 0x1806573F0 (--$make_shared@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@AEAURemote.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18065749C (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@de.c)
 *     ??0TransitionScreen@0CloudDesktop@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180658850 (--0TransitionScreen@0CloudDesktop@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180658C68 (--1-$test_data_control@V-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@t.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180658D00 (--1-$test_watcher@V-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@tip2@@.c)
 *     ?SubscribeToRemoteSessionExitRequestedEvent@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x18065C330 (-SubscribeToRemoteSessionExitRequestedEvent@RemoteSessionWindowManager@implementation@Shell@Inte.c)
 *     ?SubsribeToTransitionScreenDismissEvent@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x18065C5A8 (-SubsribeToTransitionScreenDismissEvent@RemoteSessionWindowManager@implementation@Shell@Internal.c)
 *     ?SubsribeToWaitOnLocalPCRequestedEvent@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x18065C770 (-SubsribeToWaitOnLocalPCRequestedEvent@RemoteSessionWindowManager@implementation@Shell@Internal@.c)
 *     ?find@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@std@@@std@@@2@AEBUhstring@winrt@@@Z @ 0x18065D6D4 (-find@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@U-$com_ptr@UIVirtualDesktop@@@2@V-$_Uhash_compare@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::ActivateRemoteDesktopProvider(
        winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *this,
        __int64 **a2)
{
  _QWORD *v4; // rax
  const char *v5; // r9
  __int64 *v6; // rax
  struct IUnknown v7; // [rsp+30h] [rbp-98h] BYREF
  __int64 v8; // [rsp+38h] [rbp-90h] BYREF
  std::_Ref_count_base *v9; // [rsp+40h] [rbp-88h]
  _QWORD v10[2]; // [rsp+48h] [rbp-80h] BYREF
  __int64 v11[3]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE v12[48]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v13[5]; // [rsp+A0h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  _BYTE *v15; // [rsp+D0h] [rbp+8h] BYREF
  RTL_SRWLOCK *v16; // [rsp+E0h] [rbp+18h] BYREF
  char v17; // [rsp+E8h] [rbp+20h] BYREF

  tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>>>((struct wil::details::IFailureCallback *)v12);
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v16, (RTL_SRWLOCK *)this + 7);
  try
  {
    v4 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
           a2,
           &v15);
    std::_Hash<std::_Umap_traits<winrt::hstring,winrt::com_ptr<IVirtualDesktop>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>>,0>>::find(
      (char *)this + 72,
      v10,
      v4);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v15);
    if ( v10[0] == *((_QWORD *)this + 10) )
    {
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v16);
      winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen::TransitionScreen(&v7);
      (*(void (__fastcall **)(_QWORD, char *, struct IUnknown *, __int64 **))(**((_QWORD **)this + 3) + 16LL))(
        *((_QWORD *)this + 3),
        &v17,
        &v7,
        a2);
      LOBYTE(v15) = 1;
      LODWORD(v16) = 0;
      std::make_shared<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo &,winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen &,winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId,enum winrt::Windows::Internal::Shell::CloudPCState,bool>(
        &v8,
        (__int64)a2,
        (__int64)&v7,
        (__int64)&v17,
        &v16,
        (char *)&v15);
      wil::AcquireSRWLockExclusive(&v16, (RTL_SRWLOCK *)this + 7);
      v6 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
             a2,
             &v15);
      std::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>(
        v11,
        v6,
        &v8);
      std::_Hash<std::_Umap_traits<winrt::hstring,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>>,0>>::emplace<std::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>>(
        (float *)this + 18,
        (__int64)v10,
        v11);
      std::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>::~pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>((__int64)v11);
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v15);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v16);
      winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::SubsribeToTransitionScreenDismissEvent(
        this,
        &v8);
      if ( !(unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode() )
      {
        winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::SubsribeToWaitOnLocalPCRequestedEvent(
          this,
          &v8);
        winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::SubscribeToRemoteSessionExitRequestedEvent(
          this,
          &v8);
      }
      *((_BYTE *)this + 248) = 1;
      if ( v9 )
        std::_Ref_count_base::_Decref(v9);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v7);
      tip2::test_watcher<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>>::~test_watcher<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>>((__int64)v12);
    }
    else
    {
      if ( tip2::details::shared_data<1,0,0>::is_running(v13[0] + 8) )
      {
        tip2::test_data_control<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>>::test_data_control<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>>(
          (__int64 *)&v15,
          v13);
        v15[272] = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>>::~test_data_control<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>>((void **)&v15);
        tip2::details::shared_data<1,0,0>::complete_without_lock(v13[0] + 8);
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v16);
      tip2::test_watcher<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>>::~test_watcher<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>>((__int64)v12);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x1A9,
      (int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionwindowmanager.cpp",
      v5);
  }
}
