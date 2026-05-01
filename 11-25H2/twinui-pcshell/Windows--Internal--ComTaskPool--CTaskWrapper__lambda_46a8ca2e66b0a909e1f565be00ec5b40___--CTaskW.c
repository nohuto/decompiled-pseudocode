/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_46a8ca2e66b0a909e1f565be00ec5b40___::CTaskWrapper__lambda_46a8ca2e66b0a909e1f565be00ec5b40_____lambda_46a8ca2e66b0a909e1f565be00ec5b40___ @ 0x180457264
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_46a8ca2e66b0a909e1f565be00ec5b40___ @ 0x1804590B8 (Windows--Internal--ComTaskPool--QueueTask__lambda_46a8ca2e66b0a909e1f565be00ec5b40___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800243B0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x18018F2F8 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_18018F2F8.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_46a8ca2e66b0a909e1f565be00ec5b40___::CTaskWrapper__lambda_46a8ca2e66b0a909e1f565be00ec5b40_____lambda_46a8ca2e66b0a909e1f565be00ec5b40___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rdx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  v4 = a2 + 1;
  a1[3] = 0LL;
  if ( a1 + 3 != a2 + 1 )
  {
    a1[3] = *v4;
    *v4 = 0LL;
  }
  a1[4] = a2[2];
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 5,
    (__int64)(a2 + 3),
    0LL);
  a1[5] = &TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::`vftable';
  *a1 = &off_18071B758;
  return a1;
}
