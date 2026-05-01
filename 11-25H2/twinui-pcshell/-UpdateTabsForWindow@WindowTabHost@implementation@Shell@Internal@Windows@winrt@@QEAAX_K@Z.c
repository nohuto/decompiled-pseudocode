/*
 * XREFs of ?UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x1800A9ADC
 * Callers:
 *     ?UpdateTabsForWindow@?$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@@impl@winrt@@UEAAH_K@Z @ 0x1800A9AB0 (-UpdateTabsForWindow@-$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWin.c)
 *     ?FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800F3DF0 (-FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18005CCA0 (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@UWindowTabDataModel@Shell@UI@.c)
 *     ?check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z @ 0x18005CD48 (-check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z.c)
 *     ?GetResults@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@UWindowTabDataModel@Shell@UI@Internal@34@@impl@winrt@@QEBA@XZ @ 0x18005CD88 (-GetResults@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UWindowTabDataModel@.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x18005CE08 (--$wait_for_completed@U-$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@F.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005FC84 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?GetPendingTabChanges@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEAV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@0@Z @ 0x180061210 (-GetPendingTabChanges@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEAV-$vector@.c)
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x180061490 (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 *     ?SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x1800620F4 (-SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFi.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062824 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?GetNetworkConnectivityLevel@?$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConnectionProfile@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062884 (-GetNetworkConnectivityLevel@-$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConn.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??$invoke@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@UWindowTabHost@implementation@Shell@Internal@34@UWindowTabsChangedEventArgs@7UI@834@@impl@winrt@@YA_NAEBU?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@1@AEBUWindowTabHost@implementation@Shell@Internal@41@AEBUWindowTabsChangedEventArgs@7UI@841@@Z @ 0x1800A9F64 (--$invoke@U-$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabs.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800A9FA4 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@UIWindowTabExtension@Sh.c)
 *     ?GetDisplayMonitorInfoForMonitor@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x1800A9FFC (-GetDisplayMonitorInfoForMonitor@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UID.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?at@?$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U?$hash@_K@std@@U?$equal_to@_K@8@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@@std@@QEAAAEAUWindowData@implementation@Shell@Internal@Windows@winrt@@AEB_K@Z @ 0x18018CC58 (-at@-$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U-$hash@_K@std@@U.c)
 *     ?remove@?$event@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1801D3244 (-remove@-$event@U-$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWind.c)
 *     ?get_token@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@AEBA?AUevent_token@2@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@2@@Z @ 0x180221080 (-get_token@-$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt.c)
 *     ?HideViewRequested@?$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UViewCoordinator@Shell@UI@WindowsUdk@winrt@@UHideViewRequestedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x180247044 (-HideViewRequested@-$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI@Win.c)
 *     ??$_Try_emplace@AEB_KAEAU?$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAUWindowTabDataModel@Shell@UI@Internal@Windows@2@AEAUevent_token@2@AEAU82@@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@_N@1@AEB_KAEAU?$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAUWindowTabDataModel@Shell@UI@Internal@Windows@4@AEAUevent_token@4@3@Z @ 0x1802A2F0C (--$_Try_emplace@AEB_KAEAU-$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802D34A4 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802D34BC (__Platform_AcquireSRWLockExclusive.c)
 *     ??$call@AEAV_lambda_e608e5034e30ee0eacecb96a86560567_@@@?$factory_cache_entry@UWindowTabsChangedEventArgs@Shell@UI@Internal@Windows@winrt@@UIWindowTabsChangedEventArgsFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_e608e5034e30ee0eacecb96a86560567_@@@Z @ 0x180558834 (--$call@AEAV_lambda_e608e5034e30ee0eacecb96a86560567_@@@-$factory_cache_entry@UWindowTabsChanged.c)
 *     ?TabsChanged@?$consume_Windows_Internal_UI_Shell_IWindowTabDataModel@UIWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@UWindowTabDataModelTabsChangedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x18055A7A8 (-TabsChanged@-$consume_Windows_Internal_UI_Shell_IWindowTabDataModel@UIWindowTabDataModel@Shell@.c)
 *     ?TryGetForWindowAsync@WindowTabDataModel@Shell@UI@Internal@Windows@winrt@@SA@IAEBUUser@System@56@@Z @ 0x18055A8B4 (-TryGetForWindowAsync@WindowTabDataModel@Shell@UI@Internal@Windows@winrt@@SA@IAEBUUser@System@56.c)
 */

