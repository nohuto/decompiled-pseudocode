/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3f93e84ee3927ec557523765ee2fe070___::CTaskWrapper__lambda_3f93e84ee3927ec557523765ee2fe070_____lambda_3f93e84ee3927ec557523765ee2fe070___ @ 0x18046384C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3f93e84ee3927ec557523765ee2fe070___ @ 0x180465324 (Windows--Internal--ComTaskPool--QueueTask__lambda_3f93e84ee3927ec557523765ee2fe070___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18004B838 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x180186120 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_180186120.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3f93e84ee3927ec557523765ee2fe070___::CTaskWrapper__lambda_3f93e84ee3927ec557523765ee2fe070_____lambda_3f93e84ee3927ec557523765ee2fe070___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // r8
  _QWORD *v5; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((_QWORD *)a1);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)a2;
  v5 = (_QWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 20) = *(_OWORD *)(a2 + 4);
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( a1 + 40 != a2 + 24 )
  {
    *(_QWORD *)(a1 + 40) = *v5;
    *v5 = 0LL;
  }
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 32);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (_QWORD *)(a1 + 56),
    a2 + 40,
    v4);
  *(_QWORD *)(a1 + 56) = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity_Queued::`vftable';
  *(_QWORD *)a1 = &off_180744B10;
  return a1;
}
