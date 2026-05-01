/*
 * XREFs of ?Instance@TouchKeyboardExperienceTelemetryLogger@@KAPEAV1@XZ @ 0x1800BA814
 * Callers:
 *     ?OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlPositionChangedEventArgs@45678@@Z @ 0x1800BA190 (-OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 *     ??$MonitorInfoUsedForShowRequest@_KAEBURect@Foundation@Windows@@AEBW4DEVICE_SCALE_FACTOR@@_KAEBU123@AEBW44@_KAEBU123@AEBW44@AEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_KAEBURect@Foundation@Windows@@AEBW4DEVICE_SCALE_FACTOR@@012012AEA_N3@Z @ 0x1800BA42C (--$MonitorInfoUsedForShowRequest@_KAEBURect@Foundation@Windows@@AEBW4DEVICE_SCALE_FACTOR@@_KAEBU.c)
 *     ??$MonitorInfoUsedForCreatingOptions@_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@_KAEAU123@AEAW44@_KAEAU123@AEAW44@AEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@012012AEA_N3@Z @ 0x1800BA684 (--$MonitorInfoUsedForCreatingOptions@_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@_K.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x1800BAD08 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 *     ?ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z @ 0x1800BB438 (-ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z.c)
 *     ?SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicationFrame@@PEBUtagRECT@@@Z @ 0x1800BF00C (-SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicatio.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z @ 0x18028B4FC (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z.c)
 *     ??$WorkAreaChanged_ForceToFitRectInMonitor@PEBGAEAUtagRECT@@AEBU1@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBGAEAUtagRECT@@AEBU1@@Z @ 0x180465BF4 (--$WorkAreaChanged_ForceToFitRectInMonitor@PEBGAEAUtagRECT@@AEBU1@@TouchKeyboardExperienceTeleme.c)
 *     ??$CoreInputViewOcclusionChanged@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEAW4CoreInputViewOcclusionKind@2ViewManagement@56@PEBGAEAURect@Foundation@6@AEAU9Foundation@6@AEAU9Foundation@6@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEAW4CoreInputViewOcclusionKind@2ViewManagement@56@$$QEAPEBGAEAURect@Foundation@6@33@Z @ 0x180476B84 (--$CoreInputViewOcclusionChanged@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEAW4C.c)
 *     ??$HandleDragEnded@AEAIAEAURect@Foundation@Windows@@AEAU123@AEBU123@II@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEAURect@Foundation@Windows@@1AEBU123@$$QEAI3@Z @ 0x180481C58 (--$HandleDragEnded@AEAIAEAURect@Foundation@Windows@@AEAU123@AEBU123@II@TouchKeyboardExperienceTe.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAA@XZ @ 0x180140C84 (--1Completer@-$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1802C9288 (atexit.c)
 */

struct TouchKeyboardExperienceTelemetryLogger *TouchKeyboardExperienceTelemetryLogger::Instance(void)
{
  union _RTL_RUN_ONCE *v1; // [rsp+20h] [rbp-18h] BYREF
  int v2; // [rsp+28h] [rbp-10h]
  WINBOOL v3; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0LL;
  v3 = 0;
  if ( __std_init_once_begin_initialize(
         &`TouchKeyboardExperienceTelemetryLogger::Instance'::`2'::wrapper,
         0,
         &v3,
         (LPVOID *)&v4)
    && v3 )
  {
    v1 = &`TouchKeyboardExperienceTelemetryLogger::Instance'::`2'::wrapper;
    v4 = &qword_1808DCCF8;
    qword_1808DCD00 = 0LL;
    qword_1808DCCF8 = (__int64)&IamTraceLogging::`vftable';
    byte_1808DCD08 = 0;
    dword_1808DCD0C = 0;
    atexit(_lambda_c916e9e9cdf81665e4682fd57ca742e1_::_lambda_invoker_cdecl_);
    v2 = 0;
    wil::details::static_lazy<TouchKeyboardExperienceTelemetryLogger>::Completer::~Completer(&v1);
  }
  return (struct TouchKeyboardExperienceTelemetryLogger *)v4;
}