// Hidden C++ exception states: #wind=12
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateTabsForWindow(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this,
        struct winrt::Windows::System::User *a2)
{
  RTL_SRWLOCK *v3; // rbx
  __int64 v4; // r9
  __int64 v5; // rcx
  unsigned __int64 i; // rdx
  char v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  bool v12; // di
  __int64 v13; // rbx
  volatile signed __int32 *v14; // rax
  volatile signed __int32 *v15; // r14
  const char *v16; // r9
  volatile signed __int32 *v17; // rdi
  __int64 v18; // r14
  __int64 v19; // rcx
  __int64 *v20; // rdi
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 *v23; // rcx
  int NetworkConnectivityLevel; // edi
  __int64 v25; // r8
  __int64 v26; // r9
  RTL_SRWLOCK *v27; // rax
  char v28; // r8
  __int64 v29; // r9
  __int64 v30; // r8
  __int64 v31; // r9
  RTL_SRWLOCK *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // [rsp+40h] [rbp-B8h] BYREF
  struct winrt::Windows::System::User *v35; // [rsp+48h] [rbp-B0h] BYREF
  unsigned int v36; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+58h] [rbp-A0h] BYREF
  char v38[8]; // [rsp+60h] [rbp-98h] BYREF
  char v39[8]; // [rsp+68h] [rbp-90h] BYREF
  RTL_SRWLOCK *v40; // [rsp+70h] [rbp-88h] BYREF
  struct winrt::Windows::System::User **v41; // [rsp+78h] [rbp-80h] BYREF
  __int128 v42; // [rsp+80h] [rbp-78h] BYREF
  __int64 v43; // [rsp+90h] [rbp-68h]
  __int128 v44; // [rsp+98h] [rbp-60h] BYREF
  __int64 v45; // [rsp+A8h] [rbp-50h]
  __int64 *v46; // [rsp+B0h] [rbp-48h]
  char v47; // [rsp+B8h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]
  __int64 *v49; // [rsp+100h] [rbp+8h] BYREF
  struct winrt::Windows::System::User *v50; // [rsp+108h] [rbp+10h] BYREF
  __int64 v51; // [rsp+110h] [rbp+18h] BYREF
  __int64 v52; // [rsp+118h] [rbp+20h] BYREF

  v50 = a2;
  v3 = (RTL_SRWLOCK *)((char *)this + 616);
  AcquireSRWLockShared((PSRWLOCK)this + 77);
  v5 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
  {
    v7 = -77;
    v5 = 0x100000001B3LL * (*((unsigned __int8 *)&v50 + i) ^ (unsigned __int64)v5);
  }
  v8 = 2 * (v5 & *((_QWORD *)this + 84));
  v9 = *((_QWORD *)this + 81);
  v10 = *(_QWORD *)(v9 + 16 * (v5 & *((_QWORD *)this + 84)) + 8);
  if ( v10 == *((_QWORD *)this + 79) )
  {
LABEL_8:
    v10 = 0LL;
  }
  else
  {
    v11 = *(_QWORD *)(v9 + 8 * v8);
    while ( v50 != *(struct winrt::Windows::System::User **)(v10 + 16) )
    {
      if ( v10 == v11 )
        goto LABEL_8;
      v10 = *(_QWORD *)(v10 + 8);
    }
  }
  try
  {
    v12 = !v10 || v10 == *((_QWORD *)this + 79);
    if ( v3 )
      ReleaseSRWLockShared(v3);
    if ( v12 && *((_BYTE *)this + 873) )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_WTMPublic>::GetImpl'::`2'::impl,
        1u,
        v7,
        v4);
      v44 = 0LL;
      v45 = 0LL;
      v42 = 0LL;
      v43 = 0LL;
      v34 = 0LL;
      v20 = (__int64 *)winrt::Windows::Internal::UI::Shell::WindowTabDataModel::TryGetForWindowAsync(
                         (unsigned int)&v36,
                         (const struct winrt::Windows::System::User *)(unsigned int)v50);
      v21 = winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Internal::UI::Shell::WindowTabDataModel>>::Status((__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))v20);
      if ( !v21 )
        v21 = winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Internal::UI::Shell::WindowTabDataModel>>(
                v20,
                v22);
      winrt::impl::check_status_canceled((winrt::impl *)v21, v22);
      winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Internal::UI::Shell::WindowTabDataModel>,winrt::Windows::Internal::UI::Shell::WindowTabDataModel>::GetResults(
        v20,
        (winrt *)&v49);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v36);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v34);
      v23 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
              &v49,
              &v37);
      NetworkConnectivityLevel = winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel(v23);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v37);
      if ( !NetworkConnectivityLevel )
      {
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v49);
        return;
      }
      wil::AcquireSRWLockExclusive(&v40, v3);
      winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabDataModel<winrt::Windows::Internal::UI::Shell::IWindowTabDataModel>::TabsChanged(
        &v49,
        v39,
        (char *)this + 856);
      winrt::impl::consume_WindowsUdk_UI_Shell_IViewCoordinator<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::HideViewRequested(
        &v49,
        v38,
        (char *)this + 864);
      std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::_Try_emplace<unsigned __int64 const &,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory> &,winrt::Windows::Internal::UI::Shell::WindowTabDataModel &,winrt::event_token &,winrt::event_token &>(
        (_DWORD)this + 624,
        (unsigned int)&v47,
        (unsigned int)&v50,
        (_DWORD)this + 136,
        (__int64)&v49,
        (__int64)v39,
        (__int64)v38);
      v27 = (RTL_SRWLOCK *)std::unordered_map<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData>::at(
                             (char *)this + 624,
                             &v50,
                             v25,
                             v26);
      winrt::Windows::Internal::Shell::implementation::WindowData::GetPendingTabChanges(
        v27,
        (__int64)&v44,
        (__int64)&v42);
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_WTMPublic>::GetImpl'::`2'::impl,
        1u,
        v28,
        v29);
      v32 = (RTL_SRWLOCK *)std::unordered_map<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData>::at(
                             (char *)this + 624,
                             &v50,
                             v30,
                             v31);
      winrt::Windows::Internal::Shell::implementation::WindowData::SyncWindowTabDataModel(
        v32,
        *((_DWORD *)this + 198),
        1LL);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v40);
      winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncGlobalTabOrder(
        (RTL_SRWLOCK *)this,
        (__int64)v50,
        (__int64 *)&v44,
        &v42);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v49);
      if ( (_QWORD)v42 )
        std::_Deallocate<16,0>((void *)v42, (const struct std::nothrow_t *)((v43 - v42) & 0xFFFFFFFFFFFFFFF0uLL));
      v10 = v44;
      if ( (_QWORD)v44 )
        std::_Deallocate<16,0>((void *)v44, (const struct std::nothrow_t *)((v45 - v44) & 0xFFFFFFFFFFFFFFF0uLL));
    }
    v35 = v50;
    v41 = &v35;
    v46 = &qword_18089BD48;
    _InterlockedIncrement64(&qword_18089BD48);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs,winrt::Windows::Internal::UI::Shell::IWindowTabsChangedEventArgsFactory> )
    {
      winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>::GetDisplayMonitorInfoForMonitor(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs,winrt::Windows::Internal::UI::Shell::IWindowTabsChangedEventArgsFactory>,
        &v51,
        v35);
      _InterlockedDecrement64(&qword_18089BD48);
    }
    else
    {
      _InterlockedDecrement64(&qword_18089BD48);
      winrt::impl::factory_cache_entry<winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs,winrt::Windows::Internal::UI::Shell::IWindowTabsChangedEventArgsFactory>::call<_lambda_e608e5034e30ee0eacecb96a86560567_ &>(
        v10,
        &v51,
        &v41);
    }
    v13 = 0LL;
    v52 = 0LL;
    _Platform_AcquireSRWLockExclusive((PSRWLOCK)this + 102);
    v14 = (volatile signed __int32 *)*((_QWORD *)this + 101);
    v15 = 0LL;
    if ( v14 )
    {
      v52 = *((_QWORD *)this + 101);
      _InterlockedIncrement(v14);
      v15 = v14;
      v13 = v52;
    }
    ReleaseSRWLockExclusive_0((PSRWLOCK)this + 102);
    if ( v15 )
    {
      v17 = v15 + 2;
      v18 = (__int64)&v15[2 * *((unsigned int *)v15 + 1) + 2];
      while ( v17 != (volatile signed __int32 *)v18 )
      {
        if ( !(unsigned __int8)winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>,winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>(
                                 v17,
                                 this,
                                 &v51) )
        {
          v33 = *(_QWORD *)winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>::get_token(
                             v19,
                             &v49,
                             v17);
          winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>::remove(
            (char *)this + 808,
            v33);
        }
        v17 += 2;
      }
    }
    if ( v13 )
      winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>::unconditional_release_ref(&v52);
    if ( v51 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v51);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xAE,
      (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
      v16);
  }
}
