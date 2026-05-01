/*
 * XREFs of ?OnGameBarInitComplete@BroadcastDVRComponent@@UEAAJPEAUHWND__@@K@Z @ 0x180313120
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fcece59bd6baefde14bdaf7e6ba3f6c6_____lambda_fcece59bd6baefde14bdaf7e6ba3f6c6___ @ 0x18030E9DC (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fcece59bd6bae.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BroadcastDVRComponent::OnGameBarInitComplete(BroadcastDVRComponent *this, HWND a2, int a3)
{
  unsigned int v6; // edi
  volatile signed __int32 **v7; // rax
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rcx
  int v10; // edi
  HWND v12; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+38h] [rbp-20h]
  BroadcastDVRComponent *v14; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  volatile signed __int32 *v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = (volatile signed __int32 *)this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16);
  v12 = a2;
  v13 = a3;
  v14 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
  v6 = *((_DWORD *)this + 60);
  v7 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fcece59bd6baefde14bdaf7e6ba3f6c6_____lambda_fcece59bd6baefde14bdaf7e6ba3f6c6___(
         &v16,
         (__int64)&v12);
  v8 = *v7;
  *v7 = 0LL;
  v9 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v9);
  }
  v10 = SHTaskPoolQueueTask(3LL, 2LL, v6);
  if ( v8 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v14 )
    (*(void (__fastcall **)(BroadcastDVRComponent *))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v10 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BD,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
      (const char *)(unsigned int)v10);
  (*(void (__fastcall **)(BroadcastDVRComponent *))(*(_QWORD *)this + 16LL))(this);
  return (unsigned int)v10;
}
