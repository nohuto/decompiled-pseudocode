/*
 * XREFs of ??$ApplyTaskbarLayout@W4TaskbarLayoutType@@P8CPinnedList@@EAAJW41@@Z@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAAJW4ApiType@PinManagerTipTests@@P8CPinnedList@@EAAJW4TaskbarLayoutType@@@Z1@Z @ 0x180295FC8
 * Callers:
 *     ?ApplyInPlaceTaskbarLayout@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJW4TaskbarLayoutType@@@Z @ 0x1805C05B0 (-ApplyInPlaceTaskbarLayout@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJW4Taskba.c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032A5C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?start@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18028A258 (-start@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x18028A668 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028A728 (--1-$com_ptr_t@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uer.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18028A9BC (-reset@-$com_ptr_t@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18028A9E0 (-ensure_data@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@.c)
 *     ?complete_without_lock@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028AC1C (-complete_without_lock@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028ADE8 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ??0_lambda_2b94c938c284b16eb776d16960094630_@@QEAA@PEAV?$shared_ptr@VPinRequestContext@@@std@@AEAV?$shared_ptr@VPinOperationContext@@@2@AEA_N@Z @ 0x1802961C4 (--0_lambda_2b94c938c284b16eb776d16960094630_@@QEAA@PEAV-$shared_ptr@VPinRequestContext@@@std@@AE.c)
 *     ??0?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@IEAA@AEAV?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180296244 (--0-$test_watcher@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@.c)
 *     ?CheckForTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x18029643C (-CheckForTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEAV-$tip_te.c)
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_1aef1f30231a1d8f4110e6f712366876___ @ 0x180296B0C (_anonymous_namespace_--RunSynchronousInSTA__lambda_1aef1f30231a1d8f4110e6f712366876___.c)
 *     ?has_ever_started@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802CEA04 (-has_ever_started@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::ApplyTaskbarLayout<enum TaskbarLayoutType,long (CPinnedList::*)(enum TaskbarLayoutType)>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  volatile signed __int32 *v6; // rdi
  volatile signed __int32 *v7; // rdi
  volatile signed __int32 *v8; // rdi
  volatile signed __int32 **v9; // rax
  __int64 v10; // rax
  unsigned int v11; // ebx
  volatile signed __int32 *v13; // [rsp+20h] [rbp-79h] BYREF
  volatile signed __int32 *v14; // [rsp+28h] [rbp-71h] BYREF
  void *v15[2]; // [rsp+30h] [rbp-69h] BYREF
  __int128 v16; // [rsp+40h] [rbp-59h] BYREF
  __int64 v17; // [rsp+50h] [rbp-49h]
  _BYTE v18[24]; // [rsp+60h] [rbp-39h] BYREF
  char *v19; // [rsp+78h] [rbp-21h] BYREF
  unsigned int v20; // [rsp+80h] [rbp-19h] BYREF
  int v21; // [rsp+88h] [rbp-11h] BYREF
  _OWORD v22[3]; // [rsp+90h] [rbp-9h] BYREF
  void *v23; // [rsp+C0h] [rbp+27h] BYREF

  v21 = a4;
  v19 = 0LL;
  v6 = *tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::ensure_data((volatile signed __int32 **)&v19);
  v13 = v6;
  if ( v6 )
    _InterlockedIncrement(v6 + 332);
  tip2::details::shared_data<0,0,1>::begin_update((__int64)(v6 + 2));
  *((_DWORD *)v6 + 66) = 6;
  tip2::details::shared_data<0,0,0>::end_update((__int64)(v6 + 2));
  wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::reset(&v13);
  wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>((void **)&v13);
  v7 = *tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::ensure_data((volatile signed __int32 **)&v19);
  v14 = v7;
  if ( v7 )
    _InterlockedIncrement(v7 + 332);
  tip2::details::shared_data<0,0,1>::begin_update((__int64)(v7 + 2));
  *((_DWORD *)v7 + 327) = 1;
  tip2::details::shared_data<0,0,0>::end_update((__int64)(v7 + 2));
  wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::reset(&v14);
  wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>((void **)&v14);
  v8 = *tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::ensure_data((volatile signed __int32 **)&v19);
  v15[0] = (void *)v8;
  if ( v8 )
    _InterlockedIncrement(v8 + 332);
  tip2::details::shared_data<0,0,1>::begin_update((__int64)(v8 + 2));
  *((_DWORD *)v8 + 329) = 12;
  tip2::details::shared_data<0,0,0>::end_update((__int64)(v8 + 2));
  wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::reset((volatile signed __int32 **)v15);
  wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>(v15);
  memset(v22, 0, sizeof(v22));
  v23 = 0LL;
  if ( v19 && (unsigned __int8)tip2::details::shared_data<1,0,0>::has_ever_started(v19 + 8) )
    wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::reset((volatile signed __int32 **)&v19);
  v9 = tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::ensure_data((volatile signed __int32 **)&v19);
  tip2::details::shared_data<0,0,0>::start((__int64)(*v9 + 2), &v16);
  tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>((struct wil::details::IFailureCallback *)v22);
  winrt::Windows::Internal::Shell::implementation::PinManager::CheckForTrustedCaller(a1, &v19);
  v20 = 0;
  v10 = _lambda_2b94c938c284b16eb776d16960094630_::_lambda_2b94c938c284b16eb776d16960094630_(v18, a3, &v21, &v20);
  v16 = *(_OWORD *)v10;
  v17 = *(_QWORD *)(v10 + 16);
  anonymous_namespace_::RunSynchronousInSTA__lambda_1aef1f30231a1d8f4110e6f712366876___(&v16);
  if ( v19 )
    tip2::details::shared_data<0,0,0>::complete_without_lock((__int64)(v19 + 8));
  v11 = v20;
  wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>(&v23);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)((char *)v22 + 8));
  wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>((void **)&v19);
  return v11;
}
