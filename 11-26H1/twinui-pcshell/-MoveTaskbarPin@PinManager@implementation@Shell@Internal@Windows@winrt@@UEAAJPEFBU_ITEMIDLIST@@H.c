/*
 * XREFs of ?MoveTaskbarPin@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@HW4PINNEDLISTMODIFYCALLER@@@Z @ 0x1805E74A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x18027EED0 (-complete@-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@d.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@1@XZ @ 0x180280FBC (--C-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180283114 (--1-$com_ptr_t@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uer.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x180283C50 (--1-$test_watcher@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802846CC (--1-$test_data_control@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@t.c)
 *     ?start_and_watch_errors@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@2@XZ @ 0x1802A26CC (-start_and_watch_errors@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U1.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_037aa076caca4eb578368a6543edcedb___ @ 0x1805E0358 (_anonymous_namespace_--RunSynchronousInSTA__lambda_037aa076caca4eb578368a6543edcedb___.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::MoveTaskbarPin(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4)
{
  int v5; // ebx
  unsigned int v6; // ebx
  void *v7[2]; // [rsp+20h] [rbp-98h] BYREF
  __int128 v8; // [rsp+30h] [rbp-88h] BYREF
  int *v9; // [rsp+40h] [rbp-78h]
  unsigned int *v10; // [rsp+48h] [rbp-70h]
  _OWORD *v11; // [rsp+50h] [rbp-68h]
  unsigned int v12; // [rsp+60h] [rbp-58h] BYREF
  void *v13; // [rsp+68h] [rbp-50h] BYREF
  _OWORD v14[3]; // [rsp+70h] [rbp-48h] BYREF
  __int64 v15; // [rsp+A0h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  __int64 v17; // [rsp+C8h] [rbp+10h] BYREF
  int v18; // [rsp+D0h] [rbp+18h] BYREF
  int v19; // [rsp+D8h] [rbp+20h] BYREF

  v19 = a4;
  v18 = a3;
  v17 = a2;
  if ( a2 )
  {
    v13 = 0LL;
    *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::operator->(
                   (__int64)&v13,
                   (__int64 *)v7)
              + 272) = 10;
    tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(v7);
    *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::operator->(
                   (__int64)&v13,
                   (__int64 *)v7)
              + 1316) = 7;
    tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(v7);
    v5 = v19;
    *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::operator->(
                   (__int64)&v13,
                   (__int64 *)v7)
              + 1324) = v5;
    tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(v7);
    memset(v14, 0, sizeof(v14));
    v15 = 0LL;
    tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::start_and_watch_errors(
      &v13,
      (struct wil::details::IFailureCallback *)v14);
    v12 = 0;
    *(_QWORD *)&v8 = &v17;
    *((_QWORD *)&v8 + 1) = &v18;
    v9 = &v19;
    v10 = &v12;
    v11 = v14;
    anonymous_namespace_::RunSynchronousInSTA__lambda_037aa076caca4eb578368a6543edcedb___(&v8);
    tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::complete((__int64 *)&v13);
    v6 = v12;
    tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>((__int64)v14);
    wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>(&v13);
    return v6;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3ED,
      (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
