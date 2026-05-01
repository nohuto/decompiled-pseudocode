/*
 * XREFs of ??$Make@V?$CTaskWrapper@V_lambda_23c98c0562f226dcd27081461ca7c8fb_@@@ComTaskPool@Internal@Windows@@V_lambda_23c98c0562f226dcd27081461ca7c8fb_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_23c98c0562f226dcd27081461ca7c8fb_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_23c98c0562f226dcd27081461ca7c8fb_@@@Z @ 0x1802E2BA0
 * Callers:
 *     ??$QueueTask@V_lambda_23c98c0562f226dcd27081461ca7c8fb_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@$$QEAV_lambda_23c98c0562f226dcd27081461ca7c8fb_@@@Z @ 0x1802E3164 (--$QueueTask@V_lambda_23c98c0562f226dcd27081461ca7c8fb_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800243B0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801362A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_23c98c0562f226dcd27081461ca7c8fb_>,_lambda_23c98c0562f226dcd27081461ca7c8fb_>(
        volatile signed __int32 **a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  volatile signed __int32 *v5; // rbx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v4;
  v5 = (volatile signed __int32 *)v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v4);
    *((_QWORD *)v5 + 2) = *a2;
    *(_QWORD *)v5 = &Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_23c98c0562f226dcd27081461ca7c8fb_>::`vftable';
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(*a1);
    v7 = 0LL;
    *a1 = v5;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v7);
  return a1;
}
