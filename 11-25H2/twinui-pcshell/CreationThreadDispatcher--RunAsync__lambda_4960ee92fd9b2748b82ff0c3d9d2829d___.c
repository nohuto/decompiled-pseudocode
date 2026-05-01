/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_4960ee92fd9b2748b82ff0c3d9d2829d___ @ 0x180392B00
 * Callers:
 *     _lambda_3edbee6515dd1873ef8f9cffc946e25b_::operator() @ 0x180392EA0 (_lambda_3edbee6515dd1873ef8f9cffc946e25b_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180069F2C (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801362A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ?InternalAddRef@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ @ 0x1801D2050 (-InternalAddRef@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b22410baa03c4a0e5a7ed488804128ed_____lambda_b22410baa03c4a0e5a7ed488804128ed___ @ 0x1803929C4 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b22410baa03c4.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_4960ee92fd9b2748b82ff0c3d9d2829d___(
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
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11[2]; // [rsp+38h] [rbp-10h] BYREF
  volatile signed __int32 *v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = a1;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(&v13, a2);
  v10 = v2;
  v11[0] = v3;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(v11, v4);
  v5 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b22410baa03c4a0e5a7ed488804128ed_____lambda_b22410baa03c4a0e5a7ed488804128ed___(
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
