/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_75452c5cb5e77a67412b4cfed81632b0___::CTaskWrapper__lambda_75452c5cb5e77a67412b4cfed81632b0_____lambda_75452c5cb5e77a67412b4cfed81632b0___ @ 0x1804639FC
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_75452c5cb5e77a67412b4cfed81632b0___ @ 0x1804653D0 (Windows--Internal--ComTaskPool--QueueTask__lambda_75452c5cb5e77a67412b4cfed81632b0___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18004B838 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180467DC4 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflect_ea_180467DC4.c)
 *     ?_Reset_move@?$_Func_class@XPEAUHWND__@@@std@@IEAAX$$QEAV12@@Z @ 0x1804744E8 (-_Reset_move@-$_Func_class@XPEAUHWND__@@@std@@IEAAX$$QEAV12@@Z.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_75452c5cb5e77a67412b4cfed81632b0___::CTaskWrapper__lambda_75452c5cb5e77a67412b4cfed81632b0_____lambda_75452c5cb5e77a67412b4cfed81632b0___(
        __int64 a1,
        _QWORD *a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((_QWORD *)a1);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( (_QWORD *)(a1 + 16) != a2 )
  {
    *(_QWORD *)(a1 + 16) = *a2;
    *a2 = 0LL;
  }
  *(_QWORD *)(a1 + 24) = a2[1];
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 32));
  *(_QWORD *)(a1 + 32) = &TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::`vftable';
  *(_QWORD *)(a1 + 416) = 0LL;
  std::_Func_class<void,HWND__ *>::_Reset_move(a1 + 360, a2 + 43);
  *(_QWORD *)a1 = &off_180744BD8;
  return a1;
}
