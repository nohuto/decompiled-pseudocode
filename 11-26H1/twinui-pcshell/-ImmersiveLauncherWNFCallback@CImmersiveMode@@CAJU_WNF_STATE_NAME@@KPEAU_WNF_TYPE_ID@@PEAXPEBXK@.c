/*
 * XREFs of ?ImmersiveLauncherWNFCallback@CImmersiveMode@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180186B20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b9e009682738098b72449fb04d8aa113_____lambda_b9e009682738098b72449fb04d8aa113___ @ 0x180186C10 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b9e0096827380.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveMode::ImmersiveLauncherWNFCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        _DWORD *a4)
{
  unsigned int v5; // esi
  __int64 *v6; // rax
  __int64 v7; // rbx
  volatile signed __int32 *v8; // rcx
  volatile signed __int32 *v10; // [rsp+30h] [rbp-18h] BYREF
  _DWORD *v11; // [rsp+68h] [rbp+20h] BYREF

  if ( a4 )
    (*(void (__fastcall **)(_DWORD *, __int64, struct _WNF_TYPE_ID *))(*(_QWORD *)a4 + 8LL))(a4, a2, a3);
  v11 = a4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
  v5 = a4[88];
  v6 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b9e009682738098b72449fb04d8aa113_____lambda_b9e009682738098b72449fb04d8aa113___(
                    &v10,
                    &v11);
  v7 = *v6;
  *v6 = 0LL;
  v8 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v8);
  }
  SHTaskPoolQueueTask(3LL, 2LL, v5);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v11 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 16LL))(v11);
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a4 + 16LL))(a4);
  return 0LL;
}
