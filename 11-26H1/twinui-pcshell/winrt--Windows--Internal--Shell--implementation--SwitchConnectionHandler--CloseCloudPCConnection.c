/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1 @ 0x18066CF40
 * Callers:
 *     ?CloseCloudPCConnection@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@Uhstring@6@@Z @ 0x18066D8E8 (-CloseCloudPCConnection@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@AEA.c)
 * Callees:
 *     ??1?$function@$$A6A_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@Z@std@@QEAA@XZ @ 0x180016460 (--1-$function@$$A6A_NAEBU-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002AE28 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801C8264 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801E6D48 (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ??0?$test_data_control@V?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180280074 (--0-$test_data_control@V-$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028BFAC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802A27AC (-is_running@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?now@clock@winrt@@SA?AV?$time_point@Uclock@winrt@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@chrono@std@@XZ @ 0x1802C16CC (-now@clock@winrt@@SA-AV-$time_point@Uclock@winrt@@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chro.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1timespan_awaiter@impl@winrt@@QEAA@XZ @ 0x180329228 (--1timespan_awaiter@impl@winrt@@QEAA@XZ.c)
 *     ?await_resume@timespan_awaiter@impl@winrt@@QEAAXXZ @ 0x180330970 (-await_resume@timespan_awaiter@impl@winrt@@QEAAXXZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@implementation@Shell@Internal@Windows@2@_K@experimental@std@@@timespan_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@implementation@Shell@Internal@Windows@2@_K@experimental@std@@@experimental@std@@@Z @ 0x18033EF14 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@impl.c)
 *     ??0?$weak_ptr@VCAppThumbnailWindow@@@std@@QEAA@AEBV01@@Z @ 0x1804A2CDC (--0-$weak_ptr@VCAppThumbnailWindow@@@std@@QEAA@AEBV01@@Z.c)
 *     ?shared_from_this@?$enable_shared_from_this@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA?AV?$shared_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1804AA0EC (-shared_from_this@-$enable_shared_from_this@UBootProviderActivator@implementation@Shell@Internal.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180647468 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@de.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180649EF0 (--1-$test_data_control@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@t.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18064A02C (--1-$test_watcher@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1806505F8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout@@@detai.c)
 *     ?Get@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$com_ptr@UIVirtualDesktop@@@6@AEBUhstring@6@@Z @ 0x18066ABB4 (-Get@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA-AU-$com_ptr@UIVir.c)
 *     ?Remove@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x18066ADA4 (-Remove@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@.c)
 *     std::_Global_new_std::_Func_impl_no_alloc__lambda_67f0fced1d981ef80ea3a06f45134b83__void___lambda_67f0fced1d981ef80ea3a06f45134b83___ @ 0x18066C2C8 (std--_Global_new_std--_Func_impl_no_alloc__lambda_67f0fced1d981ef80ea3a06f45134b83__ea_18066C2C8.c)
 *     std::_Global_new_std::_Func_impl_no_alloc__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__void___lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c___ @ 0x18066C3DC (std--_Global_new_std--_Func_impl_no_alloc__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__ea_18066C3DC.c)
 *     _lambda_67f0fced1d981ef80ea3a06f45134b83_::_lambda_67f0fced1d981ef80ea3a06f45134b83__0 @ 0x18066C774 (_lambda_67f0fced1d981ef80ea3a06f45134b83_--_lambda_67f0fced1d981ef80ea3a06f45134b83__0.c)
 *     _lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_::_lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__0 @ 0x18066C894 (_lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_--_lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__0.c)
 *     _lambda_67f0fced1d981ef80ea3a06f45134b83_::__lambda_67f0fced1d981ef80ea3a06f45134b83_ @ 0x18066CA1C (_lambda_67f0fced1d981ef80ea3a06f45134b83_--__lambda_67f0fced1d981ef80ea3a06f45134b83_.c)
 *     _lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_::__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_ @ 0x18066CA70 (_lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_--__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection_::_47_::_parameters_::__parameters_ @ 0x18066CAC4 (_winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseCloudPCConnectio.c)
 *     ?Dismiss@?$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUTransitionScreenId@TransitionScreen@CloudDesktop@Shell@Internal@Windows@3@AEBW4DismissalReason@567893@@Z @ 0x18066DA68 (-Dismiss@-$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITran.c)
 *     ?RaiseCPCProviderAppClosedTelemetryEvent@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@AEAAXW4DisconnectSource@23456@AEBUhstring@6@1_N@Z @ 0x18066E58C (-RaiseCPCProviderAppClosedTelemetryEvent@SwitchConnectionHandler@implementation@Shell@Internal@W.c)
 *     ?DisconnectReason@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA?AW4DisconnectSource@23456@XZ @ 0x18066FA88 (-DisconnectReason@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA-AW4.c)
 *     ?IsTransitionScreenShown@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x18066FB80 (-IsTransitionScreenShown@RemoteSessionInformation@implementation@Shell@Internal@Win_ea_18066FB80.c)
 *     ?RemoteDesktopProviderInfo@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA?AU03456@XZ @ 0x18066FBB4 (-RemoteDesktopProviderInfo@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?SetTransitionScreenDismissedCallback@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBV?$function@$$A6AXXZ@std@@@Z @ 0x18066FBDC (-SetTransitionScreenDismissedCallback@RemoteSessionInformation@implementation@Shell@Internal@Win.c)
 *     ?TransitionScreen@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA?AU00CloudDesktop@3456@XZ @ 0x18066FC58 (-TransitionScreen@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA-AU0.c)
 *     ?TransitionScreenId@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA?AU0TransitionScreen@CloudDesktop@3456@XZ @ 0x18066FC80 (-TransitionScreenId@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA-A.c)
 *     ?TransitionScreenType@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA?AW4ScreenType@TransitionScreen@CloudDesktop@3456@XZ @ 0x18066FD04 (-TransitionScreenType@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=25
void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection__ResumeCoro_1(
        char *a1)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 v3; // rcx
  void *v4; // r8
  std::_Ref_count_base *v5; // rcx
  __int64 *v6; // r15
  _QWORD *v7; // r13
  __int64 v8; // r12
  int v9; // eax
  __int64 **v10; // rax
  bool IsTransitionScreenShown; // bl
  int v12; // eax
  int v13; // edx
  bool v14; // zf
  char v15; // al
  char v16; // cl
  RTL_SRWLOCK *v17; // rbx
  PVOID Ptr; // rbx
  unsigned int v19; // edi
  __int64 v20; // rdx
  __int64 v21; // rbx
  _QWORD *v22; // rax
  std::_Ref_count_base *v23; // rcx
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rdx
  std::_Ref_count_base *v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rax
  int v30; // eax
  wil::details::in1diag3 *v31; // rcx
  __int64 v32; // rdx
  std::_Ref_count_base *v33; // rcx
  __int64 v34; // rbx
  __int64 (__fastcall *v35)(__int64, char *); // rdi
  int v36; // eax
  __int64 v37; // r12
  __int64 *v38; // rbx
  __int64 v39; // rdx
  _QWORD *v40; // rbx
  int v41; // eax
  int v42; // eax
  int v43; // eax
  _QWORD *v44; // rax
  std::_Ref_count_base *v45; // rcx
  __int64 v46; // r15
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rdi
  __int64 v50; // rax
  std::_Ref_count_base *v51; // rcx
  __int64 v52; // r8
  std::_Ref_count_base *v53; // rcx
  int v54; // [rsp+20h] [rbp-198h]
  char v55; // [rsp+40h] [rbp-178h]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_76;
      case 2:
        v2 = (RTL_SRWLOCK *)*((_QWORD *)a1 + 75);
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
        v6 = (__int64 *)(a1 + 104);
        *((_QWORD *)a1 + 13) = 0LL;
        v7 = a1 + 600;
        v8 = *((_QWORD *)a1 + 75);
        v9 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)(v8 + 152) + 48LL))(
               *(_QWORD *)(v8 + 152),
               a1 + 104);
        if ( v9 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x1BB,
            (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
            (const char *)(unsigned int)v9,
            v54);
        v10 = (__int64 **)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::RemoteDesktopProviderInfo(
                            *((_QWORD *)a1 + 76),
                            a1 + 112);
        winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
          v10,
          (_QWORD *)a1 + 15);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 112));
        winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::Get(
          *(RTL_SRWLOCK **)(v8 + 136),
          (__int64 *)a1 + 16,
          (__int64 *)a1 + 15);
        IsTransitionScreenShown = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::IsTransitionScreenShown(*((winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation **)a1 + 76));
        v12 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreenType(*((_QWORD *)a1 + 76));
        v13 = v12;
        if ( !IsTransitionScreenShown || (v14 = v12 == 3, v15 = 1, !v14) )
          v15 = 0;
        v55 = v15;
        a1[136] = v15;
        if ( !IsTransitionScreenShown || (v16 = 1, v13 != 1) )
          v16 = 0;
        a1[584] = v16;
        a1[137] = v16;
        a1[138] = 0;
        v17 = (RTL_SRWLOCK *)*((_QWORD *)a1 + 76);
        Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK **)a1 + 72, v17 + 2);
        Ptr = v17[5].Ptr;
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)a1 + 72);
        winrt::clock::now((_QWORD *)a1 + 18);
        v19 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::DisconnectReason(*((_QWORD *)a1 + 76));
        *((_DWORD *)a1 + 38) = v19;
        v20 = *((_QWORD *)a1 + 16);
        if ( v20 == *v6 )
        {
          if ( a1[136] && (__int64)(*((_QWORD *)a1 + 18) - (_QWORD)Ptr) < 30000000 )
          {
            v21 = (__int64)Ptr - *((_QWORD *)a1 + 18) + 30000000;
            *((_QWORD *)a1 + 20) = 0LL;
            *((_QWORD *)a1 + 21) = 0LL;
            *((_QWORD *)a1 + 22) = v21;
            *((_QWORD *)a1 + 23) = 0LL;
            *((_DWORD *)a1 + 48) = 0;
            if ( v21 > 0 )
            {
              *((_WORD *)a1 + 4) = 6;
              winrt::impl::timespan_awaiter::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::WindowTabHost *,unsigned __int64>::promise_type>(
                (winrt::impl::timespan_awaiter *)(a1 + 160),
                (__int64)a1);
              return;
            }
LABEL_39:
            winrt::impl::timespan_awaiter::await_resume((winrt::impl::timespan_awaiter *)(a1 + 160));
            winrt::impl::timespan_awaiter::~timespan_awaiter((winrt::cancellable_promise **)a1 + 20);
            v7 = a1 + 600;
            v34 = *(_QWORD *)(*((_QWORD *)a1 + 75) + 152LL);
            v35 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v34 + 48LL);
            v6 = (__int64 *)(a1 + 104);
            if ( *((_QWORD *)a1 + 13) )
              winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 13);
            v36 = v35(v34, a1 + 104);
            if ( v36 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x1CF,
                (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
                (const char *)(unsigned int)v36,
                v54);
          }
          if ( *v6 == *((_QWORD *)a1 + 16) )
          {
            v37 = *v7;
            v38 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v7 + 72LL))(*v7, a1 + 200);
            if ( v6 != v38 )
            {
              if ( *v6 )
                winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v6);
              v39 = *v38;
              *v38 = 0LL;
              *v6 = v39;
            }
            if ( *((_QWORD *)a1 + 25) )
              winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 25);
            v40 = a1 + 208;
            *((_QWORD *)a1 + 26) = 0LL;
            v41 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, char *))(v37 + 152))(
                    *(_QWORD *)(v37 + 152),
                    &GUID_53f5ca0b_158f_4124_900c_057158060b27,
                    a1 + 208);
            if ( v41 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x1D7,
                (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
                (const char *)(unsigned int)v41,
                v54);
            v42 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v40 + 192LL))(*v40);
            if ( v42 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x1D8,
                (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
                (const char *)(unsigned int)v42);
            if ( *v40 )
              winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 26);
          }
          if ( !a1[136] && !a1[584] )
          {
            v43 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*v7 + 152LL) + 104LL))(
                    *(_QWORD *)(*v7 + 152LL),
                    *((_QWORD *)a1 + 16),
                    *v6);
            v31 = retaddr;
            if ( v43 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x1F5,
                (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
                (const char *)(unsigned int)v43,
                v54);
            v32 = *((unsigned int *)a1 + 38);
LABEL_30:
            winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::RaiseCPCProviderAppClosedTelemetryEvent(
              v31,
              v32,
              a1 + 624,
              a1 + 120);
            goto LABEL_31;
          }
          v44 = (_QWORD *)std::enable_shared_from_this<winrt::Windows::Internal::Shell::implementation::BootProviderActivator>::shared_from_this(
                            *((_QWORD *)a1 + 75) + 72LL,
                            (_QWORD *)a1 + 29);
          std::weak_ptr<CAppThumbnailWindow>::weak_ptr<CAppThumbnailWindow>((_QWORD *)a1 + 27, v44);
          v45 = (std::_Ref_count_base *)*((_QWORD *)a1 + 30);
          if ( v45 )
            std::_Ref_count_base::_Decref(v45);
          v46 = *((_QWORD *)a1 + 76);
          v47 = lambda_67f0fced1d981ef80ea3a06f45134b83_::_lambda_67f0fced1d981ef80ea3a06f45134b83__0(
                  (__int64)(a1 + 320),
                  (_QWORD *)a1 + 27,
                  (__int64)(a1 + 128),
                  (_QWORD *)a1 + 13,
                  (struct winrt::hstring *)(a1 + 624),
                  (struct winrt::hstring *)(a1 + 120),
                  (_DWORD *)a1 + 38,
                  a1 + 137);
          *((_QWORD *)a1 + 39) = 0LL;
          *((_QWORD *)a1 + 39) = std::_Global_new_std::_Func_impl_no_alloc__lambda_67f0fced1d981ef80ea3a06f45134b83__void___lambda_67f0fced1d981ef80ea3a06f45134b83___(v47);
          winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::SetTransitionScreenDismissedCallback(
            v46,
            a1 + 256);
          std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
            (__int64)(a1 + 256),
            v48);
          lambda_67f0fced1d981ef80ea3a06f45134b83_::__lambda_67f0fced1d981ef80ea3a06f45134b83_((__int64)(a1 + 320));
          v49 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreen(
                  *((_QWORD *)a1 + 76),
                  a1 + 376);
          *((_DWORD *)a1 + 96) = 7;
          v50 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreenId(
                  *((_QWORD *)a1 + 76),
                  a1 + 388);
          winrt::impl::consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::Dismiss(
            v49,
            v50,
            a1 + 384);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 376));
          v51 = (std::_Ref_count_base *)*((_QWORD *)a1 + 28);
          if ( v51 )
            std::_Ref_count_base::_Decwref(v51);
        }
        else
        {
          if ( !v20 )
          {
LABEL_31:
            a1[138] = 1;
            goto LABEL_65;
          }
          if ( !v55 )
          {
            v30 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a1 + 75) + 152LL) + 104LL))(*(_QWORD *)(*((_QWORD *)a1 + 75) + 152LL));
            v31 = retaddr;
            if ( v30 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x237,
                (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
                (const char *)(unsigned int)v30,
                v54);
            v32 = v19;
            goto LABEL_30;
          }
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout>::ReportUsage(
            (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout>::GetImpl'::`2'::impl,
            1u,
            *v6);
          v22 = (_QWORD *)std::enable_shared_from_this<winrt::Windows::Internal::Shell::implementation::BootProviderActivator>::shared_from_this(
                            *((_QWORD *)a1 + 75) + 72LL,
                            (_QWORD *)a1 + 51);
          std::weak_ptr<CAppThumbnailWindow>::weak_ptr<CAppThumbnailWindow>((_QWORD *)a1 + 49, v22);
          v23 = (std::_Ref_count_base *)*((_QWORD *)a1 + 52);
          if ( v23 )
            std::_Ref_count_base::_Decref(v23);
          v24 = *((_QWORD *)a1 + 76);
          v25 = lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_::_lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__0(
                  (__int64)(a1 + 496),
                  (_QWORD *)a1 + 49,
                  (__int64)(a1 + 128),
                  (_QWORD *)a1 + 13,
                  (_DWORD *)a1 + 38,
                  (struct winrt::hstring *)(a1 + 120),
                  (struct winrt::hstring *)(a1 + 624));
          *((_QWORD *)a1 + 61) = 0LL;
          *((_QWORD *)a1 + 61) = std::_Global_new_std::_Func_impl_no_alloc__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__void___lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c___(v25);
          winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::SetTransitionScreenDismissedCallback(
            v24,
            a1 + 432);
          std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
            (__int64)(a1 + 432),
            v26);
          lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_::__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_((__int64)(a1 + 496));
          v27 = (std::_Ref_count_base *)*((_QWORD *)a1 + 50);
          if ( v27 )
            std::_Ref_count_base::_Decwref(v27);
          v28 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreen(
                  *((_QWORD *)a1 + 76),
                  a1 + 552);
          *((_DWORD *)a1 + 140) = 8;
          v29 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreenId(
                  *((_QWORD *)a1 + 76),
                  a1 + 564);
          winrt::impl::consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::Dismiss(
            v28,
            v29,
            a1 + 560);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 552));
        }
