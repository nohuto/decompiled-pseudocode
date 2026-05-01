/*
 * XREFs of _lambda_e444c801a41511fb3819c6a1e051bb24_::operator() @ 0x1805C0220
 * Callers:
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_e444c801a41511fb3819c6a1e051bb24___ @ 0x1805BCCF0 (_anonymous_namespace_--RunSynchronousInSTA__lambda_e444c801a41511fb3819c6a1e051bb24___.c)
 *     _lambda_49576c7b7cc4c4fe7606482adb1540e0_::operator() @ 0x1805BFD20 (_lambda_49576c7b7cc4c4fe7606482adb1540e0_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028F8E4 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ?CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z @ 0x1802C4D80 (-CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_e444c801a41511fb3819c6a1e051bb24_::operator()(__int64 a1)
{
  int v2; // eax
  struct CPinnedList *v3; // rbx
  __int64 result; // rax
  wil *v5; // rcx
  int v6; // ebx
  const char *v7; // r9
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CPinnedList *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0LL;
  v2 = CTaskbandPin_CreateInstance(&v11);
  try
  {
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xFE,
        (int)"pcshell\\twinui\\PinManager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)v2,
        v8);
    v3 = v11;
    result = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD, _QWORD))(*((_QWORD *)v11 + 3) + 128LL))(
               (char *)v11 + 24,
               **(_QWORD **)a1,
               **(_QWORD **)(a1 + 8),
               **(unsigned int **)(a1 + 16));
    v5 = retaddr;
    if ( (int)result < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xFF,
        (int)"pcshell\\twinui\\PinManager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)result,
        v8);
    if ( v3 )
      result = winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)&v11);
  }
  catch ( ... )
  {
    v6 = wil::ResultFromCaughtException(v5);
    **(_DWORD **)(a1 + 24) = v6;
    tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(
      (__int64 *)&v11,
      (__int64 *)(*(_QWORD *)(a1 + 32) + 48LL));
    *((_DWORD *)v11 + 330) = v6;
    tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>((volatile signed __int32 **)&v11);
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0x105,
             (int)"pcshell\\twinui\\PinManager\\lib\\PinManager.cpp",
             v7);
  }
  return result;
}
