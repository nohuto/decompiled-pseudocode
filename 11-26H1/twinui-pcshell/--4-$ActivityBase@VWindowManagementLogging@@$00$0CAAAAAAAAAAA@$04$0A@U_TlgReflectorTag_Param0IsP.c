/*
 * XREFs of ??4?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1804DAE1C
 * Callers:
 *     ??4DragSwitchItem@MultitaskingViewTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1804DAEE8 (--4DragSwitchItem@MultitaskingViewTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1805AE764 (--4WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180068EA8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??4?$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV012@$$QEAV012@@Z @ 0x180075F78 (--4-$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activity.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18007D1C8 (-reset@-$shared_object@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag__ea_18007D1C8.c)
 *     ?SetWatching@ThreadFailureCallbackHolder@details@wil@@QEAAX_N@Z @ 0x1801DB9F4 (-SetWatching@ThreadFailureCallbackHolder@details@wil@@QEAAX_N@Z.c)
 */

_QWORD *__fastcall wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // r15
  __int64 v5; // rsi
  _QWORD *v6; // r14
  _QWORD *v7; // rdi

  v4 = a2 + 8;
  v5 = (__int64)(a1 + 1);
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LauncherTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>::operator=(
    (__int64)(a1 + 1),
    a2 + 8);
  v6 = (_QWORD *)(a2 + 280);
  v7 = a1 + 35;
  if ( a1 + 35 != (_QWORD *)(a2 + 280) )
  {
    wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset((volatile signed __int32 **)a1 + 35);
    *v7 = *v6;
    *v6 = 0LL;
  }
  if ( *v7 )
    v5 = *v7 + 8LL;
  a1[34] = v5;
  a1[40] = v5 + 40;
  wil::details::ThreadFailureCallbackHolder::SetWatching(
    (wil::details::ThreadFailureCallbackHolder *)(a1 + 36),
    *(_DWORD *)(a2 + 312) != 0);
  *(_QWORD *)(a2 + 272) = v4;
  if ( *(_DWORD *)(a2 + 312) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 288));
  return a1;
}
