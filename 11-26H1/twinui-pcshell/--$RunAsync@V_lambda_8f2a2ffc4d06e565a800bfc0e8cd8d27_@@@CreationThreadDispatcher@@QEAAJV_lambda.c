/*
 * XREFs of ??$RunAsync@V_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@@CreationThreadDispatcher@@QEAAJV_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@K@Z @ 0x1803E5C8C
 * Callers:
 *     ?HangAsync@ImmersiveShellStressTool@@UEAAJKKPEAX@Z @ 0x1803E61A0 (-HangAsync@ImmersiveShellStressTool@@UEAAJKKPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180024574 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ @ 0x180072E58 (-InternalAddRef@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ??1?$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ @ 0x1801FDA14 (--1-$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ.c)
 *     ??$Make@V?$CTaskWrapper@V_lambda_28273f6668f79f5db2d6a9fae521721a_@@@ComTaskPool@Internal@Windows@@V_lambda_28273f6668f79f5db2d6a9fae521721a_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_28273f6668f79f5db2d6a9fae521721a_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_28273f6668f79f5db2d6a9fae521721a_@@@Z @ 0x1803E5AC4 (--$Make@V-$CTaskWrapper@V_lambda_28273f6668f79f5db2d6a9fae521721a_@@@ComTaskPool@Internal@Window.c)
 *     ??1_lambda_28273f6668f79f5db2d6a9fae521721a_@@QEAA@XZ @ 0x1803E5F78 (--1_lambda_28273f6668f79f5db2d6a9fae521721a_@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreationThreadDispatcher::RunAsync<_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_>(
        __int64 a1,
        volatile int *a2,
        unsigned int a3)
{
  int *v4; // r9
  __int64 v5; // rdi
  __int64 v6; // r10
  volatile int *v7; // rdx
  int v8; // r8d
  unsigned int v9; // esi
  volatile signed __int32 **v10; // rax
  volatile signed __int32 *v11; // rbx
  volatile signed __int32 *v12; // rcx
  unsigned int v13; // esi
  int v15; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+38h] [rbp-18h]
  __int64 v17; // [rsp+40h] [rbp-10h]
  __int64 v18; // [rsp+48h] [rbp-8h] BYREF
  volatile signed __int32 *v19; // [rsp+70h] [rbp+20h] BYREF
  __int64 v20; // [rsp+78h] [rbp+28h] BYREF

  v20 = a1;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(&v20, a2);
  v15 = *v4;
  v5 = (__int64)(v4 + 2);
  v16 = *((_QWORD *)v4 + 1);
  v17 = *((_QWORD *)v4 + 2);
  *((_QWORD *)v4 + 1) = 0LL;
  *((_QWORD *)v4 + 2) = 0LL;
  v18 = v6;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(&v18, v7);
  v9 = v8 != 0 ? 2 : 0;
  v10 = Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_28273f6668f79f5db2d6a9fae521721a_>,_lambda_28273f6668f79f5db2d6a9fae521721a_>(
          &v19,
          (__int64)&v15);
  v11 = *v10;
  *v10 = 0LL;
  v12 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v12);
  }
  v13 = SHTaskPoolQueueTask(3LL, v9, a3);
  if ( v11 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
  _lambda_28273f6668f79f5db2d6a9fae521721a_::~_lambda_28273f6668f79f5db2d6a9fae521721a_((_lambda_28273f6668f79f5db2d6a9fae521721a_ *)&v15);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v20);
  std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>::~shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>(v5);
  return v13;
}
