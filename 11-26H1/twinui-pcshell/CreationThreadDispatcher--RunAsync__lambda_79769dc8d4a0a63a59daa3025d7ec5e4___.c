/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_79769dc8d4a0a63a59daa3025d7ec5e4___ @ 0x1804EA2B8
 * Callers:
 *     _lambda_de87d9780560173c9d125f808a86f278_::operator() @ 0x1804EAB80 (_lambda_de87d9780560173c9d125f808a86f278_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180024574 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ @ 0x180072E58 (-InternalAddRef@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d45c45a1f8f4929b920127ae92a9fd69_____lambda_d45c45a1f8f4929b920127ae92a9fd69___ @ 0x1804EA1EC (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d45c45a1f8f49.c)
 *     _lambda_799586314299042aa0ed2a24b32e5288_::__lambda_799586314299042aa0ed2a24b32e5288_ @ 0x1804EA750 (_lambda_799586314299042aa0ed2a24b32e5288_--__lambda_799586314299042aa0ed2a24b32e5288_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_79769dc8d4a0a63a59daa3025d7ec5e4___(
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
  __int64 v12; // [rsp+40h] [rbp-10h] BYREF
  volatile signed __int32 *v13; // [rsp+70h] [rbp+20h] BYREF
  __int64 v14; // [rsp+78h] [rbp+28h] BYREF

  v14 = a1;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(&v14, (volatile int *)a2);
  v3 = *(_QWORD *)a2;
  *(_QWORD *)a2 = 0LL;
  v11[0] = v3;
  v11[1] = *(_QWORD *)(a2 + 8);
  v12 = v4;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(&v12, v5);
  v6 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d45c45a1f8f4929b920127ae92a9fd69_____lambda_d45c45a1f8f4929b920127ae92a9fd69___(
         &v13,
         v11);
  v7 = *v6;
  *v6 = 0LL;
  v8 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v8);
  }
  v9 = SHTaskPoolQueueTask(3LL, 0LL, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
  lambda_799586314299042aa0ed2a24b32e5288_::__lambda_799586314299042aa0ed2a24b32e5288_(v11);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v14);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)a2);
  return v9;
}
