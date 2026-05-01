/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ecf6d3fa74ef9006e73e169fd34c7f4f___::CTaskWrapper__lambda_ecf6d3fa74ef9006e73e169fd34c7f4f_____lambda_ecf6d3fa74ef9006e73e169fd34c7f4f___ @ 0x1804576F0
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_ecf6d3fa74ef9006e73e169fd34c7f4f___ @ 0x1802932E4 (Windows--Internal--ComTaskPool--QueueTask__lambda_ecf6d3fa74ef9006e73e169fd34c7f4f___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800243B0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x18018F2F8 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_18018F2F8.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ecf6d3fa74ef9006e73e169fd34c7f4f___::CTaskWrapper__lambda_ecf6d3fa74ef9006e73e169fd34c7f4f_____lambda_ecf6d3fa74ef9006e73e169fd34c7f4f___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // r8
  _QWORD *v5; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((_QWORD *)a1);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)a2;
  v5 = (_QWORD *)(a2 + 8);
  *(_BYTE *)(a1 + 20) = *(_BYTE *)(a2 + 4);
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( a1 + 24 != a2 + 8 )
  {
    *(_QWORD *)(a1 + 24) = *v5;
    *v5 = 0LL;
  }
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (_QWORD *)(a1 + 40),
    a2 + 24,
    v4);
  *(_QWORD *)(a1 + 40) = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued::`vftable';
  *(_QWORD *)a1 = &off_18071B6A0;
  return a1;
}
