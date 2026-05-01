/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1 @ 0x180647150
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_InitCoro$2 @ 0x1806470BC (winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseCloudPCConnection.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062824 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ??1?$function@$$A6A_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@Z@std@@QEAA@XZ @ 0x180071F24 (--1-$function@$$A6A_NAEBU-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180101060 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18012BBCC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Dismiss@?$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUTransitionScreenId@TransitionScreen@CloudDesktop@Shell@Internal@Windows@3@AEBW4DismissalReason@567893@@Z @ 0x180197354 (-Dismiss@-$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITran.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801D2024 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180219E7C (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028AAC4 (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ??0?$test_data_control@V?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18028CD70 (--0-$test_data_control@V-$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x180295E10 (-is_running@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?now@clock@winrt@@SA?AV?$time_point@Uclock@winrt@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@chrono@std@@XZ @ 0x1802C9F44 (-now@clock@winrt@@SA-AV-$time_point@Uclock@winrt@@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chro.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1timespan_awaiter@impl@winrt@@QEAA@XZ @ 0x1803386D0 (--1timespan_awaiter@impl@winrt@@QEAA@XZ.c)
 *     ?await_resume@timespan_awaiter@impl@winrt@@QEAAXXZ @ 0x18033A418 (-await_resume@timespan_awaiter@impl@winrt@@QEAAXXZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@implementation@Shell@Internal@Windows@2@_K@experimental@std@@@timespan_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@implementation@Shell@Internal@Windows@2@_K@experimental@std@@@experimental@std@@@Z @ 0x18033F024 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@impl.c)
 *     ??0?$weak_ptr@VCAppThumbnailWindow@@@std@@QEAA@AEBV01@@Z @ 0x180491EBC (--0-$weak_ptr@VCAppThumbnailWindow@@@std@@QEAA@AEBV01@@Z.c)
 *     ?shared_from_this@?$enable_shared_from_this@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA?AV?$shared_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x18049923C (-shared_from_this@-$enable_shared_from_this@UBootProviderActivator@implementation@Shell@Internal.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x1806219C4 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@de.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180624208 (--1-$test_data_control@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@t.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180624344 (--1-$test_watcher@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18062ABE8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout@@@detai.c)
 *     ?Get@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$com_ptr@UIVirtualDesktop@@@6@AEBUhstring@6@@Z @ 0x180644E18 (-Get@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA-AU-$com_ptr@UIVir.c)
 *     ?Remove@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x180645004 (-Remove@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@.c)
 *     std::_Global_new_std::_Func_impl_no_alloc__lambda_67f0fced1d981ef80ea3a06f45134b83__void___lambda_67f0fced1d981ef80ea3a06f45134b83___ @ 0x180646564 (std--_Global_new_std--_Func_impl_no_alloc__lambda_67f0fced1d981ef80ea3a06f45134b83__ea_180646564.c)
 *     std::_Global_new_std::_Func_impl_no_alloc__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__void___lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c___ @ 0x180646668 (std--_Global_new_std--_Func_impl_no_alloc__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__ea_180646668.c)
 *     _lambda_67f0fced1d981ef80ea3a06f45134b83_::_lambda_67f0fced1d981ef80ea3a06f45134b83_ @ 0x18064699C (_lambda_67f0fced1d981ef80ea3a06f45134b83_--_lambda_67f0fced1d981ef80ea3a06f45134b83_.c)
 *     _lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_::_lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_ @ 0x180646A20 (_lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_--_lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_.c)
 *     _lambda_67f0fced1d981ef80ea3a06f45134b83_::__lambda_67f0fced1d981ef80ea3a06f45134b83_ @ 0x180646BA0 (_lambda_67f0fced1d981ef80ea3a06f45134b83_--__lambda_67f0fced1d981ef80ea3a06f45134b83_.c)
 *     _lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_::__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_ @ 0x180646BF4 (_lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_--__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection_::_47_::_parameters_::__parameters_ @ 0x180646C48 (_winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseCloudPCConnectio.c)
 *     ?RaiseCPCProviderAppClosedTelemetryEvent@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@AEAAXW4DisconnectSource@23456@AEBUhstring@6@1_N@Z @ 0x1806486B8 (-RaiseCPCProviderAppClosedTelemetryEvent@SwitchConnectionHandler@implementation@Shell@Internal@W.c)
 *     ?DisconnectReason@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA?AW4DisconnectSource@23456@XZ @ 0x180649AE8 (-DisconnectReason@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA-AW4.c)
 *     ?IsTransitionScreenShown@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180649BE0 (-IsTransitionScreenShown@RemoteSessionInformation@implementation@Shell@Internal@Win_ea_180649BE0.c)
 *     ?RemoteDesktopProviderInfo@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA?AU03456@XZ @ 0x180649C14 (-RemoteDesktopProviderInfo@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?SetTransitionScreenDismissedCallback@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBV?$function@$$A6AXXZ@std@@@Z @ 0x180649C3C (-SetTransitionScreenDismissedCallback@RemoteSessionInformation@implementation@Shell@Internal@Win.c)
 *     ?TransitionScreen@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA?AU00CloudDesktop@3456@XZ @ 0x180649CB8 (-TransitionScreen@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA-AU0.c)
 *     ?TransitionScreenId@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA?AU0TransitionScreen@CloudDesktop@3456@XZ @ 0x180649CE0 (-TransitionScreenId@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA-A.c)
 *     ?TransitionScreenType@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA?AW4ScreenType@TransitionScreen@CloudDesktop@3456@XZ @ 0x180649D64 (-TransitionScreenType@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=25
void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection__ResumeCoro_1(
        char *a1)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 v3; // rcx
  void *v4; // r8
  std::_Ref_count_base *v5; // rcx
  __int64 v6; // r15
  int v7; // eax
  __int64 **v8; // rax
  bool IsTransitionScreenShown; // bl
  int v10; // eax
  char v11; // r13
  char v12; // cl
  RTL_SRWLOCK *v13; // rbx
  PVOID Ptr; // rbx
  __int64 v15; // rdi
  unsigned int v16; // ebx
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  _QWORD *v20; // rax
  std::_Ref_count_base *v21; // rcx
  __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // rdx
  std::_Ref_count_base *v25; // rcx
  __int64 **v26; // rdi
  unsigned int *v27; // rax
  int v28; // eax
  wil::details::in1diag3 *v29; // rcx
  __int64 v30; // rdx
  std::_Ref_count_base *v31; // rcx
  __int64 v32; // rdi
  __int64 (__fastcall *v33)(__int64, char *); // r15
  int v34; // eax
  __int64 *v35; // rbx
  __int64 (__fastcall ****v36)(_QWORD, _QWORD, _QWORD); // r12
  __int64 *v37; // rdi
  __int64 v38; // rdx
  _QWORD *v39; // rbx
  int v40; // eax
  int v41; // eax
  int v42; // eax
  _QWORD *v43; // rax
  std::_Ref_count_base *v44; // rcx
  __int64 v45; // r15
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 **v48; // rdi
  unsigned int *v49; // rax
  std::_Ref_count_base *v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  std::_Ref_count_base *v53; // rcx
  int v54; // [rsp+20h] [rbp-198h]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  try
  {
    if ( (unsigned __int16)(*((_WORD *)a1 + 4) + 1) > 8u )
    {
LABEL_79:
      __debugbreak();
    }
    else
    {
      switch ( *((_WORD *)a1 + 4) )
      {
        case 0xFFFF:
        case 3:
          goto LABEL_77;
        case 0:
        case 1:
          goto LABEL_79;
        case 2:
          v2 = *(RTL_SRWLOCK **)(a1 + 593);
          std::enable_shared_from_this<winrt::Windows::Internal::Shell::implementation::BootProviderActivator>::shared_from_this(
            (__int64)&v2[9],
            (_QWORD *)a1 + 2);
          tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>>((__int64)(a1 + 32));
          wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)a1 + 11, v2 + 20);
          a1[96] = 0;
          *((_WORD *)a1 + 4) = 4;
          `winrt::resume_background'::`2'::awaitable::await_suspend(v3, (void (*)(void *, void *))a1, v4);
          return;
        case 4:
          *((_QWORD *)a1 + 13) = 0LL;
          v6 = *(_QWORD *)(a1 + 593);
          v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 152) + 48LL))(*(_QWORD *)(v6 + 152));
          if ( v7 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x1BB,
              (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
              (const char *)(unsigned int)v7,
              v54);
          v8 = (__int64 **)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::RemoteDesktopProviderInfo(
                             *(_QWORD *)(a1 + 601),
                             a1 + 112);
          winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
            v8,
            (_QWORD *)a1 + 15);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 112));
          winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::Get(
            *(RTL_SRWLOCK **)(v6 + 136),
            (__int64 *)a1 + 16,
            (__int64 *)a1 + 15);
          IsTransitionScreenShown = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::IsTransitionScreenShown(*(winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation **)(a1 + 601));
          v10 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreenType(*(_QWORD *)(a1 + 601));
          if ( !IsTransitionScreenShown || (v11 = 1, v10 != 3) )
            v11 = 0;
          a1[136] = v11;
          if ( !IsTransitionScreenShown || (v12 = 1, v10 != 1) )
            v12 = 0;
          a1[584] = v12;
          a1[137] = v12;
          a1[138] = 0;
          v13 = *(RTL_SRWLOCK **)(a1 + 601);
          Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK **)a1 + 72, v13 + 2);
          Ptr = v13[5].Ptr;
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)a1 + 72);
          winrt::clock::now((_QWORD *)a1 + 18);
          v15 = *((_QWORD *)a1 + 18) - (_QWORD)Ptr;
          v16 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::DisconnectReason(*(_QWORD *)(a1 + 601));
          *((_DWORD *)a1 + 38) = v16;
          v18 = *((_QWORD *)a1 + 16);
          v19 = *((_QWORD *)a1 + 13);
          if ( v18 == v19 )
          {
            if ( a1[136] && v15 < 30000000 )
            {
              *((_QWORD *)a1 + 20) = 0LL;
              *((_QWORD *)a1 + 21) = 0LL;
              *((_QWORD *)a1 + 22) = 30000000 - v15;
              *((_QWORD *)a1 + 23) = 0LL;
              *((_DWORD *)a1 + 48) = 0;
              if ( 30000000 - v15 > 0 )
              {
                *((_WORD *)a1 + 4) = 6;
                winrt::impl::timespan_awaiter::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::WindowTabHost *,unsigned __int64>::promise_type>(
                  (winrt::impl::timespan_awaiter *)(a1 + 160),
                  (__int64)a1);
                return;
              }
LABEL_40:
              winrt::impl::timespan_awaiter::await_resume((winrt::impl::timespan_awaiter *)(a1 + 160));
              winrt::impl::timespan_awaiter::~timespan_awaiter((winrt::cancellable_promise **)a1 + 20);
              v32 = *(_QWORD *)(*(_QWORD *)(a1 + 593) + 152LL);
              v33 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v32 + 48LL);
              if ( *((_QWORD *)a1 + 13) )
                winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 13);
              v34 = v33(v32, a1 + 104);
              if ( v34 < 0 )
                wil::details::in1diag3::Throw_Hr(
                  retaddr,
                  (void *)0x1CF,
                  (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
                  (const char *)(unsigned int)v34,
                  v54);
            }
            v35 = (__int64 *)(a1 + 104);
            if ( *((_QWORD *)a1 + 13) == *((_QWORD *)a1 + 16) )
            {
              v36 = *(__int64 (__fastcall *****)(_QWORD, _QWORD, _QWORD))(a1 + 593);
              v37 = (__int64 *)((__int64 (__fastcall *)(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD), char *))(*v36)[9])(
                                 v36,
                                 a1 + 200);
              if ( v35 != v37 )
              {
                if ( *v35 )
                  winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 13);
                v38 = *v37;
                *v37 = 0LL;
                *v35 = v38;
              }
              if ( *((_QWORD *)a1 + 25) )
                winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 25);
              v39 = a1 + 208;
              *((_QWORD *)a1 + 26) = 0LL;
              v40 = (**v36[19])(v36[19], &GUID_53f5ca0b_158f_4124_900c_057158060b27, a1 + 208);
              if ( v40 < 0 )
                wil::details::in1diag3::Throw_Hr(
                  retaddr,
                  (void *)0x1D7,
                  (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
                  (const char *)(unsigned int)v40,
                  v54);
              v41 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v39 + 192LL))(*v39);
              if ( v41 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x1D8,
                  (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
                  (const char *)(unsigned int)v41);
              if ( *v39 )
                winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 26);
            }
            if ( !a1[136] && !a1[584] )
            {
              v42 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 593) + 152LL) + 104LL))(*(_QWORD *)(*(_QWORD *)(a1 + 593) + 152LL));
              v29 = retaddr;
              if ( v42 < 0 )
                wil::details::in1diag3::Throw_Hr(
                  retaddr,
                  (void *)0x1F5,
                  (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
                  (const char *)(unsigned int)v42,
                  v54);
              v30 = *((unsigned int *)a1 + 38);
LABEL_31:
              winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::RaiseCPCProviderAppClosedTelemetryEvent(
                v29,
                v30,
                a1 + 617,
                a1 + 120);
              goto LABEL_32;
            }
            v43 = (_QWORD *)std::enable_shared_from_this<winrt::Windows::Internal::Shell::implementation::BootProviderActivator>::shared_from_this(
                              *(_QWORD *)(a1 + 593) + 72LL,
                              (_QWORD *)a1 + 29);
            std::weak_ptr<CAppThumbnailWindow>::weak_ptr<CAppThumbnailWindow>((_QWORD *)a1 + 27, v43);
            v44 = (std::_Ref_count_base *)*((_QWORD *)a1 + 30);
            if ( v44 )
              std::_Ref_count_base::_Decref(v44);
            v45 = *(_QWORD *)(a1 + 601);
            v46 = lambda_67f0fced1d981ef80ea3a06f45134b83_::_lambda_67f0fced1d981ef80ea3a06f45134b83_(
                    (__int64)(a1 + 320),
                    (_QWORD *)a1 + 27,
                    (__int64)(a1 + 128),
                    (_QWORD *)a1 + 13,
                    (struct winrt::hstring *)(a1 + 617),
                    (struct winrt::hstring *)(a1 + 120),
                    (_DWORD *)a1 + 38,
                    a1 + 137);
            *((_QWORD *)a1 + 39) = 0LL;
            *((_QWORD *)a1 + 39) = std::_Global_new_std::_Func_impl_no_alloc__lambda_67f0fced1d981ef80ea3a06f45134b83__void___lambda_67f0fced1d981ef80ea3a06f45134b83___(v46);
            winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::SetTransitionScreenDismissedCallback(
              v45,
              a1 + 256);
            std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
              (__int64)(a1 + 256),
              v47);
            lambda_67f0fced1d981ef80ea3a06f45134b83_::__lambda_67f0fced1d981ef80ea3a06f45134b83_((__int64)(a1 + 320));
            v48 = (__int64 **)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreen(
                                *(_QWORD *)(a1 + 601),
                                a1 + 376);
            *((_DWORD *)a1 + 96) = 7;
            v49 = (unsigned int *)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreenId(
                                    *(_QWORD *)(a1 + 601),
                                    a1 + 388);
            winrt::impl::consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::Dismiss(
              v48,
              v49,
              (unsigned int *)a1 + 96);
            winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 376));
            v50 = (std::_Ref_count_base *)*((_QWORD *)a1 + 28);
            if ( v50 )
              std::_Ref_count_base::_Decwref(v50);
          }
          else
          {
            if ( !v18 )
            {
LABEL_32:
              a1[138] = 1;
              goto LABEL_66;
            }
            if ( !v11 )
            {
              v28 = (*(__int64 (**)(void))(**(_QWORD **)(*(_QWORD *)(a1 + 593) + 152LL) + 104LL))();
              v29 = retaddr;
              if ( v28 < 0 )
                wil::details::in1diag3::Throw_Hr(
                  retaddr,
                  (void *)0x237,
                  (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
                  (const char *)(unsigned int)v28,
                  v54);
              v30 = v16;
              goto LABEL_31;
            }
            wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout>::ReportUsage(
              (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout>::GetImpl'::`2'::impl,
              1u,
              v19,
              v17);
            v20 = (_QWORD *)std::enable_shared_from_this<winrt::Windows::Internal::Shell::implementation::BootProviderActivator>::shared_from_this(
                              *(_QWORD *)(a1 + 593) + 72LL,
                              (_QWORD *)a1 + 51);
            std::weak_ptr<CAppThumbnailWindow>::weak_ptr<CAppThumbnailWindow>((_QWORD *)a1 + 49, v20);
            v21 = (std::_Ref_count_base *)*((_QWORD *)a1 + 52);
            if ( v21 )
              std::_Ref_count_base::_Decref(v21);
            v22 = *(_QWORD *)(a1 + 601);
            v23 = lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_::_lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_(
                    (__int64)(a1 + 496),
                    (_QWORD *)a1 + 49,
                    (__int64)(a1 + 128),
                    (_QWORD *)a1 + 13,
                    (_DWORD *)a1 + 38,
                    (struct winrt::hstring *)(a1 + 120),
                    (struct winrt::hstring *)(a1 + 617));
            *((_QWORD *)a1 + 61) = 0LL;
            *((_QWORD *)a1 + 61) = std::_Global_new_std::_Func_impl_no_alloc__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__void___lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c___(v23);
            winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::SetTransitionScreenDismissedCallback(
              v22,
              a1 + 432);
            std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
              (__int64)(a1 + 432),
              v24);
            lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_::__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_((__int64)(a1 + 496));
            v25 = (std::_Ref_count_base *)*((_QWORD *)a1 + 50);
            if ( v25 )
              std::_Ref_count_base::_Decwref(v25);
            v26 = (__int64 **)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreen(
                                *(_QWORD *)(a1 + 601),
                                a1 + 552);
            *((_DWORD *)a1 + 140) = 8;
            v27 = (unsigned int *)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreenId(
                                    *(_QWORD *)(a1 + 601),
                                    a1 + 564);
            winrt::impl::consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::Dismiss(
              v26,
              v27,
              (unsigned int *)a1 + 140);
            winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 552));
          }
