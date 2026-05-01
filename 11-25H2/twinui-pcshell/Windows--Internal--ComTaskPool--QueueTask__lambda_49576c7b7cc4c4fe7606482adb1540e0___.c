/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_49576c7b7cc4c4fe7606482adb1540e0___ @ 0x1805BC548
 * Callers:
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_e444c801a41511fb3819c6a1e051bb24___ @ 0x1805BCCF0 (_anonymous_namespace_--RunSynchronousInSTA__lambda_e444c801a41511fb3819c6a1e051bb24___.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801362A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_49576c7b7cc4c4fe7606482adb1540e0_____lambda_49576c7b7cc4c4fe7606482adb1540e0___ @ 0x1805BBD88 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_49576c7b7cc4c.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_49576c7b7cc4c4fe7606482adb1540e0___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _OWORD *a4)
{
  volatile signed __int32 **v5; // rax
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rcx
  unsigned int v8; // edi
  volatile signed __int32 *v10; // [rsp+30h] [rbp-18h] BYREF

  v5 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_49576c7b7cc4c4fe7606482adb1540e0_____lambda_49576c7b7cc4c4fe7606482adb1540e0___(
         &v10,
         a4);
  v6 = *v5;
  *v5 = 0LL;
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v7);
  }
  v8 = SHTaskPoolQueueTask(1LL, 32LL, a3);
  if ( v6 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
  return v8;
}
