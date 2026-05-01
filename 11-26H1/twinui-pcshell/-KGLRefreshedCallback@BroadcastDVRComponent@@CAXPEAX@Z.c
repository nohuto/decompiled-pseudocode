/*
 * XREFs of ?KGLRefreshedCallback@BroadcastDVRComponent@@CAXPEAX@Z @ 0x180312730
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b0bba9217c60fc9f1eb04f96e77e4694_____lambda_b0bba9217c60fc9f1eb04f96e77e4694___ @ 0x18030E768 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b0bba9217c60f.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BroadcastDVRComponent::KGLRefreshedCallback(_DWORD *a1)
{
  unsigned int v2; // esi
  volatile signed __int32 **v3; // rax
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rcx
  _DWORD *v6; // [rsp+40h] [rbp+8h] BYREF
  volatile signed __int32 *v7; // [rsp+48h] [rbp+10h] BYREF

  v6 = a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v6);
  v6 = a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v6);
  v2 = a1[60];
  v3 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b0bba9217c60fc9f1eb04f96e77e4694_____lambda_b0bba9217c60fc9f1eb04f96e77e4694___(
         &v7,
         &v6);
  v4 = *v3;
  *v3 = 0LL;
  v5 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v5);
  }
  SHTaskPoolQueueTask(3LL, 2LL, v2);
  if ( v4 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v6 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 16LL))(v6);
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL))(a1);
}
