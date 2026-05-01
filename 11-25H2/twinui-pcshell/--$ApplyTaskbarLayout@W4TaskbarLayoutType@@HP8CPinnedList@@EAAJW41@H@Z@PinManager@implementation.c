/*
 * XREFs of ??$ApplyTaskbarLayout@W4TaskbarLayoutType@@HP8CPinnedList@@EAAJW41@H@Z@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAAJW4ApiType@PinManagerTipTests@@P8CPinnedList@@EAAJW4TaskbarLayoutType@@H@Z1H@Z @ 0x1805BAAB4
 * Callers:
 *     ?ApplyReorderTaskbarLayout@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJW4TaskbarLayoutType@@H@Z @ 0x1805C0650 (-ApplyReorderTaskbarLayout@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJW4Taskba.c)
 * Callees:
 *     ??1?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802891C8 (--1-$test_watcher@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x180289BA0 (-complete@-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@d.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028A728 (--1-$com_ptr_t@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uer.c)
 *     ?start_and_watch_errors@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@2@XZ @ 0x1802961DC (-start_and_watch_errors@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U1.c)
 *     ?CheckForTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x18029643C (-CheckForTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEAV-$tip_te.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@1@XZ @ 0x1802BDC1C (--C-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C92C4 (--1-$test_data_control@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@t.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??0_lambda_943ebf8cb42eeb58ab3899b21541936c_@@QEAA@AEAP8CPinnedList@@EAAJW4TaskbarLayoutType@@H@ZAEAW42@AEAHAEAJ@Z @ 0x180438570 (--0_lambda_943ebf8cb42eeb58ab3899b21541936c_@@QEAA@AEAP8CPinnedList@@EAAJW4TaskbarLayoutType@@H@.c)
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_943ebf8cb42eeb58ab3899b21541936c___ @ 0x1805BC944 (_anonymous_namespace_--RunSynchronousInSTA__lambda_943ebf8cb42eeb58ab3899b21541936c___.c)
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
  volatile signed __int32 *v8[2]; // [rsp+30h] [rbp-71h] BYREF
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
  *(_DWORD *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::operator->(
                           (volatile signed __int32 **)&v11,
                           (__int64)v8)
            + 264LL) = 7;
  tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(v8);
  *(_DWORD *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::operator->(
                           (volatile signed __int32 **)&v11,
                           (__int64)v8)
            + 1308LL) = 1;
  tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(v8);
  *(_DWORD *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::operator->(
                           (volatile signed __int32 **)&v11,
                           (__int64)v8)
            + 1316LL) = 12;
  tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(v8);
  memset(v14, 0, sizeof(v14));
  v15 = 0LL;
  tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::start_and_watch_errors(
    (volatile signed __int32 **)&v11,
    (struct wil::details::IFailureCallback *)v14);
  winrt::Windows::Internal::Shell::implementation::PinManager::CheckForTrustedCaller(a1, (__int64)&v11);
  v12 = 0;
  v6 = _lambda_943ebf8cb42eeb58ab3899b21541936c_::_lambda_943ebf8cb42eeb58ab3899b21541936c_(
         v10,
         a3,
         (__int64)&v13,
         (__int64)va,
         (__int64)&v12);
  v9[0] = *v6;
  v9[1] = v6[1];
  anonymous_namespace_::RunSynchronousInSTA__lambda_943ebf8cb42eeb58ab3899b21541936c___(v9);
  tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::complete((__int64 *)&v11);
  LODWORD(a1) = v12;
  tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>((__int64)v14);
  wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>(&v11);
  return (unsigned int)a1;
}
