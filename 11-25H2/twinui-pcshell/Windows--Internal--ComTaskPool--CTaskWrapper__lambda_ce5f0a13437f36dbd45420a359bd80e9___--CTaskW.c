/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ce5f0a13437f36dbd45420a359bd80e9___::CTaskWrapper__lambda_ce5f0a13437f36dbd45420a359bd80e9_____lambda_ce5f0a13437f36dbd45420a359bd80e9___ @ 0x180457658
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_ce5f0a13437f36dbd45420a359bd80e9___ @ 0x1804593CC (Windows--Internal--ComTaskPool--QueueTask__lambda_ce5f0a13437f36dbd45420a359bd80e9___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800243B0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x18018F2F8 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_18018F2F8.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ce5f0a13437f36dbd45420a359bd80e9___::CTaskWrapper__lambda_ce5f0a13437f36dbd45420a359bd80e9_____lambda_ce5f0a13437f36dbd45420a359bd80e9___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rdx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((_QWORD *)a1);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a1 + 16 != a2 )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v4 = (_QWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( a1 + 40 != a2 + 24 )
  {
    *(_QWORD *)(a1 + 40) = *v4;
    *v4 = 0LL;
  }
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 32);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (_QWORD *)(a1 + 56),
    a2 + 40,
    0LL);
  *(_QWORD *)(a1 + 56) = &TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::`vftable';
  *(_QWORD *)a1 = &off_18071B730;
  return a1;
}