LABEL_65:
        winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::Remove(
          *(RTL_SRWLOCK **)(*((_QWORD *)a1 + 75) + 136LL),
          (const struct winrt::hstring *)(a1 + 120));
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout>::ReportUsage(
          (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout>::GetImpl'::`2'::impl,
          1u,
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
          *(_BYTE *)(*((_QWORD *)a1 + 71) + 305LL) = 1;
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
LABEL_76:
        winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection_::_47_::_parameters_::__parameters_((__int64)(a1 + 600));
        if ( *((_WORD *)a1 + 5) )
          operator delete(a1, (const struct std::nothrow_t *)0x280);
        break;
      case 5:
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)a1 + 11);
        tip2::test_watcher<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>::~test_watcher<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>((__int64)(a1 + 32));
        v5 = (std::_Ref_count_base *)*((_QWORD *)a1 + 3);
        if ( v5 )
          std::_Ref_count_base::_Decref(v5);
        goto LABEL_76;
      case 6:
        goto LABEL_39;
      case 7:
        winrt::impl::timespan_awaiter::~timespan_awaiter((winrt::cancellable_promise **)a1 + 20);
        if ( *((_QWORD *)a1 + 16) )
          winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 16);
        winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a1 + 15);
        if ( *((_QWORD *)a1 + 13) )
          winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 13);
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)a1 + 11);
        tip2::test_watcher<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>::~test_watcher<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>((__int64)(a1 + 32));
        v33 = (std::_Ref_count_base *)*((_QWORD *)a1 + 3);
        if ( v33 )
          std::_Ref_count_base::_Decref(v33);
        goto LABEL_76;
      default:
        __debugbreak();
        return;
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
