/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a469c2389bb8dc71f832d95fbc03d5e0___::CTaskWrapper__lambda_a469c2389bb8dc71f832d95fbc03d5e0_____lambda_a469c2389bb8dc71f832d95fbc03d5e0___ @ 0x180463CAC
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a469c2389bb8dc71f832d95fbc03d5e0___ @ 0x180465528 (Windows--Internal--ComTaskPool--QueueTask__lambda_a469c2389bb8dc71f832d95fbc03d5e0___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18004B838 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x180186120 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_180186120.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a469c2389bb8dc71f832d95fbc03d5e0___::CTaskWrapper__lambda_a469c2389bb8dc71f832d95fbc03d5e0_____lambda_a469c2389bb8dc71f832d95fbc03d5e0___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  a1[2] = *a2;
  v4 = a2 + 1;
  a1[3] = 0LL;
  if ( a1 + 3 != a2 + 1 )
  {
    a1[3] = *v4;
    *v4 = 0LL;
  }
  v5 = a2[2];
  a1[5] = 0LL;
  a1[6] = 0LL;
  a1[4] = v5;
  a1[5] = a2[3];
  a1[6] = a2[4];
  a2[3] = 0LL;
  a2[4] = 0LL;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 7,
    (__int64)(a2 + 5),
    0LL);
  a1[7] = &TouchKeyboardExperienceTelemetryLogger::OnViewCreated::`vftable';
  *a1 = &off_180744A98;
  return a1;
}
