/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_fa553258777e9fe890f937adf5270d38___ @ 0x18048AE38
 * Callers:
 *     ?SetWindowPosition@AccessibilityExperienceManager@@UEAAJIIII@Z @ 0x18048DAB0 (-SetWindowPosition@AccessibilityExperienceManager@@UEAAJIIII@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180024574 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ @ 0x180072E58 (-InternalAddRef@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ddcef2f81a2bd508ea885ce0e8373a3e_____lambda_ddcef2f81a2bd508ea885ce0e8373a3e___ @ 0x18048AAF8 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ddcef2f81a2bd.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_fa553258777e9fe890f937adf5270d38___(
        __int64 a1,
        volatile int *a2)
{
  __int128 *v2; // r8
  __int64 v3; // r9
  volatile int *v4; // rdx
  volatile signed __int32 **v5; // rax
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rcx
  unsigned int v8; // edi
  __int128 v10; // [rsp+30h] [rbp-20h] BYREF
  __int64 v11; // [rsp+40h] [rbp-10h]
  __int64 v12; // [rsp+48h] [rbp-8h] BYREF
  volatile signed __int32 *v13; // [rsp+60h] [rbp+10h] BYREF
  __int64 v14; // [rsp+68h] [rbp+18h] BYREF

  v14 = a1;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(&v14, a2);
  v10 = *v2;
  v11 = *((_QWORD *)v2 + 2);
  v12 = v3;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(&v12, v4);
  v5 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ddcef2f81a2bd508ea885ce0e8373a3e_____lambda_ddcef2f81a2bd508ea885ce0e8373a3e___(
         &v13,
         (__int64)&v10);
  v6 = *v5;
  *v5 = 0LL;
  v7 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v7);
  }
  v8 = SHTaskPoolQueueTask(3LL, 0LL, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v14);
  return v8;
}
