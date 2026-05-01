/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_3b7c4f2fe0a8fb0488a63b3b1e1281d6___ @ 0x18047A444
 * Callers:
 *     ?SetTransparent@AccessibilityExperienceManager@@UEAAJH@Z @ 0x18047CEC0 (-SetTransparent@AccessibilityExperienceManager@@UEAAJH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180069F2C (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801362A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ?InternalAddRef@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ @ 0x1801D2050 (-InternalAddRef@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_40e4bef0421a20eaf8768beed4f575db_____lambda_40e4bef0421a20eaf8768beed4f575db___ @ 0x18047A004 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_40e4bef0421a2.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_3b7c4f2fe0a8fb0488a63b3b1e1281d6___(
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
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11[3]; // [rsp+40h] [rbp-18h] BYREF
  volatile signed __int32 *v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF

  v13 = a1;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(&v13, a2);
  v10 = *v2;
  v11[0] = v3;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(v11, v4);
  v5 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_40e4bef0421a20eaf8768beed4f575db_____lambda_40e4bef0421a20eaf8768beed4f575db___(
         &v12,
         &v10);
  v6 = *v5;
  *v5 = 0LL;
  v7 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v7);
  }
  v8 = SHTaskPoolQueueTask(3LL, 0LL, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(v11);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v13);
  return v8;
}
