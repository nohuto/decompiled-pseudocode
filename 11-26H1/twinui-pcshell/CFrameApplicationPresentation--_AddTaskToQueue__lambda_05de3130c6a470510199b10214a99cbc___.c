/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_05de3130c6a470510199b10214a99cbc___ @ 0x180303794
 * Callers:
 *     ?SetSystemVisualAnimation@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL_ANIMATION@@@Z @ 0x180305CE0 (-SetSystemVisualAnimation@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL_ANIMATION@@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     _lambda_bccacf824c0b35a20e4c1bcfbe66ad1f_::_lambda_bccacf824c0b35a20e4c1bcfbe66ad1f_ @ 0x180291F10 (_lambda_bccacf824c0b35a20e4c1bcfbe66ad1f_--_lambda_bccacf824c0b35a20e4c1bcfbe66ad1f_.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9dddca5f05a2942cd59970d890cca53e_____lambda_9dddca5f05a2942cd59970d890cca53e___ @ 0x180303070 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9dddca5f05a29.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_05de3130c6a470510199b10214a99cbc___(
        _DWORD *a1,
        _OWORD *a2)
{
  __int64 v5; // rax
  unsigned int v6; // esi
  volatile signed __int32 **v7; // rax
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rcx
  int v10; // esi
  __int64 v11[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  _DWORD *v13; // [rsp+60h] [rbp+8h] BYREF
  volatile signed __int32 *v14; // [rsp+70h] [rbp+18h] BYREF

  if ( a1[14] == 2 )
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
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
    v5 = lambda_bccacf824c0b35a20e4c1bcfbe66ad1f_::_lambda_bccacf824c0b35a20e4c1bcfbe66ad1f_(
           (__int64)v11,
           &v13,
           (__int64)a1,
           a2);
    v6 = a1[12];
    v7 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9dddca5f05a2942cd59970d890cca53e_____lambda_9dddca5f05a2942cd59970d890cca53e___(
           &v14,
           v5);
    v8 = *v7;
    *v7 = 0LL;
    v9 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v9);
    }
    v10 = SHTaskPoolQueueTask(3LL, 2LL, v6);
    if ( v8 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL))(v8);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v11);
    if ( v10 >= 0 )
      ++a1[52];
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
    return (unsigned int)v10;
  }
}
