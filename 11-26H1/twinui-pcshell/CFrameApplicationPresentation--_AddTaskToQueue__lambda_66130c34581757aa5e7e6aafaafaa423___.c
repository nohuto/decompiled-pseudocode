/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_66130c34581757aa5e7e6aafaafaa423___ @ 0x180291DFC
 * Callers:
 *     ?_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x1801F00B0 (-_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoper.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     _lambda_bccacf824c0b35a20e4c1bcfbe66ad1f_::_lambda_bccacf824c0b35a20e4c1bcfbe66ad1f_ @ 0x180291F10 (_lambda_bccacf824c0b35a20e4c1bcfbe66ad1f_--_lambda_bccacf824c0b35a20e4c1bcfbe66ad1f_.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_153d02fd68e04791af94e0f734ac69a8_____lambda_153d02fd68e04791af94e0f734ac69a8___ @ 0x180291F5C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_153d02fd68e04.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_66130c34581757aa5e7e6aafaafaa423___(
        volatile signed __int32 *a1,
        __int64 a2)
{
  __int64 v5; // rax
  unsigned int v6; // esi
  __int64 *v7; // rax
  __int64 v8; // rbx
  volatile signed __int32 *v9; // rcx
  int v10; // esi
  __int64 v11[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  volatile signed __int32 *v13; // [rsp+60h] [rbp+8h] BYREF

  if ( *((_DWORD *)a1 + 14) == 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x820,
      (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
  else
  {
    v13 = a1;
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 8LL))(a1);
    v5 = lambda_bccacf824c0b35a20e4c1bcfbe66ad1f_::_lambda_bccacf824c0b35a20e4c1bcfbe66ad1f_(v11, &v13, a1, a2);
    v6 = *((_DWORD *)a1 + 12);
    v7 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_153d02fd68e04791af94e0f734ac69a8_____lambda_153d02fd68e04791af94e0f734ac69a8___(
                      &v13,
                      v5);
    v8 = *v7;
    *v7 = 0LL;
    v9 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v9);
    }
    v10 = SHTaskPoolQueueTask(3LL, 2LL, v6);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v11);
    if ( v10 >= 0 )
      ++*((_DWORD *)a1 + 52);
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 16LL))(a1);
    return (unsigned int)v10;
  }
}
