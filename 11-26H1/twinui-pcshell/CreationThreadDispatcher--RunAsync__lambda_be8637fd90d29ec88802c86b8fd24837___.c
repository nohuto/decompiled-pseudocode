/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_be8637fd90d29ec88802c86b8fd24837___ @ 0x18033CFE4
 * Callers:
 *     ?UpdateHotkeyRegistrations@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1801E8DF8 (-UpdateHotkeyRegistrations@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180024574 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ @ 0x180072E58 (-InternalAddRef@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f0c19de952608ac38818ed5c4569ea16_____lambda_f0c19de952608ac38818ed5c4569ea16___ @ 0x18033C800 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f0c19de952608.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_be8637fd90d29ec88802c86b8fd24837___(
        __int64 a1,
        volatile int *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  volatile int *v4; // rdx
  volatile signed __int32 **v5; // rax
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rcx
  unsigned int v8; // edi
  volatile signed __int32 *v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h] BYREF
  __int64 v13[2]; // [rsp+48h] [rbp-10h] BYREF

  v11 = a1;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(&v11, a2);
  v12 = v2;
  v13[0] = v3;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(v13, v4);
  v5 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f0c19de952608ac38818ed5c4569ea16_____lambda_f0c19de952608ac38818ed5c4569ea16___(
         &v10,
         &v12);
  v6 = *v5;
  *v5 = 0LL;
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v7);
  }
  v8 = SHTaskPoolQueueTask(3LL, 0LL, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(v13);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v11);
  return v8;
}
