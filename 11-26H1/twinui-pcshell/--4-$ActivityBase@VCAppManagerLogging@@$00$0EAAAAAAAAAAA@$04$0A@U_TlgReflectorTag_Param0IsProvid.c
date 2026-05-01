/*
 * XREFs of ??4?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180076500
 * Callers:
 *     ??4SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180077654 (--4SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180045690 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180068EA8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??4?$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV012@$$QEAV012@@Z @ 0x180075F78 (--4-$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activity.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800765E4 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_1800765E4.c)
 */

__int64 __fastcall wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(
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
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 280);
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
