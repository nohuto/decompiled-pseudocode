/*
 * XREFs of ?ShowErrorTransitionScreen@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x1806723C0
 * Callers:
 *     ?ShowErrorTransitionScreen@BootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x18066A4F0 (-ShowErrorTransitionScreen@BootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UE.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002AE28 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAA_NXZ @ 0x180358A84 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180650570 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect@@@details@wil@.c)
 *     ?Update@?$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUTransitionScreenId@TransitionScreen@CloudDesktop@Shell@Internal@Windows@3@AEBW4ScreenType@567893@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x18065C900 (-Update@-$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITrans.c)
 *     ?Show@?$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUCpcId@TransitionScreen@CloudDesktop@Shell@Internal@Windows@3@AEBW4ScreenType@567893@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@AEBUhstring@param@3@_K_NAEBW4TransitionScreenOptions@567893@@Z @ 0x180669920 (-Show@-$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITransit.c)
 *     ?IsTransitionScreenShown@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x18066FB40 (-IsTransitionScreenShown@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@Q.c)
 *     ?RemoteDesktopProviderInfo@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA?AU03456@XZ @ 0x18066FBB4 (-RemoteDesktopProviderInfo@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?State@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA?AW4CloudPCState@3456@XZ @ 0x18066FC24 (-State@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA-AW4CloudPCStat.c)
 *     ?TransitionScreen@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA?AU00CloudDesktop@3456@XZ @ 0x18066FC58 (-TransitionScreen@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA-AU0.c)
 *     ?TransitionScreenId@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA?AU0TransitionScreen@CloudDesktop@3456@XZ @ 0x18066FC80 (-TransitionScreenId@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA-A.c)
 *     ?TransitionScreenId@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBU0TransitionScreen@CloudDesktop@3456@@Z @ 0x18066FCC4 (-TransitionScreenId@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAXA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=17
void __fastcall winrt::Windows::Internal::Shell::implementation::ConnectionHandler::ShowErrorTransitionScreen(
        __int64 a1,
        __int64 **a2)
{
  __int64 v4; // r8
  __int64 *v5; // rdi
  __int64 *v6; // rbx
  unsigned int *v7; // rax
  __int64 *v8; // rcx
  char IsEnabled; // al
  __int64 *v10; // rcx
  __int64 *v11; // rsi
  HMONITOR v12; // rdi
  __int64 *v13; // rbx
  __int64 *v14; // rax
  __int64 *v15; // rsi
  HMONITOR v16; // rdi
  __int64 *v17; // rbx
  __int64 *v18; // rax
  volatile signed __int32 *v19; // [rsp+50h] [rbp-19h] BYREF
  __int64 v20; // [rsp+58h] [rbp-11h] BYREF
  volatile signed __int32 *v21; // [rsp+60h] [rbp-9h] BYREF
  __int64 v22; // [rsp+68h] [rbp-1h] BYREF
  _BYTE v23[8]; // [rsp+70h] [rbp+7h] BYREF
  _QWORD v24[9]; // [rsp+78h] [rbp+Fh] BYREF
  int v25; // [rsp+D8h] [rbp+6Fh] BYREF
  POINT pt; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v27; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( (unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::State((RTL_SRWLOCK *)*a2) )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::ReportUsage(
      (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::GetImpl'::`2'::impl,
      1u,
      v4);
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_EPDA>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_EPDA>::GetImpl'::`2'::impl);
    v10 = *a2;
    if ( IsEnabled )
    {
      v11 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreen(
              (__int64)v10,
              &v22);
      v25 = 2;
      pt = 0LL;
      v12 = MonitorFromPoint(0LL, 1u);
      v24[0] = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, volatile signed __int32 **))(*(_QWORD *)a1 + 128LL))(
                            a1,
                            &v21);
      v13 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 120LL))(a1, v23);
      pt.x = 1;
      v14 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::RemoteDesktopProviderInfo(
              *a2,
              &v20);
      winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
        (__int64 **)v14,
        &v19);
      winrt::impl::consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::Show(
        (__int64 **)v11,
        &v27,
        &v19,
        (unsigned int *)&pt,
        v13,
        v24,
        (__int64)v12,
        0,
        &v25);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v19);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v20);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v21);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v22);
      winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreenId(
        (RTL_SRWLOCK *)*a2,
        (const struct winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId *)&v27);
      winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::IsTransitionScreenShown(
        (RTL_SRWLOCK *)*a2,
        1);
      return;
    }
    v15 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreen(
            (__int64)v10,
            &v20);
    v25 = 2;
    pt = 0LL;
    v16 = MonitorFromPoint(0LL, 1u);
    v24[0] = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, volatile signed __int32 **))(*(_QWORD *)a1 + 128LL))(
                          a1,
                          &v21);
    v17 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 120LL))(a1, v23);
    pt.x = 1;
    v18 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::RemoteDesktopProviderInfo(
            *a2,
            &v22);
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
      (__int64 **)v18,
      &v19);
    winrt::impl::consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::Show(
      (__int64 **)v15,
      &v27,
      &v19,
      (unsigned int *)&pt,
      v17,
      v24,
      (__int64)v16,
      0,
      &v25);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v19);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v22);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v21);
    v8 = &v20;
  }
  else
  {
    v5 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreen((__int64)*a2, &v27);
    v6 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 120LL))(a1, &v22);
    v25 = 1;
    v7 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreenId(
           (__int64)*a2,
           &pt);
    winrt::impl::consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::Update(
      (__int64 **)v5,
      v7,
      (unsigned int *)&v25,
      v6);
    v8 = &v27;
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v8);
}
