/*
 * XREFs of ??4?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801DD220
 * Callers:
 *     ??4OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAAEAV01@$$QEAV01@@Z @ 0x1804788FC (--4OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAAEAV01@$$QEAV01@@.c)
 *     ??4OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAAEAV01@$$QEAV01@@Z @ 0x18047897C (--4OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAAEAV01@$$QEAV01@@.c)
 * Callees:
 *     ?reset@?$shared_object@V?$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180040D20 (-reset@-$shared_object@V-$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgR_ea_180040D20.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180045690 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180068EA8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??4?$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV012@$$QEAV012@@Z @ 0x180075F78 (--4-$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activity.c)
 */

__int64 __fastcall wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::operator=(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rbp
  __int64 v5; // r15
  _QWORD *v6; // r14
  _QWORD *v7; // rsi
  wil::details::ThreadFailureCallbackHolder *v8; // rcx

  v4 = a1 + 8;
  v5 = a2 + 8;
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LauncherTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>::operator=(
    a1 + 8,
    a2 + 8);
  v6 = (_QWORD *)(a2 + 280);
  v7 = (_QWORD *)(a1 + 280);
  if ( a1 + 280 != a2 + 280 )
  {
    wil::details::shared_object<wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset((volatile signed __int32 **)(a1 + 280));
    *v7 = *v6;
    *v6 = 0LL;
  }
  if ( *v7 )
    v4 = *v7 + 8LL;
  *(_QWORD *)(a1 + 272) = v4;
  *(_QWORD *)(a1 + 320) = v4 + 40;
  v8 = (wil::details::ThreadFailureCallbackHolder *)(a1 + 288);
  if ( *(_DWORD *)(a2 + 312) )
  {
    if ( !*(_DWORD *)(a1 + 312) )
      wil::details::ThreadFailureCallbackHolder::StartWatching(v8);
  }
  else if ( *(_DWORD *)(a1 + 312) )
  {
    wil::details::ThreadFailureCallbackHolder::StopWatching(v8);
  }
  *(_QWORD *)(a2 + 272) = v5;
  if ( *(_DWORD *)(a2 + 312) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 288));
  return a1;
}
