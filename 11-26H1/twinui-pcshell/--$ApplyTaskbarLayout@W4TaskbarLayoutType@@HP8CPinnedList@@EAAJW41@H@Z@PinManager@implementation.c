/*
 * XREFs of ??$ApplyTaskbarLayout@W4TaskbarLayoutType@@HP8CPinnedList@@EAAJW41@H@Z@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAAJW4ApiType@PinManagerTipTests@@P8CPinnedList@@EAAJW4TaskbarLayoutType@@H@Z1H@Z @ 0x1805DE5D0
 * Callers:
 *     ?ApplyReorderTaskbarLayout@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJW4TaskbarLayoutType@@H@Z @ 0x1805E4700 (-ApplyReorderTaskbarLayout@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJW4Taskba.c)
 * Callees:
 *     ?complete@?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x18027EED0 (-complete@-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@d.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@1@XZ @ 0x180280FBC (--C-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180283114 (--1-$com_ptr_t@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uer.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x180283C50 (--1-$test_watcher@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802846CC (--1-$test_data_control@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@t.c)
 *     ?CheckForTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x18028F8E4 (-CheckForTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEAV-$tip_te.c)
 *     ??0_lambda_5724e9f0897f2fd11b6a24af4b09628e_@@QEAA@AEAP8CPinnedList@@EAAJW4TaskbarLayoutType@@H@ZAEAW42@AEAHAEAJ@Z @ 0x1802931FC (--0_lambda_5724e9f0897f2fd11b6a24af4b09628e_@@QEAA@AEAP8CPinnedList@@EAAJW4TaskbarLayoutType@@H@.c)
 *     ?start_and_watch_errors@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@2@XZ @ 0x1802A26CC (-start_and_watch_errors@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U1.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_5724e9f0897f2fd11b6a24af4b09628e___ @ 0x1805E0730 (_anonymous_namespace_--RunSynchronousInSTA__lambda_5724e9f0897f2fd11b6a24af4b09628e___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 winrt::Windows::Internal::Shell::implementation::PinManager::ApplyTaskbarLayout<enum TaskbarLayoutType,int,long (CPinnedList::*)(enum TaskbarLayoutType,int)>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        ...)
{
  _OWORD *v6; // rax
  void *v8[2]; // [rsp+30h] [rbp-71h] BYREF
  _OWORD v9[2]; // [rsp+40h] [rbp-61h] BYREF
  _QWORD v10[4]; // [rsp+60h] [rbp-41h] BYREF
  void *v11; // [rsp+80h] [rbp-21h] BYREF
  int v12; // [rsp+88h] [rbp-19h] BYREF
  int v13; // [rsp+90h] [rbp-11h] BYREF
  _OWORD v14[3]; // [rsp+98h] [rbp-9h] BYREF
  __int64 v15; // [rsp+C8h] [rbp+27h]
  va_list va; // [rsp+120h] [rbp+7Fh] BYREF

  va_start(va, a4);
  v13 = a4;
  v11 = 0LL;
  *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::operator->(
                 (__int64)&v11,
                 (__int64 *)v8)
            + 272) = 7;
  tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(v8);
  *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::operator->(
                 (__int64)&v11,
                 (__int64 *)v8)
            + 1316) = 1;
  tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(v8);
  *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::operator->(
                 (__int64)&v11,
                 (__int64 *)v8)
            + 1324) = 12;
  tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(v8);
  memset(v14, 0, sizeof(v14));
  v15 = 0LL;
  tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::start_and_watch_errors(
    &v11,
    (struct wil::details::IFailureCallback *)v14);
  winrt::Windows::Internal::Shell::implementation::PinManager::CheckForTrustedCaller(a1, (__int64)&v11);
  v12 = 0;
  v6 = _lambda_5724e9f0897f2fd11b6a24af4b09628e_::_lambda_5724e9f0897f2fd11b6a24af4b09628e_(
         v10,
         a3,
         (__int64)&v13,
         (__int64)va,
         (__int64)&v12);
  v9[0] = *v6;
  v9[1] = v6[1];
  anonymous_namespace_::RunSynchronousInSTA__lambda_5724e9f0897f2fd11b6a24af4b09628e___(v9);
  tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::complete((__int64 *)&v11);
  LODWORD(a1) = v12;
  tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>((__int64)v14);
  wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>(&v11);
  return (unsigned int)a1;
}
