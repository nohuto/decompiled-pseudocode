/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_420994182feb68798a6ba33cec143f0f___ @ 0x180425218
 * Callers:
 *     ?OnWindowWatcherStopped@UwpWindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180426720 (-OnWindowWatcherStopped@UwpWindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@Applica.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801362A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_420994182feb68798a6ba33cec143f0f____long_&__lambda_420994182feb68798a6ba33cec143f0f___ @ 0x1804249AC (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_4209941.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_420994182feb68798a6ba33cec143f0f___(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3)
{
  unsigned int v5; // edi
  volatile signed __int32 **v6; // rax
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rcx
  int v9; // edi
  int v11; // [rsp+30h] [rbp-18h] BYREF
  volatile signed __int32 *v12; // [rsp+38h] [rbp-10h] BYREF
  int v13; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v14; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0;
  v11 = 0;
  if ( CoGetApartmentType((APTTYPE *)&v13, (APTTYPEQUALIFIER *)&v11) < 0 || !v13 || v13 == 3 )
    v5 = 0;
  else
    v5 = 4;
  v14 = 0;
  v6 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_420994182feb68798a6ba33cec143f0f____long____lambda_420994182feb68798a6ba33cec143f0f___(
         &v12,
         (__int64)&v14,
         a3);
  v7 = *v6;
  *v6 = 0LL;
  v8 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v8);
  }
  v9 = SHTaskPoolQueueTask(v5, 32LL, a2);
  if ( v7 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v9 >= 0 )
    return v14;
  return (unsigned int)v9;
}