LABEL_66:
          winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::Remove(
            *(RTL_SRWLOCK **)(*(_QWORD *)(a1 + 593) + 136LL),
            (const struct winrt::hstring *)(a1 + 120));
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout>::ReportUsage(
            (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout>::GetImpl'::`2'::impl,
            1u,
            v51,
            v52);
          if ( !LockSetForegroundWindow(2u) )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x244,
              (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
              (const char *)0x80070005LL);
          if ( a1[138] && tip2::details::shared_data<1,0,0>::is_running(*((_QWORD *)a1 + 10) + 8LL) )
          {
            tip2::test_data_control<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>>::test_data_control<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>>(
              (__int64 *)a1 + 71,
              (__int64 *)a1 + 10);
            *(_BYTE *)(*((_QWORD *)a1 + 71) + 297LL) = 1;
            tip2::test_data_control<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>::~test_data_control<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>((void **)a1 + 71);
            tip2::details::shared_data<1,0,0>::complete_without_lock(*((_QWORD *)a1 + 10) + 8LL);
          }
          if ( *((_QWORD *)a1 + 16) )
            winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 16);
          winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a1 + 15);
          if ( *((_QWORD *)a1 + 13) )
            winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 13);
          CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)a1 + 11);
          tip2::test_watcher<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>::~test_watcher<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>((__int64)(a1 + 32));
          v53 = (std::_Ref_count_base *)*((_QWORD *)a1 + 3);
          if ( v53 )
            std::_Ref_count_base::_Decref(v53);
LABEL_77:
          winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection_::_47_::_parameters_::__parameters_((__int64)(a1 + 593));
          if ( *((_WORD *)a1 + 5) )
            operator delete(a1, (const struct std::nothrow_t *)0x280);
          break;
        case 5:
          CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)a1 + 11);
          tip2::test_watcher<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>::~test_watcher<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>((__int64)(a1 + 32));
          v5 = (std::_Ref_count_base *)*((_QWORD *)a1 + 3);
          if ( v5 )
            std::_Ref_count_base::_Decref(v5);
          goto LABEL_77;
        case 6:
          goto LABEL_40;
        case 7:
          winrt::impl::timespan_awaiter::~timespan_awaiter((winrt::cancellable_promise **)a1 + 20);
          if ( *((_QWORD *)a1 + 16) )
            winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 16);
          winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a1 + 15);
          if ( *((_QWORD *)a1 + 13) )
            winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 13);
          CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)a1 + 11);
          tip2::test_watcher<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>::~test_watcher<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>((__int64)(a1 + 32));
          v31 = (std::_Ref_count_base *)*((_QWORD *)a1 + 3);
          if ( v31 )
            std::_Ref_count_base::_Decref(v31);
          goto LABEL_77;
      }
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
