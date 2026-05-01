/*
 * XREFs of ??$Start@$$V@FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@SA?AV01@XZ @ 0x180476278
 * Callers:
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x180146EF0 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundatio.c)
 * Callees:
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18014E824 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 *     ?StartActivity@FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x180476668 (-StartActivity@FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 */

TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation *__fastcall TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation::Start<>(
        TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation *this)
{
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)this,
    (__int64)"FocusedElementViewRectCalculation");
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation::`vftable';
  TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation::StartActivity(this);
  return this;
}
