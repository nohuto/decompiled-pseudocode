/*
 * XREFs of ?ShowErrorTransitionScreen@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x18064C400
 * Callers:
 *     ?ShowErrorTransitionScreen@BootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x180644760 (-ShowErrorTransitionScreen@BootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UE.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062824 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAA_NXZ @ 0x180352AB8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18062AB60 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect@@@details@wil@.c)
 *     ?Update@?$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUTransitionScreenId@TransitionScreen@CloudDesktop@Shell@Internal@Windows@3@AEBW4ScreenType@567893@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x180636DF0 (-Update@-$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITrans.c)
 *     ?Show@?$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUCpcId@TransitionScreen@CloudDesktop@Shell@Internal@Windows@3@AEBW4ScreenType@567893@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@AEBUhstring@param@3@_K_NAEBW4TransitionScreenOptions@567893@@Z @ 0x180643C5C (-Show@-$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITransit.c)
 *     ?IsTransitionScreenShown@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x180649BA0 (-IsTransitionScreenShown@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@Q.c)
 *     ?RemoteDesktopProviderInfo@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA?AU03456@XZ @ 0x180649C14 (-RemoteDesktopProviderInfo@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?State@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA?AW4CloudPCState@3456@XZ @ 0x180649C84 (-State@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA-AW4CloudPCStat.c)
 *     ?TransitionScreen@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA?AU00CloudDesktop@3456@XZ @ 0x180649CB8 (-TransitionScreen@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA-AU0.c)
 *     ?TransitionScreenId@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA?AU0TransitionScreen@CloudDesktop@3456@XZ @ 0x180649CE0 (-TransitionScreenId@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA-A.c)
 *     ?TransitionScreenId@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBU0TransitionScreen@CloudDesktop@3456@@Z @ 0x180649D24 (-TransitionScreenId@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAXA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=17
void __fastcall winrt::Windows::Internal::Shell::implementation::ConnectionHandler::ShowErrorTransitionScreen(
        __int64 a1,
        __int64 **a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 *v6; // rdi
  __int64 *v7; // rbx
  unsigned int *v8; // rax
  __int64 *v9; // rcx
  char IsEnabled; // al
  __int64 *v11; // rcx
  __int64 *v12; // rsi
  HMONITOR v13; // rdi
  _QWORD *v14; // rbx
  __int64 *v15; // rax
  __int64 *v16; // rsi
  HMONITOR v17; // rdi
  _QWORD *v18; // rbx
  __int64 *v19; // rax
  volatile signed __int32 *v20; // [rsp+50h] [rbp-19h] BYREF
  __int64 v21; // [rsp+58h] [rbp-11h] BYREF
  volatile signed __int32 *v22; // [rsp+60h] [rbp-9h] BYREF
  __int64 v23; // [rsp+68h] [rbp-1h] BYREF
  _BYTE v24[8]; // [rsp+70h] [rbp+7h] BYREF
  _QWORD v25[9]; // [rsp+78h] [rbp+Fh] BYREF
  unsigned int v26; // [rsp+D8h] [rbp+6Fh] BYREF
  POINT pt; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v28; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( (unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::State((RTL_SRWLOCK *)*a2) )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::ReportUsage(
      (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::GetImpl'::`2'::impl,
      1u,
      v4,
      v5);
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_EPDA>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_EPDA>::GetImpl'::`2'::impl);
    v11 = *a2;
    if ( IsEnabled )
    {
      v12 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreen(
              (__int64)v11,
              &v23);
      v26 = 2;
      pt = 0LL;
      v13 = MonitorFromPoint(0LL, 1u);
      v25[0] = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, volatile signed __int32 **))(*(_QWORD *)a1 + 128LL))(
                            a1,
                            &v22);
      v14 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 120LL))(a1, v24);
      pt.x = 1;
      v15 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::RemoteDesktopProviderInfo(
              *a2,
              &v21);
      winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
        (__int64 **)v15,
        &v20);
      winrt::impl::consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::Show(
        v12,
        &v28,
        &v20,
        (unsigned int *)&pt,
        v14,
        v25,
        (__int64)v13,
        0,
        &v26);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v20);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v22);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v23);
      winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreenId(
        (RTL_SRWLOCK *)*a2,
        (const struct winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId *)&v28);
      winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::IsTransitionScreenShown(
        (RTL_SRWLOCK *)*a2,
        1);
      return;
    }
    v16 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreen(
            (__int64)v11,
            &v21);
    v26 = 2;
    pt = 0LL;
    v17 = MonitorFromPoint(0LL, 1u);
    v25[0] = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, volatile signed __int32 **))(*(_QWORD *)a1 + 128LL))(
                          a1,
                          &v22);
    v18 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 120LL))(a1, v24);
    pt.x = 1;
    v19 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::RemoteDesktopProviderInfo(
            *a2,
            &v23);
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
      (__int64 **)v19,
      &v20);
    winrt::impl::consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::Show(
      v16,
      &v28,
      &v20,
      (unsigned int *)&pt,
      v18,
      v25,
      (__int64)v17,
      0,
      &v26);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v20);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v23);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v22);
    v9 = &v21;
  }
  else
  {
    v6 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreen((__int64)*a2, &v28);
    v7 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 120LL))(a1, &v23);
    v26 = 1;
    v8 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreenId(
           (__int64)*a2,
           &pt);
    winrt::impl::consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::Update(
      (__int64 **)v6,
      v8,
      &v26,
      v7);
    v9 = &v28;
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v9);
}
