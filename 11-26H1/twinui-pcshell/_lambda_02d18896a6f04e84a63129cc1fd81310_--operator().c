/*
 * XREFs of _lambda_02d18896a6f04e84a63129cc1fd81310_::operator() @ 0x1805E3C98
 * Callers:
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_02d18896a6f04e84a63129cc1fd81310___ @ 0x1805E0218 (_anonymous_namespace_--RunSynchronousInSTA__lambda_02d18896a6f04e84a63129cc1fd81310___.c)
 *     _lambda_d94d82cd4edd08e6199a1e53cb8b0ecd_::operator() @ 0x1805E4388 (_lambda_d94d82cd4edd08e6199a1e53cb8b0ecd_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x180283C50 (--1-$test_watcher@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028D400 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ?CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z @ 0x1802BB578 (-CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@2@XZ @ 0x1805ED2A8 (-watch_errors@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180692D40 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_02d18896a6f04e84a63129cc1fd81310_::operator()(_QWORD *a1)
{
  int v2; // eax
  unsigned int *v3; // r9
  _QWORD *v4; // r8
  struct CPinnedList *v5; // rbx
  int v6; // eax
  wil *v7; // rcx
  _QWORD *v8; // rdi
  _DWORD *v9; // rbx
  const char *v10; // r9
  int v11; // [rsp+20h] [rbp-68h]
  struct CPinnedList *v12; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v13; // [rsp+38h] [rbp-50h]
  _OWORD v14[3]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v15; // [rsp+70h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v13 = a1;
  memset(v14, 0, sizeof(v14));
  v15 = 0LL;
  tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::watch_errors(
    *a1,
    v14);
  v12 = 0LL;
  v2 = CTaskbandPin_CreateInstance(&v12);
  try
  {
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xAF,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)v2,
        v11);
    v3 = (unsigned int *)a1[2];
    v4 = (_QWORD *)a1[1];
    v5 = v12;
    v6 = CPinnedList::InternalModify(v12, 0LL, *v4, *v3);
    v7 = retaddr;
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xB0,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)v6,
        0);
    if ( v5 )
      winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)&v12);
  }
  catch ( ... )
  {
    v8 = v13;
    v9 = (_DWORD *)v13[3];
    *v9 = wil::ResultFromCaughtException(v7);
    LODWORD(v9) = *(_DWORD *)v8[3];
    tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(
      (__int64 *)&v12,
      &v15);
    *((_DWORD *)v12 + 332) = (_DWORD)v9;
    tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>((void **)&v12);
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xB6,
      (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      v10);
  }
  tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>((__int64)v14);
}
