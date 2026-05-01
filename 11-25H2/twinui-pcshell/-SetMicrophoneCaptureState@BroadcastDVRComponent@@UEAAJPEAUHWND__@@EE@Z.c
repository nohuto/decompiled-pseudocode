/*
 * XREFs of ?SetMicrophoneCaptureState@BroadcastDVRComponent@@UEAAJPEAUHWND__@@EE@Z @ 0x1803185D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsMRPInstalled@BroadcastDVRComponent@@AEAA_NXZ @ 0x1800B146C (-IsMRPInstalled@BroadcastDVRComponent@@AEAA_NXZ.c)
 *     ?IsAllowedSku@@YA_NXZ @ 0x1800BB138 (-IsAllowedSku@@YA_NXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801362A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5bb7faa24d55580d837ad648107af7b9_____lambda_5bb7faa24d55580d837ad648107af7b9___ @ 0x180312618 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5bb7faa24d555.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BroadcastDVRComponent::SetMicrophoneCaptureState(
        BroadcastDVRComponent *this,
        __int64 a2,
        char a3,
        char a4)
{
  BroadcastDVRComponent *v8; // rcx
  unsigned int v9; // esi
  volatile signed __int32 **v10; // rax
  volatile signed __int32 *v11; // rbx
  volatile signed __int32 *v12; // rcx
  int v13; // esi
  __int64 v15[2]; // [rsp+30h] [rbp-20h] BYREF
  char v16; // [rsp+40h] [rbp-10h]
  char v17; // [rsp+41h] [rbp-Fh]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  volatile signed __int32 *v19; // [rsp+70h] [rbp+20h] BYREF

  v19 = (volatile signed __int32 *)this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
  if ( *((_BYTE *)this + 432) && IsAllowedSku() && BroadcastDVRComponent::IsMRPInstalled(v8) )
  {
    v15[0] = (__int64)this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v15);
    v15[1] = a2;
    v16 = a3;
    v17 = a4;
    v9 = *((_DWORD *)this + 60);
    v10 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5bb7faa24d55580d837ad648107af7b9_____lambda_5bb7faa24d55580d837ad648107af7b9___(
            &v19,
            (__int64)v15);
    v11 = *v10;
    *v10 = 0LL;
    v12 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v12);
    }
    v13 = SHTaskPoolQueueTask(3LL, 2LL, v9);
    if ( v11 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v15[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15[0] + 16LL))(v15[0]);
    if ( v13 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x162,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)(unsigned int)v13);
    (*(void (__fastcall **)(BroadcastDVRComponent *))(*(_QWORD *)this + 16LL))(this);
    return (unsigned int)v13;
  }
  else
  {
    (*(void (__fastcall **)(BroadcastDVRComponent *))(*(_QWORD *)this + 16LL))(this);
    return 0LL;
  }
}
