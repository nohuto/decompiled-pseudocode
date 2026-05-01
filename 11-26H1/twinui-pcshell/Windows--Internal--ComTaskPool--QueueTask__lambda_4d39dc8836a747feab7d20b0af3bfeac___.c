/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_4d39dc8836a747feab7d20b0af3bfeac___ @ 0x18012B968
 * Callers:
 *     CIAMGlobals::QueueViewManagementTask__lambda_17fa972c2310d7312f81a78f2bb80b5c___ @ 0x18012A688 (CIAMGlobals--QueueViewManagementTask__lambda_17fa972c2310d7312f81a78f2bb80b5c___.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4d39dc8836a747feab7d20b0af3bfeac_____lambda_4d39dc8836a747feab7d20b0af3bfeac___ @ 0x1802AAF8C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4d39dc8836a74.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_4d39dc8836a747feab7d20b0af3bfeac___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 *v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // edi
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v5 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4d39dc8836a747feab7d20b0af3bfeac_____lambda_4d39dc8836a747feab7d20b0af3bfeac___(
                    v9,
                    a4);
  v6 = *v5;
  *v5 = 0LL;
  if ( v9[0] )
  {
    v9[0] = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release();
  }
  v7 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v7;
}
