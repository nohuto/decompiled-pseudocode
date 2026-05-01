/*
 * XREFs of ?ShowTransitionScreen@SwitchConnectingState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@AEBUhstring@6@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@8@@Z @ 0x18066EE50
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002AE28 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028BFAC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802A27AC (-is_running@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??0?$test_data_control@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180658770 (--0-$test_data_control@V-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180658CA0 (--1-$test_data_control@V-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180658D28 (--1-$test_watcher@V-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@ti.c)
 *     ?Show@?$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUCpcId@TransitionScreen@CloudDesktop@Shell@Internal@Windows@3@AEBW4ScreenType@567893@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@AEBUhstring@param@3@_K_NAEBW4TransitionScreenOptions@567893@@Z @ 0x180669920 (-Show@-$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITransit.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18066C640 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1.c)
 *     ?IsTransitionScreenShown@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x18066FB40 (-IsTransitionScreenShown@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@Q.c)
 *     ?IsTransitionScreenShown@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x18066FB80 (-IsTransitionScreenShown@RemoteSessionInformation@implementation@Shell@Internal@Win_ea_18066FB80.c)
 *     ?RemoteDesktopProviderInfo@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA?AU03456@XZ @ 0x18066FBB4 (-RemoteDesktopProviderInfo@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?TransitionScreen@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA?AU00CloudDesktop@3456@XZ @ 0x18066FC58 (-TransitionScreen@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA-AU0.c)
 *     ?TransitionScreenId@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBU0TransitionScreen@CloudDesktop@3456@@Z @ 0x18066FCC4 (-TransitionScreenId@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAXA.c)
 *     ?TransitionScreenType@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAXW4ScreenType@TransitionScreen@CloudDesktop@3456@@Z @ 0x18066FD3C (-TransitionScreenType@RemoteSessionInformation@implementation@Shell@Internal@Window_ea_18066FD3C.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectingState::ShowTransitionScreen(
        __int64 a1,
        winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation **a2,
        _QWORD *a3,
        __int64 *a4)
{
  HMONITOR v7; // rbx
  __int64 **v8; // rdi
  __int64 **v9; // rax
  unsigned int v10; // [rsp+58h] [rbp-39h] BYREF
  int v11; // [rsp+5Ch] [rbp-35h] BYREF
  volatile signed __int32 *v12; // [rsp+60h] [rbp-31h] BYREF
  _BYTE v13[8]; // [rsp+68h] [rbp-29h] BYREF
  _BYTE v14[8]; // [rsp+70h] [rbp-21h] BYREF
  _BYTE v15[48]; // [rsp+78h] [rbp-19h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+17h] BYREF
  _QWORD v17[5]; // [rsp+B0h] [rbp+1Fh] BYREF
  POINT pt; // [rsp+100h] [rbp+6Fh] BYREF

  tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>>((__int64)v15);
  if ( winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::IsTransitionScreenShown(*a2) )
  {
    if ( tip2::details::shared_data<1,0,0>::is_running(v16 + 8) )
    {
      tip2::test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>(
        (__int64 *)&pt,
        &v16);
      *(_BYTE *)(*(_QWORD *)&pt + 347LL) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::~test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>((void **)&pt);
      tip2::details::shared_data<1,0,0>::complete_without_lock(v16 + 8);
    }
  }
  else
  {
    pt = 0LL;
    v7 = MonitorFromPoint(0LL, 1u);
    v8 = (__int64 **)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreen(
                       *a2,
                       v14);
    pt.x = 2;
    v17[0] = *a3;
    v10 = 0;
    v9 = (__int64 **)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::RemoteDesktopProviderInfo(
                       *a2,
                       v13);
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
      v9,
      &v12);
    winrt::impl::consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::Show(
      v8,
      &v11,
      &v12,
      &v10,
      a4,
      v17,
      (__int64)v7,
      0,
      (int *)&pt);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v12);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v13);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v14);
    winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreenId(
      *a2,
      (const struct winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId *)&v11);
    winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreenType(*a2, 0LL);
    winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::IsTransitionScreenShown(*a2, 1);
  }
  tip2::test_watcher<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::~test_watcher<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>((__int64)v15);
}
