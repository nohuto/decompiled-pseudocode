/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_db605a5d8bd7eecf6dbd275f52e09d94___::CTaskWrapper__lambda_db605a5d8bd7eecf6dbd275f52e09d94_____lambda_db605a5d8bd7eecf6dbd275f52e09d94___ @ 0x1803A6B04
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_db605a5d8bd7eecf6dbd275f52e09d94___ @ 0x1803A7974 (Windows--Internal--ComTaskPool--QueueTask__lambda_db605a5d8bd7eecf6dbd275f52e09d94___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18004B838 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1803AD258 (--0-$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_db605a5d8bd7eecf6dbd275f52e09d94___::CTaskWrapper__lambda_db605a5d8bd7eecf6dbd275f52e09d94_____lambda_db605a5d8bd7eecf6dbd275f52e09d94___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((_QWORD *)a1);
  wil::ActivityBase<SearchAppLauncherLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 16));
  *(_QWORD *)(a1 + 16) = &SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate::`vftable';
  *(_BYTE *)(a1 + 344) = *(_BYTE *)(a2 + 328);
  *(_BYTE *)(a1 + 345) = *(_BYTE *)(a2 + 329);
  *(_QWORD *)a1 = &off_180737A10;
  return a1;
}
