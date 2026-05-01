/*
 * XREFs of _lambda_2f7fc8b500d57ad36b179527aa3b33ab_::operator()_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_const__winrt::Windows::Foundation::IInspectable_const__ @ 0x180655DCC
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Foundation::IInspectable___lambda_2f7fc8b500d57ad36b179527aa3b33ab___::Invoke @ 0x18065AD00 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_18065AD00.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1802879A8 (-unconditional_release_ref@-$com_ptr@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$l.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028BFAC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenUI@winrt@@U1234@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180658A70 (--1-$com_ptr_t@V-$merged_data@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenUI@winrt@@U.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenUI@winrt@@U1234@@details@tip2@@@tip2@@QEAA@XZ @ 0x180658D78 (--1-$test_watcher@V-$merged_data@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenUI@winrt.c)
 *     ?SwitchToLocalVirtualDesktopInLocalSession@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEBAXXZ @ 0x18065C878 (-SwitchToLocalVirtualDesktopInLocalSession@RemoteSessionWindowManager@implementation@Shell@Inter.c)
 *     ?get@?$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x18065D784 (-get@-$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@.c)
 *     ?open_helper@?$tip_test@V?$merged_data@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenUI@winrt@@U1234@@details@tip2@@@tip2@@AEAA_NPEAU_GUID@@@Z @ 0x18065DA4C (-open_helper@-$tip_test@V-$merged_data@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenUI.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenUI@winrt@@U1234@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenUI@winrt@@U1234@@details@tip2@@@2@XZ @ 0x18065DEE8 (-watch_errors@-$tip_test@V-$merged_data@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenU.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_2f7fc8b500d57ad36b179527aa3b33ab_::operator()_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_const__winrt::Windows::Foundation::IInspectable_const__(
        __int64 a1)
{
  winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *v2; // rbx
  _BYTE v4[48]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v5; // [rsp+50h] [rbp-18h]
  winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *v6; // [rsp+80h] [rbp+18h] BYREF

  v6 = 0LL;
  tip2::tip_test<tip2::details::merged_data<winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest,winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest>>::open_helper(&v6);
  tip2::tip_test<tip2::details::merged_data<winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest,winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest>>::watch_errors(
    &v6,
    v4);
  wil::com_ptr_t<tip2::details::merged_data<winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest,winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest,winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest>,wil::err_returncode_policy>(&v6);
  winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>::get(a1, &v6);
  v2 = v6;
  if ( v6 )
  {
    winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::SwitchToLocalVirtualDesktopInLocalSession(v6);
    tip2::details::shared_data<1,0,0>::complete_without_lock(v5 + 8);
  }
  if ( v2 )
    winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((_QWORD **)&v6);
  return tip2::test_watcher<tip2::details::merged_data<winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest,winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest>>::~test_watcher<tip2::details::merged_data<winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest,winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest>>(v4);
}
