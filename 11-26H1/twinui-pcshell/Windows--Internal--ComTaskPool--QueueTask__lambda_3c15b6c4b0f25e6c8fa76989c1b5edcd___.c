/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___ @ 0x18029B404
 * Callers:
 *     ?ReloadKnownGameList@IsGameManager@@UEAAXXZ @ 0x180126050 (-ReloadKnownGameList@IsGameManager@@UEAAXXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd_____lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___ @ 0x18029B498 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3c15b6c4b0f25.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 Windows::Internal::ComTaskPool::QueueTask__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___()
{
  __int64 *v0; // rax
  __int64 v1; // rbx
  volatile signed __int32 *v2; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v4; // edi
  volatile signed __int32 *v6; // [rsp+50h] [rbp+18h] BYREF

  v0 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd_____lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___(&v6);
  v1 = *v0;
  *v0 = 0LL;
  v2 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v2);
  }
  CurrentThreadId = GetCurrentThreadId();
  v4 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return v4;
}
