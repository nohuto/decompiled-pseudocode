/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805CC2CC
 * Callers:
 *     _lambda_266543fa3fad03614622d5bc7064e6b9_::operator() @ 0x1805CC808 (_lambda_266543fa3fad03614622d5bc7064e6b9_--operator().c)
 *     _lambda_77a32147fc6c60e39773a7a23b5bdd9c_::operator() @ 0x1805CD2C8 (_lambda_77a32147fc6c60e39773a7a23b5bdd9c_--operator().c)
 *     _lambda_e9844ff4bf9ebd925f2edb91f5199315_::operator() @ 0x1805CDB7C (_lambda_e9844ff4bf9ebd925f2edb91f5199315_--operator().c)
 *     ?CancelSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x1805CE5E0 (-CancelSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ.c)
 *     ?CommitSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z @ 0x1805CE7E0 (-CommitSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z.c)
 *     ?ContinueSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z @ 0x1805CEBF0 (-ContinueSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z.c)
 *     ?StartSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z @ 0x1805D74C0 (-StartSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::CancelSwipe_::_1_::catch$22 @ 0x1806FAC7E (_winrt--Windows--Internal--Shell--implementation--DashboardManager--CancelSwipe_--_1_--catch$22.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::CommitSwipe_::_1_::catch$22 @ 0x1806FACF1 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--CommitSwipe_--_1_--catch$22.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::ContinueSwipe_::_1_::catch$22 @ 0x1806FAD64 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--ContinueSwipe_--_1_--catch$2.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::StartSwipe_::_1_::dtor$4 @ 0x1806FC8E8 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--StartSwipe_--_1_--dtor$4.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::StartSwipe_::_1_::catch$44 @ 0x1806FC95B (_winrt--Windows--Internal--Shell--implementation--DashboardManager--StartSwipe_--_1_--catch$44.c)
 * Callees:
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180281974 (-end_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1805DC9E0 (-reset@-$com_ptr_t@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@Uerr_return.c)
 */

__int64 __fastcall tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>(
        void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    tip2::details::shared_data<1,0,0>::end_update((__int64)v2 + 8);
    wil::com_ptr_t<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>,wil::err_returncode_policy>::reset(a1);
  }
  return wil::com_ptr_t<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>,wil::err_returncode_policy>(a1);
}
