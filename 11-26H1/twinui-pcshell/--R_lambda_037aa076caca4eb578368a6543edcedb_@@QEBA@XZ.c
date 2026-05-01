/*
 * XREFs of ??R_lambda_037aa076caca4eb578368a6543edcedb_@@QEBA@XZ @ 0x1805E3D90
 * Callers:
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_037aa076caca4eb578368a6543edcedb___ @ 0x1805E0358 (_anonymous_namespace_--RunSynchronousInSTA__lambda_037aa076caca4eb578368a6543edcedb___.c)
 *     _lambda_c893669e52b0232e2155e336d6e588e0_::operator() @ 0x1805E42C8 (_lambda_c893669e52b0232e2155e336d6e588e0_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028D400 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ?CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z @ 0x1802BB578 (-CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _lambda_037aa076caca4eb578368a6543edcedb_::operator()(__int64 a1)
{
  int Instance; // eax
  _QWORD *v3; // rbx
  __int64 result; // rax
  wil *v5; // rcx
  _DWORD *v6; // rbx
  const char *v7; // r9
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0LL;
  Instance = CTaskbandPin_CreateInstance((struct CPinnedList **)&v11);
  try
  {
    if ( Instance < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3FD,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)Instance,
        v8);
    v3 = v11;
    result = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD, _QWORD))(v11[3] + 128LL))(
               (char *)v11 + 24,
               **(_QWORD **)a1,
               (unsigned __int16)(**(_WORD **)(a1 + 8) + 1),
               **(unsigned int **)(a1 + 16));
    v5 = retaddr;
    if ( (int)result < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3FE,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)result,
        v8);
    if ( v3 )
      result = winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)&v11);
  }
  catch ( ... )
  {
    v6 = *(_DWORD **)(a1 + 24);
    *v6 = wil::ResultFromCaughtException(v5);
    LODWORD(v6) = **(_DWORD **)(a1 + 24);
    tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(
      (__int64 *)&v11,
      (__int64 *)(*(_QWORD *)(a1 + 32) + 48LL));
    *((_DWORD *)v11 + 332) = (_DWORD)v6;
    tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>((void **)&v11);
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0x404,
             (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
             v7);
  }
  return result;
}
