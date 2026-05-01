/*
 * XREFs of ?DisplayStateChangeWNFCallback@BroadcastDVRComponent@@AEAAXPEBU_NETWORK_DISPLAY_STATE_CHANGE_NOTIFICATION@@@Z @ 0x1803158C8
 * Callers:
 *     ?StaticDisplayStateChangeWNFCallback@BroadcastDVRComponent@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180228B90 (-StaticDisplayStateChangeWNFCallback@BroadcastDVRComponent@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801362A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ef26dee21aeac91685b7d7242343189e_____lambda_ef26dee21aeac91685b7d7242343189e___ @ 0x180312AAC (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ef26dee21aeac.c)
 *     ?BroadcastDVRComponent_DisplayStateChangeWNFCallback@GameDVRTraceProvider@@SAXK@Z @ 0x180314EA4 (-BroadcastDVRComponent_DisplayStateChangeWNFCallback@GameDVRTraceProvider@@SAXK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BroadcastDVRComponent::DisplayStateChangeWNFCallback(
        BroadcastDVRComponent *this,
        const struct _NETWORK_DISPLAY_STATE_CHANGE_NOTIFICATION *a2)
{
  int v4; // eax
  unsigned int v5; // esi
  volatile signed __int32 **v6; // rax
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rcx
  BroadcastDVRComponent *v9; // [rsp+58h] [rbp+10h] BYREF
  volatile signed __int32 *v10; // [rsp+60h] [rbp+18h] BYREF

  if ( a2 && *(_DWORD *)a2 == 1 && !*((_DWORD *)a2 + 132) )
  {
    GameDVRTraceProvider::BroadcastDVRComponent_DisplayStateChangeWNFCallback(*((_DWORD *)a2 + 131));
    v4 = *((_DWORD *)a2 + 131);
    if ( v4 == 2 )
    {
      _InterlockedCompareExchange((volatile signed __int32 *)this + 110, 1, 0);
    }
    else if ( !v4 && _InterlockedCompareExchange((volatile signed __int32 *)this + 110, 0, 1) == 1 )
    {
      v9 = this;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
      v9 = this;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
      v5 = *((_DWORD *)this + 60);
      v6 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ef26dee21aeac91685b7d7242343189e_____lambda_ef26dee21aeac91685b7d7242343189e___(
             &v10,
             (volatile signed __int32 *)&v9);
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
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
      if ( v9 )
        (*(void (__fastcall **)(BroadcastDVRComponent *))(*(_QWORD *)v9 + 16LL))(v9);
      (*(void (__fastcall **)(BroadcastDVRComponent *))(*(_QWORD *)this + 16LL))(this);
    }
  }
}
