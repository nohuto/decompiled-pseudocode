/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5c8612707d1ce1f8a03bb177e1540ce1___::CTaskWrapper__lambda_5c8612707d1ce1f8a03bb177e1540ce1_____lambda_5c8612707d1ce1f8a03bb177e1540ce1___ @ 0x180463960
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5c8612707d1ce1f8a03bb177e1540ce1___ @ 0x180288F50 (Windows--Internal--ComTaskPool--QueueTask__lambda_5c8612707d1ce1f8a03bb177e1540ce1___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18004B838 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x180186120 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_180186120.c)
 *     ??0ViewOptions@@QEAA@$$QEAU0@@Z @ 0x1801D5F58 (--0ViewOptions@@QEAA@$$QEAU0@@Z.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5c8612707d1ce1f8a03bb177e1540ce1___::CTaskWrapper__lambda_5c8612707d1ce1f8a03bb177e1540ce1_____lambda_5c8612707d1ce1f8a03bb177e1540ce1___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // r8
  _QWORD *v5; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((_QWORD *)a1);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)a2;
  *(_OWORD *)(a1 + 20) = *(_OWORD *)(a2 + 4);
  ViewOptions::ViewOptions(a1 + 40, a2 + 24);
  v5 = (_QWORD *)(a2 + 80);
  *(_QWORD *)(a1 + 96) = 0LL;
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
  *(_QWORD *)a1 = &off_180744B38;
  return a1;
}
