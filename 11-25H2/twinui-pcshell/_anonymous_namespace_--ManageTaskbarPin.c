/*
 * XREFs of _anonymous_namespace_::ManageTaskbarPin @ 0x1805C3590
 * Callers:
 *     ?UnpinTaskbarItem@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x1805C82E0 (-UnpinTaskbarItem@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@.c)
 *     ?UpdatePinnedTaskbarItem@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@@Z @ 0x1805C8430 (-UpdatePinnedTaskbarItem@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEM.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802891C8 (--1-$test_watcher@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x180289BA0 (-complete@-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@d.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028A728 (--1-$com_ptr_t@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uer.c)
 *     ?start_and_watch_errors@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@2@XZ @ 0x1802961DC (-start_and_watch_errors@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U1.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@1@XZ @ 0x1802BDC1C (--C-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C92C4 (--1-$test_data_control@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@t.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_e444c801a41511fb3819c6a1e051bb24___ @ 0x1805BCCF0 (_anonymous_namespace_--RunSynchronousInSTA__lambda_e444c801a41511fb3819c6a1e051bb24___.c)
 *     _lambda_e444c801a41511fb3819c6a1e051bb24_::_lambda_e444c801a41511fb3819c6a1e051bb24_ @ 0x1805BEC54 (_lambda_e444c801a41511fb3819c6a1e051bb24_--_lambda_e444c801a41511fb3819c6a1e051bb24_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall anonymous_namespace_::ManageTaskbarPin(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  int v4; // ebx
  _QWORD *v5; // rax
  volatile signed __int32 *v7[2]; // [rsp+30h] [rbp-79h] BYREF
  __int128 v8[2]; // [rsp+40h] [rbp-69h] BYREF
  __int64 v9; // [rsp+60h] [rbp-49h]
  _QWORD v10[5]; // [rsp+70h] [rbp-39h] BYREF
  __int64 v11; // [rsp+98h] [rbp-11h] BYREF
  __int64 v12; // [rsp+A0h] [rbp-9h] BYREF
  void *v13; // [rsp+A8h] [rbp-1h] BYREF
  int v14; // [rsp+B0h] [rbp+7h] BYREF
  unsigned int v15; // [rsp+B8h] [rbp+Fh] BYREF
  _OWORD v16[3]; // [rsp+C0h] [rbp+17h] BYREF
  __int64 v17; // [rsp+F0h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v12 = a1;
  v11 = a2;
  v14 = a3;
  if ( a1 )
  {
    v13 = 0LL;
    *(_DWORD *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::operator->(
                             (volatile signed __int32 **)&v13,
                             (__int64)v7)
              + 264LL) = (a2 != 0) + 8;
    tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(v7);
    *(_DWORD *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::operator->(
                             (volatile signed __int32 **)&v13,
                             (__int64)v7)
              + 1308LL) = 7;
    tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(v7);
    v4 = v14;
    *(_DWORD *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::operator->(
                             (volatile signed __int32 **)&v13,
                             (__int64)v7)
              + 1316LL) = v4;
    tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(v7);
    memset(v16, 0, sizeof(v16));
    v17 = 0LL;
    tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::start_and_watch_errors(
      (volatile signed __int32 **)&v13,
      (struct wil::details::IFailureCallback *)v16);
    v15 = 0;
    v5 = lambda_e444c801a41511fb3819c6a1e051bb24_::_lambda_e444c801a41511fb3819c6a1e051bb24_(
           v10,
           (__int64)&v12,
           (__int64)&v11,
           (__int64)&v14,
           (__int64)&v15,
           (__int64)v16);
    v8[0] = *(_OWORD *)v5;
    v8[1] = *((_OWORD *)v5 + 1);
    v9 = v5[4];
    anonymous_namespace_::RunSynchronousInSTA__lambda_e444c801a41511fb3819c6a1e051bb24___(v8);
    tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::complete((__int64 *)&v13);
    v3 = v15;
    tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>((__int64)v16);
    wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>(&v13);
  }
  else
  {
    v3 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEE,
      (int)"pcshell\\twinui\\PinManager\\lib\\PinManager.cpp",
      (const char *)0x80070057LL);
  }
  return v3;
}
