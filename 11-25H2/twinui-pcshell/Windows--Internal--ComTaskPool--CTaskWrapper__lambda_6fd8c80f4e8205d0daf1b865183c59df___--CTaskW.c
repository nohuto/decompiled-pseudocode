/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6fd8c80f4e8205d0daf1b865183c59df___::CTaskWrapper__lambda_6fd8c80f4e8205d0daf1b865183c59df_____lambda_6fd8c80f4e8205d0daf1b865183c59df___ @ 0x180457424
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_6fd8c80f4e8205d0daf1b865183c59df___ @ 0x18045915C (Windows--Internal--ComTaskPool--QueueTask__lambda_6fd8c80f4e8205d0daf1b865183c59df___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800243B0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18045B934 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflect_ea_18045B934.c)
 *     ?_Reset_move@?$_Func_class@XPEAUHWND__@@@std@@IEAAX$$QEAV12@@Z @ 0x1804684E0 (-_Reset_move@-$_Func_class@XPEAUHWND__@@@std@@IEAAX$$QEAV12@@Z.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6fd8c80f4e8205d0daf1b865183c59df___::CTaskWrapper__lambda_6fd8c80f4e8205d0daf1b865183c59df_____lambda_6fd8c80f4e8205d0daf1b865183c59df___(
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
  *(_QWORD *)a1 = &off_18071B628;
  return a1;
}
