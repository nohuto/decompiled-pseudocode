/*
 * XREFs of ??$ApplyTaskbarLayout@$$VP8CPinnedList@@EAAJXZ@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAAJW4ApiType@PinManagerTipTests@@P8CPinnedList@@EAAJXZ@Z @ 0x1805DE498
 * Callers:
 *     ?ApplyAppendDefaultTaskbarLayout@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x1805E4610 (-ApplyAppendDefaultTaskbarLayout@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ.c)
 *     ?ApplyPrependDefaultTaskbarLayout@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x1805E46B0 (-ApplyPrependDefaultTaskbarLayout@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJX.c)
 * Callees:
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x18027EED0 (-complete@-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@d.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@1@XZ @ 0x180280FBC (--C-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180283114 (--1-$com_ptr_t@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uer.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x180283C50 (--1-$test_watcher@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802846CC (--1-$test_data_control@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@t.c)
 *     ?CheckForTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x18028F8E4 (-CheckForTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEAV-$tip_te.c)
 *     ?start_and_watch_errors@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@2@XZ @ 0x1802A26CC (-start_and_watch_errors@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U1.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_a35eeb229c7164fc066a4b8a11da43cb___ @ 0x1805E0870 (_anonymous_namespace_--RunSynchronousInSTA__lambda_a35eeb229c7164fc066a4b8a11da43cb___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::ApplyTaskbarLayout<,long (CPinnedList::*)(void)>(
        __int64 a1,
        int a2,
        __int64 a3)
{
  unsigned int v5; // ebx
  __int128 v7; // [rsp+20h] [rbp-29h] BYREF
  __int64 v8; // [rsp+30h] [rbp-19h] BYREF
  void *v9; // [rsp+40h] [rbp-9h] BYREF
  unsigned int v10; // [rsp+48h] [rbp-1h] BYREF
  _OWORD v11[3]; // [rsp+50h] [rbp+7h] BYREF
  __int64 v12; // [rsp+80h] [rbp+37h]

  v9 = 0LL;
  *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::operator->(
                 (__int64)&v9,
                 (__int64 *)&v7)
            + 272) = a2;
  tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>((void **)&v7);
  *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::operator->(
                 (__int64)&v9,
                 (__int64 *)&v7)
            + 1316) = 1;
  tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>((void **)&v7);
  *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::operator->(
                 (__int64)&v9,
                 (__int64 *)&v7)
            + 1324) = 12;
  tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>((void **)&v7);
  memset(v11, 0, sizeof(v11));
  v12 = 0LL;
  tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::start_and_watch_errors(
    &v9,
    (struct wil::details::IFailureCallback *)v11);
  winrt::Windows::Internal::Shell::implementation::PinManager::CheckForTrustedCaller(a1, (__int64)&v9);
  v10 = 0;
  v7 = *(_OWORD *)_lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(
                    &v8,
                    a3,
                    (__int64)&v10);
  anonymous_namespace_::RunSynchronousInSTA__lambda_a35eeb229c7164fc066a4b8a11da43cb___(&v7);
  tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::complete((__int64 *)&v9);
  v5 = v10;
  tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>((__int64)v11);
  wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>(&v9);
  return v5;
}
