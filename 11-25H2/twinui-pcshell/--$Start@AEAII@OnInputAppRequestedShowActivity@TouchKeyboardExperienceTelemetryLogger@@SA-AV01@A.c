/*
 * XREFs of ??$Start@AEAII@OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@SA?AV01@AEAI$$QEAI@Z @ 0x18046A938
 * Callers:
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x1800A7510 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     ?StartActivity@OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXII@Z @ 0x18014CE10 (-StartActivity@OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXII@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18014E824 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 */

TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity *__fastcall TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::Start<unsigned int &,unsigned int>(
        TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity *this,
        int *a2,
        int *a3)
{
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)this,
    (__int64)"OnInputAppRequestedShowActivity");
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::StartActivity(this, *a2, *a3);
  return this;
}
