/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_725b3a637bab541e8e61b969de3d5fdf___ @ 0x180297A44
 * Callers:
 *     ?Destroy@CFrameApplicationPresentation@@UEAAJXZ @ 0x180297A10 (-Destroy@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2647a080773a9fa4ef6a91f024d7dfff_____lambda_2647a080773a9fa4ef6a91f024d7dfff___ @ 0x1801D7758 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2647a080773a9.c)
 *     _lambda_efacefe1f9a132f9192ecba0e8d88571_::_lambda_efacefe1f9a132f9192ecba0e8d88571_ @ 0x180297B5C (_lambda_efacefe1f9a132f9192ecba0e8d88571_--_lambda_efacefe1f9a132f9192ecba0e8d88571_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_725b3a637bab541e8e61b969de3d5fdf___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rax
  unsigned int v5; // esi
  volatile signed __int32 **v6; // rax
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rcx
  int v9; // esi
  __int64 v10[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  volatile signed __int32 *v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF

  v13 = a2;
  if ( *(_DWORD *)(a1 + 56) == 2 )
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
    v12 = (volatile signed __int32 *)a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v4 = (_QWORD *)lambda_efacefe1f9a132f9192ecba0e8d88571_::_lambda_efacefe1f9a132f9192ecba0e8d88571_(
                     v10,
                     &v12,
                     a1,
                     &v13);
    v5 = *(_DWORD *)(a1 + 48);
    v6 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2647a080773a9fa4ef6a91f024d7dfff_____lambda_2647a080773a9fa4ef6a91f024d7dfff___(
           &v12,
           v4);
    v7 = *v6;
    *v6 = 0LL;
    v8 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v8);
    }
    v9 = SHTaskPoolQueueTask(3LL, 2LL, v5);
    if ( v7 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v10);
    if ( v9 >= 0 )
      ++*(_DWORD *)(a1 + 208);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    return (unsigned int)v9;
  }
}
