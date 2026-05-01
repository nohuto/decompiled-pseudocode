/*
 * XREFs of ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18027F280
 * Callers:
 *     ?SerializeToJsonFile@JsonGameMruManager@@AEBAXUwrite_lock_required@wil@@@Z @ 0x180139BB0 (-SerializeToJsonFile@JsonGameMruManager@@AEBAXUwrite_lock_required@wil@@@Z.c)
 *     ?Create@JsonGameMruManager@@SA?AV?$unique_ptr@VJsonGameMruManager@@U?$default_delete@VJsonGameMruManager@@@std@@@std@@V?$basic_string_view@GU?$char_traits@G@std@@@3@E@Z @ 0x180139E90 (-Create@JsonGameMruManager@@SA-AV-$unique_ptr@VJsonGameMruManager@@U-$default_delete@VJsonGameMr.c)
 *     ?DeserializeFromJsonFile@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18013AFC8 (-DeserializeFromJsonFile@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 *     ??0XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180280140 (--0XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEA.c)
 *     ?GetJsonStorageFile@JsonGameMruManager@@AEBA?AUStorageFile@Storage@Windows@winrt@@XZ @ 0x180299DD0 (-GetJsonStorageFile@JsonGameMruManager@@AEBA-AUStorageFile@Storage@Windows@winrt@@XZ.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1 @ 0x1805D6690 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvasDelayedInitial.c)
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x1805D8C60 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1.c)
 *     ?get@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@34@@impl@winrt@@QEBA@XZ @ 0x1805DC3A4 (-get@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UAppInstallItem@InstallCont.c)
 *     ?shutdown_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIProfferService@@@Z @ 0x1805DCF60 (-shutdown_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIProff.c)
 *     ?IsInstallInProgress@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1805F5FAC (-IsInstallInProgress@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ.c)
 *     ?TryGetInstallStatus@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUMeetAndChatInstallStatus@3456@XZ @ 0x1805F7F34 (-TryGetInstallStatus@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA-AUMeet.c)
 *     ?get@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@U?$IVectorView@UAppInfo@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@U?$IVectorView@UAppInfo@ApplicationModel@Windows@winrt@@@Collections@234@@impl@winrt@@QEBA@XZ @ 0x180642E74 (-get@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@U-$IVectorView@UAppInfo@App.c)
 *     ?unsubscribe_from_services@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180643930 (-unsubscribe_from_services@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXPE.c)
 *     ?ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA?AUIBuffer@Streams@Storage@Windows@winrt@@QEAUHWND__@@AEBUhstring@7@@Z @ 0x18064F3BC (-ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA-AUIBuffer@Streams@Storage@Windows@winr.c)
 *     _lambda_77e78c927b00fdc94620a558442d73ef_::operator()_winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs_ @ 0x180655F14 (_lambda_77e78c927b00fdc94620a558442d73ef_--operator()_winrt--Windows--Internal--Shell--RemoteSys.c)
 *     _lambda_57788f35bdd9b54a58cb4d12640be97c_::operator() @ 0x1806597D0 (_lambda_57788f35bdd9b54a58cb4d12640be97c_--operator().c)
 *     ?HandleProviderAppLaunchResult@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBU?$IAsyncOperation@_N@Foundation@56@@Z @ 0x180668F70 (-HandleProviderAppLaunchResult@BootProviderActivator@implementation@Shell@Internal@Windows@winrt.c)
 *     ?HandleProviderAppLaunchResult@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBU?$IAsyncOperation@_N@Foundation@56@@Z @ 0x18066BAF0 (-HandleProviderAppLaunchResult@SwitchProviderActivator@implementation@Shell@Internal@Windows@win.c)
 *     _lambda_5dd99ac34d6bd03dd8b88786cad3764c_::operator() @ 0x180670CA4 (_lambda_5dd99ac34d6bd03dd8b88786cad3764c_--operator().c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<bool>>::Status(
        __int64 (__fastcall ****a1)(_QWORD, __int64 *, __int64 *))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64 *, __int64 *); // rcx
  unsigned int v2; // eax
  __int64 v3; // rbx
  unsigned int v4; // eax
  int v6; // [rsp+20h] [rbp-20h] BYREF
  __int128 v7; // [rsp+28h] [rbp-18h]
  unsigned int v8; // [rsp+50h] [rbp+10h] BYREF
  __int64 v9; // [rsp+58h] [rbp+18h] BYREF
  __int64 v10; // [rsp+60h] [rbp+20h] BYREF

  v8 = 0;
  v1 = *a1;
  if ( v1 )
  {
    v9 = 0LL;
    v2 = (**v1)(v1, &winrt::impl::guid_v<winrt::Windows::Foundation::IAsyncInfo>, &v9);
    v3 = v9;
    v10 = v9;
  }
  else
  {
    v2 = 0;
    v10 = 0LL;
    v3 = 0LL;
  }
  v6 = 0;
  v7 = 0LL;
  winrt::check_hresult(&v9, v2, &v6);
  v6 = 0;
  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v3 + 56LL))(v3, &v8);
  winrt::check_hresult(&v9, v4, &v6);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  return v8;
}
