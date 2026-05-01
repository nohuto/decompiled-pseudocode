/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_be0595b4d9b1029e6cb699cd383e8153___::CTaskWrapper__lambda_be0595b4d9b1029e6cb699cd383e8153_____lambda_be0595b4d9b1029e6cb699cd383e8153___ @ 0x18039E1D8
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_be0595b4d9b1029e6cb699cd383e8153___ @ 0x18039EF3C (Windows--Internal--ComTaskPool--QueueTask__lambda_be0595b4d9b1029e6cb699cd383e8153___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800243B0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1803A41FC (--0-$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_be0595b4d9b1029e6cb699cd383e8153___::CTaskWrapper__lambda_be0595b4d9b1029e6cb699cd383e8153_____lambda_be0595b4d9b1029e6cb699cd383e8153___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((_QWORD *)a1);
  wil::ActivityBase<SearchAppLauncherLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 16));
  *(_QWORD *)(a1 + 16) = &SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate::`vftable';
  *(_BYTE *)(a1 + 344) = *(_BYTE *)(a2 + 328);
  *(_BYTE *)(a1 + 345) = *(_BYTE *)(a2 + 329);
  *(_QWORD *)a1 = &off_18070E7E8;
  return a1;
}
