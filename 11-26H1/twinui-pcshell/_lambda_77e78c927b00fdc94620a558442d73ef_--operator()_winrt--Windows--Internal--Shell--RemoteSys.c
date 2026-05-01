/*
 * XREFs of _lambda_77e78c927b00fdc94620a558442d73ef_::operator()_winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs_ @ 0x180655F14
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs___lambda_77e78c927b00fdc94620a558442d73ef___::Invoke @ 0x18065AC30 (winrt--impl--delegate_winrt--Windows--Foundation--EventHandler_winrt--Windows--Inte_ea_18065AC30.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002AE28 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18007A6A8 (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 *     ?check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z @ 0x18013A340 (-check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z.c)
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18027F280 (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1802879A8 (-unconditional_release_ref@-$com_ptr@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$l.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$wait_for_completed@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBUIAsyncAction@Foundation@Windows@1@I@Z @ 0x180317900 (--$wait_for_completed@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@YA-A_PAEBUIAsyncActio.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180358560 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlackScreen_Bugfixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180641EEC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlackScreen_Bugfixes@@@details@w.c)
 *     ?GetCloudPCMode@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAIXZ @ 0x18064C3D0 (-GetCloudPCMode@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAIXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180650570 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect@@@details@wil@.c)
 *     ??$ProviderWindowAdded@_K@CloudPCTelemetry@@SAX$$QEA_K@Z @ 0x1806567B4 (--$ProviderWindowAdded@_K@CloudPCTelemetry@@SAX$$QEA_K@Z.c)
 *     ?Window@?$consume_Windows_Internal_Shell_IRemoteSystemWindowAddedEventArgs@UIRemoteSystemWindowAddedEventArgs@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18065C94C (-Window@-$consume_Windows_Internal_Shell_IRemoteSystemWindowAddedEventArgs@UIRemoteSystemWindowA.c)
 *     ?get@?$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x18065D784 (-get@-$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@.c)
 *     ?Current@WindowsTracker@Shell@Internal@Windows@winrt@@SA?AU12345@XZ @ 0x18065EA98 (-Current@WindowsTracker@Shell@Internal@Windows@winrt@@SA-AU12345@XZ.c)
 *     ?Current@ProcessTracker@Shell@Internal@Windows@winrt@@SA?AU12345@XZ @ 0x180660530 (-Current@ProcessTracker@Shell@Internal@Windows@winrt@@SA-AU12345@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall lambda_77e78c927b00fdc94620a558442d73ef_::operator()_winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs_(
        __int64 a1,
        volatile signed __int32 *a2,
        __int64 **a3)
{
  __int64 *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rbx
  HWND *v15; // rax
  DWORD WindowThreadProcessId; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // r14
  void (__fastcall *v20)(__int64, _QWORD *, __int64); // r12
  __int64 v21; // r15
  _QWORD *v22; // rax
  const char *v23; // r9
  _QWORD *v24; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v25[8]; // [rsp+28h] [rbp-50h] BYREF
  int v26; // [rsp+30h] [rbp-48h] BYREF
  __int128 v27; // [rsp+38h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 (__fastcall ***v29)(_QWORD, __int64 *, __int64 *); // [rsp+80h] [rbp+8h] BYREF
  volatile signed __int32 *dwProcessId; // [rsp+88h] [rbp+10h] BYREF
  __int64 (__fastcall ***v31)(_QWORD, __int64 *, __int64 *); // [rsp+98h] [rbp+20h] BYREF

  dwProcessId = a2;
  v5 = (__int64 *)winrt::Windows::Internal::Shell::WindowsTracker::Current(&v24);
  v6 = (_QWORD *)winrt::impl::consume_Windows_Internal_Shell_IRemoteSystemWindowAddedEventArgs<winrt::Windows::Internal::Shell::IRemoteSystemWindowAddedEventArgs>::Window(
                   a3,
                   v25);
  v29 = 0LL;
  v7 = *v5;
  v26 = 0;
  v27 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 48LL))(v7, *v6, &v29);
  winrt::check_hresult((int *)&dwProcessId, v8, (__int64)&v26);
  v31 = v29;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v24);
  v9 = winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<bool>>::Status(&v31);
  if ( !v9 )
    v9 = winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncAction>((__int64 *)&v31);
  winrt::impl::check_status_canceled((winrt::impl *)v9, v10);
  winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel((__int64 *)&v31);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::GetImpl'::`2'::impl,
    1u,
    v11);
  v12 = winrt::impl::consume_Windows_Internal_Shell_IRemoteSystemWindowAddedEventArgs<winrt::Windows::Internal::Shell::IRemoteSystemWindowAddedEventArgs>::Window(
          a3,
          &dwProcessId);
  CloudPCTelemetry::ProviderWindowAdded<unsigned __int64>(v12);
  winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>::get(a1, &v24);
  v14 = v24;
  if ( v24 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_BlackScreen_Bugfixes>::ReportUsage(
      (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_BlackScreen_Bugfixes>::GetImpl'::`2'::impl,
      1u,
      v13);
    if ( (unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode() == 1 )
    {
      LODWORD(dwProcessId) = 0;
      v15 = (HWND *)winrt::impl::consume_Windows_Internal_Shell_IRemoteSystemWindowAddedEventArgs<winrt::Windows::Internal::Shell::IRemoteSystemWindowAddedEventArgs>::Window(
                      a3,
                      &v29);
      WindowThreadProcessId = GetWindowThreadProcessId(*v15, (LPDWORD)&dwProcessId);
      if ( WindowThreadProcessId )
      {
        wil::details::in1diag3::_Log_Win32(
          retaddr,
          187LL,
          (__int64)"pcshell\\twinui\\cloudpc\\lib\\remotesessionwindowmanager.cpp",
          (const char *)WindowThreadProcessId);
        v17 = *(_QWORD *)winrt::Windows::Internal::Shell::ProcessTracker::Current(v25);
        v26 = 0;
        v27 = 0LL;
        v18 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 48LL))(v17, (unsigned int)dwProcessId);
        winrt::check_hresult((int *)&v29, v18, (__int64)&v26);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v25);
      }
    }
    try
    {
      v19 = v14[5];
      v20 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)v19 + 112LL);
      v21 = *(_QWORD *)winrt::impl::consume_Windows_Internal_Shell_IRemoteSystemWindowAddedEventArgs<winrt::Windows::Internal::Shell::IRemoteSystemWindowAddedEventArgs>::Window(
                         a3,
                         &v29);
      v22 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
              a3,
              &dwProcessId);
      v20(v19, v22, v21);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&dwProcessId);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0xC5,
        (int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionwindowmanager.cpp",
        v23);
      v14 = v24;
    }
  }
  if ( v14 )
    winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v24);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v31);
}
