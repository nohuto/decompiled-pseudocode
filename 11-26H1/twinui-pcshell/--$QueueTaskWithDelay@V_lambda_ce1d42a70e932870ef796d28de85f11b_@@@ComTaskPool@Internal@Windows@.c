/*
 * XREFs of ??$QueueTaskWithDelay@V_lambda_ce1d42a70e932870ef796d28de85f11b_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@KPEAPEAUIUnknown@@$$QEAV_lambda_ce1d42a70e932870ef796d28de85f11b_@@@Z @ 0x18045611C
 * Callers:
 *     ??$RelaunchExperienceWithDelay@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@@YAXPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@P6AXXZ@Z @ 0x1802B6824 (--$RelaunchExperienceWithDelay@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@@YAX.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ??$Make@V?$CTaskWrapper@V_lambda_ce1d42a70e932870ef796d28de85f11b_@@@ComTaskPool@Internal@Windows@@V_lambda_ce1d42a70e932870ef796d28de85f11b_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_ce1d42a70e932870ef796d28de85f11b_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_ce1d42a70e932870ef796d28de85f11b_@@@Z @ 0x180455EBC (--$Make@V-$CTaskWrapper@V_lambda_ce1d42a70e932870ef796d28de85f11b_@@@ComTaskPool@Internal@Window.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay<_lambda_ce1d42a70e932870ef796d28de85f11b_>(
        __int64 a1,
        __int64 a2,
        volatile signed __int32 *a3,
        volatile signed __int32 *a4)
{
  volatile signed __int32 **v4; // rax
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v8; // edi
  volatile signed __int32 *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  v4 = Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_ce1d42a70e932870ef796d28de85f11b_>,_lambda_ce1d42a70e932870ef796d28de85f11b_>(
         &v10,
         a4);
  v5 = *v4;
  *v4 = 0LL;
  v6 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v6);
  }
  CurrentThreadId = GetCurrentThreadId();
  v8 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
  if ( v5 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 16LL))(v5);
  return v8;
}
