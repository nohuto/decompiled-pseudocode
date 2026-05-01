/*
 * XREFs of ??$Start@$$V@OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@SA?AV01@XZ @ 0x180477540
 * Callers:
 *     ?ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason@2@@Z @ 0x1800B287C (-ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason.c)
 *     ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z @ 0x18047C400 (-OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180016154 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 *     ?StartActivity@OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x18047E498 (-StartActivity@OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 */

TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity *__fastcall TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity::Start<>(
        TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity *this)
{
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)this,
    (__int64)"OnShellRequestedShowActivity");
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity::StartActivity(this);
  return this;
}
