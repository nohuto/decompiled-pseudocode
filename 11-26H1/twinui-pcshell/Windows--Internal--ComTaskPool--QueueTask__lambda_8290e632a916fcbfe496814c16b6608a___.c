/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_8290e632a916fcbfe496814c16b6608a___ @ 0x1802DC824
 * Callers:
 *     ?OnTitleBarColorUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x180061AB0 (-OnTitleBarColorUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8290e632a916fcbfe496814c16b6608a_____lambda_8290e632a916fcbfe496814c16b6608a___ @ 0x1802DC17C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8290e632a916f.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_8290e632a916fcbfe496814c16b6608a___(
        __int64 a1,
        volatile signed __int32 *a2)
{
  volatile signed __int32 **v2; // rax
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi
  volatile signed __int32 *v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8290e632a916fcbfe496814c16b6608a_____lambda_8290e632a916fcbfe496814c16b6608a___(
         &v8,
         a2);
  v3 = *v2;
  *v2 = 0LL;
  v4 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v4);
  }
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
  if ( v3 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 16LL))(v3);
  return v6;
}
