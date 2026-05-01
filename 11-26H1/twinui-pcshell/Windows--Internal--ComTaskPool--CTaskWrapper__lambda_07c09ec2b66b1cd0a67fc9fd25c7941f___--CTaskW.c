/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_07c09ec2b66b1cd0a67fc9fd25c7941f___::CTaskWrapper__lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_____lambda_07c09ec2b66b1cd0a67fc9fd25c7941f___ @ 0x180463740
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_07c09ec2b66b1cd0a67fc9fd25c7941f___ @ 0x1804656F4 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_07c09ec2b66b1cd0a67fc9fd25c7941f___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18004B838 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x180186120 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_180186120.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_07c09ec2b66b1cd0a67fc9fd25c7941f___::CTaskWrapper__lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_____lambda_07c09ec2b66b1cd0a67fc9fd25c7941f___(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // r8

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  a1[3] = a2[1];
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 4,
    (__int64)(a2 + 2),
    v4);
  a1[4] = &TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::`vftable';
  *a1 = &off_180744BB0;
  return a1;
}
