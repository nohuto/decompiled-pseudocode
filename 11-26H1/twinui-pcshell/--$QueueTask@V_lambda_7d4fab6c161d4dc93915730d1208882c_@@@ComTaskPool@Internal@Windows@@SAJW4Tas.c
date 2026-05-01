/*
 * XREFs of ??$QueueTask@V_lambda_7d4fab6c161d4dc93915730d1208882c_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@$$QEAV_lambda_7d4fab6c161d4dc93915730d1208882c_@@@Z @ 0x180077EAC
 * Callers:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x180077C80 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ @ 0x1804AF700 (-DismissView@-$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ??$Make@V?$CTaskWrapper@V_lambda_08bdecb53d2454d61d2a3b3bfe9078f8_@@@ComTaskPool@Internal@Windows@@V_lambda_08bdecb53d2454d61d2a3b3bfe9078f8_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_08bdecb53d2454d61d2a3b3bfe9078f8_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_08bdecb53d2454d61d2a3b3bfe9078f8_@@@Z @ 0x18029173C (--$Make@V-$CTaskWrapper@V_lambda_08bdecb53d2454d61d2a3b3bfe9078f8_@@@ComTaskPool@Internal@Window.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 Windows::Internal::ComTaskPool::QueueTask<_lambda_7d4fab6c161d4dc93915730d1208882c_>()
{
  __int64 *v0; // rax
  __int64 v1; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v3; // edi
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v0 = (__int64 *)Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_08bdecb53d2454d61d2a3b3bfe9078f8_>,_lambda_08bdecb53d2454d61d2a3b3bfe9078f8_>(&v5);
  v1 = *v0;
  *v0 = 0LL;
  if ( v5 )
  {
    v5 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release();
  }
  CurrentThreadId = GetCurrentThreadId();
  v3 = SHTaskPoolQueueTask(2LL, 0LL, CurrentThreadId);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return v3;
}
