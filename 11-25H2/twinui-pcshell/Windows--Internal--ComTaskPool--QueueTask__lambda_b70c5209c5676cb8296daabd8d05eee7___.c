/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_b70c5209c5676cb8296daabd8d05eee7___ @ 0x1800B0E58
 * Callers:
 *     ?ProcessCommand@BroadcastDVRComponent@@UEAAJW4_BCASTDVR_COMMAND@@@Z @ 0x1800B0EE0 (-ProcessCommand@BroadcastDVRComponent@@UEAAJW4_BCASTDVR_COMMAND@@@Z.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b70c5209c5676cb8296daabd8d05eee7_____lambda_b70c5209c5676cb8296daabd8d05eee7___ @ 0x1800B0DC8 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b70c5209c5676.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801362A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_b70c5209c5676cb8296daabd8d05eee7___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _DWORD *a4)
{
  __int64 *v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // edi
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v5 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b70c5209c5676cb8296daabd8d05eee7_____lambda_b70c5209c5676cb8296daabd8d05eee7___(
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
