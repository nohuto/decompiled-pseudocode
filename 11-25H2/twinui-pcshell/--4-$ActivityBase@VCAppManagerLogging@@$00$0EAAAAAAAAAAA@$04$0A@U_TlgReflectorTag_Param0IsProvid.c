/*
 * XREFs of ??4?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801C19F4
 * Callers:
 *     ??4SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801C1938 (--4SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180031054 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003D530 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??4?$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV012@$$QEAV012@@Z @ 0x18012E8F0 (--4-$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activity.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1801C1AD4 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_1801C1AD4.c)
 */

__int64 __fastcall wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // r15
  __int64 v5; // rbp
  _QWORD *v6; // r14
  _QWORD *v7; // rsi
  wil::details::ThreadFailureCallbackHolder *v8; // rcx
  int v9; // eax

  v4 = a2 + 8;
  v5 = a1 + 8;
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
    v5 = *v7 + 8LL;
  *(_QWORD *)(a1 + 272) = v5;
  *(_QWORD *)(a1 + 320) = v5 + 40;
  v8 = (wil::details::ThreadFailureCallbackHolder *)(a1 + 288);
  v9 = *(_DWORD *)(a1 + 312);
  if ( *(_DWORD *)(a2 + 312) )
  {
    if ( !v9 )
      wil::details::ThreadFailureCallbackHolder::StartWatching(v8);
  }
  else if ( v9 )
  {
    wil::details::ThreadFailureCallbackHolder::StopWatching(v8);
  }
  *(_QWORD *)(a2 + 272) = v4;
  if ( *(_DWORD *)(a2 + 312) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 288));
  return a1;
}
