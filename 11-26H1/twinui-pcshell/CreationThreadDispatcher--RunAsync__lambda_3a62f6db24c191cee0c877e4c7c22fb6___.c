/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_3a62f6db24c191cee0c877e4c7c22fb6___ @ 0x1804F591C
 * Callers:
 *     _lambda_f24517619e04b8c6c046d1f7bd6f10fb_::operator()_winrt::Windows::System::Threading::ThreadPoolTimer_ @ 0x1804F27CC (_lambda_f24517619e04b8c6c046d1f7bd6f10fb_--operator()_winrt--Windows--System--Threading--ThreadP.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180024574 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ @ 0x180072E58 (-InternalAddRef@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_897ccbd7d9b523c5d662fd466311443e_____lambda_897ccbd7d9b523c5d662fd466311443e___ @ 0x1804F4AE0 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_897ccbd7d9b52.c)
 *     _lambda_c46833f4c9ea63983b862330b23aa69b_::__lambda_c46833f4c9ea63983b862330b23aa69b_ @ 0x1804F74F4 (_lambda_c46833f4c9ea63983b862330b23aa69b_--__lambda_c46833f4c9ea63983b862330b23aa69b_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_3a62f6db24c191cee0c877e4c7c22fb6___(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  volatile int *v5; // rdx
  volatile signed __int32 **v6; // rax
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rcx
  unsigned int v9; // esi
  __int64 v11[2]; // [rsp+30h] [rbp-20h] BYREF
  char v12; // [rsp+40h] [rbp-10h]
  __int64 v13; // [rsp+48h] [rbp-8h] BYREF
  volatile signed __int32 *v14; // [rsp+70h] [rbp+20h] BYREF
  __int64 v15; // [rsp+78h] [rbp+28h] BYREF

  v15 = a1;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(&v15, (volatile int *)a2);
  v3 = *(_QWORD *)a2;
  *(_QWORD *)a2 = 0LL;
  v11[0] = v3;
  v11[1] = *(_QWORD *)(a2 + 8);
  v12 = *(_BYTE *)(a2 + 16);
  v13 = v4;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(&v13, v5);
  v6 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_897ccbd7d9b523c5d662fd466311443e_____lambda_897ccbd7d9b523c5d662fd466311443e___(
         &v14,
         v11);
  v7 = *v6;
  *v6 = 0LL;
  v8 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v8);
  }
  v9 = SHTaskPoolQueueTask(3LL, 0LL, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
  lambda_c46833f4c9ea63983b862330b23aa69b_::__lambda_c46833f4c9ea63983b862330b23aa69b_(v11);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v15);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)a2);
  return v9;
}
