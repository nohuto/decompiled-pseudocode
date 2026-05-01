/*
 * XREFs of _lambda_e9273f30aaf408505b3f0162e09ecc61_::operator() @ 0x1805C02CC
 * Callers:
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_e9273f30aaf408505b3f0162e09ecc61___ @ 0x1805BCE3C (_anonymous_namespace_--RunSynchronousInSTA__lambda_e9273f30aaf408505b3f0162e09ecc61___.c)
 *     _lambda_d71cce0086fd906470872e2ae29f8c4a_::operator() @ 0x1805C0200 (_lambda_d71cce0086fd906470872e2ae29f8c4a_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802891C8 (--1-$test_watcher@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028F8E4 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ?CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z @ 0x1802C4D80 (-CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@2@XZ @ 0x1805C9478 (-watch_errors@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x18066C480 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_e9273f30aaf408505b3f0162e09ecc61_::operator()(__int64 a1)
{
  int v2; // eax
  __int64 v3; // r9
  _QWORD *v4; // rax
  struct CPinnedList *v5; // rbx
  int v6; // eax
  wil *v7; // rcx
  int v8; // ebx
  const char *v9; // r9
  int v10; // [rsp+20h] [rbp-68h]
  struct CPinnedList *v11; // [rsp+30h] [rbp-58h] BYREF
  __int64 v12; // [rsp+38h] [rbp-50h]
  _OWORD v13[3]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v14; // [rsp+70h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v12 = a1;
  memset(v13, 0, sizeof(v13));
  v14 = 0LL;
  tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::watch_errors(
    *(_QWORD *)a1,
    v13);
  v11 = 0LL;
  v2 = CTaskbandPin_CreateInstance(&v11);
  try
  {
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xD5,
        (int)"pcshell\\twinui\\PinManager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)v2,
        v10);
    v3 = **(unsigned int **)(a1 + 16);
    v4 = *(_QWORD **)(a1 + 8);
    v5 = v11;
    v6 = CPinnedList::InternalModify(v11, 0LL, *v4, v3);
    v7 = retaddr;
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xD6,
        (int)"pcshell\\twinui\\PinManager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)v6,
        0);
    if ( v5 )
      winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)&v11);
  }
  catch ( ... )
  {
    v8 = wil::ResultFromCaughtException(v7);
    **(_DWORD **)(v12 + 24) = v8;
    tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(
      (__int64 *)&v11,
      &v14);
    *((_DWORD *)v11 + 330) = v8;
    tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>((volatile signed __int32 **)&v11);
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xDC,
      (int)"pcshell\\twinui\\PinManager\\lib\\PinManager.cpp",
      v9);
  }
  tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>((__int64)v13);
}
