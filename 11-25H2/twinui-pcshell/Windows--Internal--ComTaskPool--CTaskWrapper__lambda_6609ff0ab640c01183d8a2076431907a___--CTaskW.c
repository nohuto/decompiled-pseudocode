/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6609ff0ab640c01183d8a2076431907a___::CTaskWrapper__lambda_6609ff0ab640c01183d8a2076431907a_____lambda_6609ff0ab640c01183d8a2076431907a___ @ 0x180457390
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_6609ff0ab640c01183d8a2076431907a___ @ 0x1802913A0 (Windows--Internal--ComTaskPool--QueueTask__lambda_6609ff0ab640c01183d8a2076431907a___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800243B0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x18018F2F8 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_18018F2F8.c)
 *     ??0ViewOptions@@QEAA@$$QEAU0@@Z @ 0x1801E1E4C (--0ViewOptions@@QEAA@$$QEAU0@@Z.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6609ff0ab640c01183d8a2076431907a___::CTaskWrapper__lambda_6609ff0ab640c01183d8a2076431907a_____lambda_6609ff0ab640c01183d8a2076431907a___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // r8
  _QWORD *v5; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((_QWORD *)a1);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)a2;
  *(_OWORD *)(a1 + 20) = *(_OWORD *)(a2 + 4);
  ViewOptions::ViewOptions(a1 + 40, a2 + 24);
  *(_QWORD *)(a1 + 96) = 0LL;
  v5 = (_QWORD *)(a2 + 80);
  if ( a1 + 96 != a2 + 80 )
  {
    *(_QWORD *)(a1 + 96) = *v5;
    *v5 = 0LL;
  }
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 88);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (_QWORD *)(a1 + 112),
    a2 + 96,
    v4);
  *(_QWORD *)(a1 + 112) = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued::`vftable';
  *(_QWORD *)a1 = &off_18071B780;
  return a1;
}
