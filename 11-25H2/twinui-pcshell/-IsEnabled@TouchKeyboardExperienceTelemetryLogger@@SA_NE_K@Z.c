/*
 * XREFs of ?IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z @ 0x180037E34
 * Callers:
 *     ?OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlPositionChangedEventArgs@45678@@Z @ 0x1800946D0 (-OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180094F90 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 *     ?SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicationFrame@@PEBUtagRECT@@@Z @ 0x180095B48 (-SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicatio.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x1800961C8 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 *     ?ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z @ 0x180096930 (-ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z @ 0x180294234 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z.c)
 *     ??$WorkAreaChanged_ForceToFitRectInMonitor@PEBGAEAUtagRECT@@AEBU1@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBGAEAUtagRECT@@AEBU1@@Z @ 0x1804599DC (--$WorkAreaChanged_ForceToFitRectInMonitor@PEBGAEAUtagRECT@@AEBU1@@TouchKeyboardExperienceTeleme.c)
 *     ??$CoreInputViewOcclusionChanged@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEAW4CoreInputViewOcclusionKind@2ViewManagement@56@PEBGAEAURect@Foundation@6@AEAU9Foundation@6@AEAU9Foundation@6@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEAW4CoreInputViewOcclusionKind@2ViewManagement@56@$$QEAPEBGAEAURect@Foundation@6@33@Z @ 0x18046A200 (--$CoreInputViewOcclusionChanged@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEAW4C.c)
 *     ??$HandleDragEnded@AEAIAEAURect@Foundation@Windows@@AEAU123@AEAU123@II@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEAURect@Foundation@Windows@@11$$QEAI2@Z @ 0x180472EE4 (--$HandleDragEnded@AEAIAEAURect@Foundation@Windows@@AEAU123@AEAU123@II@TouchKeyboardExperienceTe.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAA@XZ @ 0x180097DD0 (--1Completer@-$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1802D2608 (atexit.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::IsEnabled()
{
  char v0; // bl
  _DWORD *v1; // rcx
  union _RTL_RUN_ONCE *v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  WINBOOL v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v6; // [rsp+48h] [rbp+10h] BYREF

  v0 = 0;
  v6 = 0LL;
  v5 = 0;
  if ( __std_init_once_begin_initialize(
         &`TouchKeyboardExperienceTelemetryLogger::Instance'::`2'::wrapper,
         0,
         &v5,
         (LPVOID *)&v6)
    && v5 )
  {
    v3 = &`TouchKeyboardExperienceTelemetryLogger::Instance'::`2'::wrapper;
    v6 = &qword_18089C658;
    qword_18089C660 = 0LL;
    qword_18089C658 = (__int64)&IamTraceLogging::`vftable';
    byte_18089C668 = 0;
    dword_18089C66C = 0;
    atexit(_lambda_c916e9e9cdf81665e4682fd57ca742e1_::_lambda_invoker_cdecl_);
    v4 = 0;
    wil::details::static_lazy<TouchKeyboardExperienceTelemetryLogger>::Completer::~Completer(&v3);
  }
  v1 = (_DWORD *)v6[1];
  if ( v1 && *v1 )
    return 1;
  return v0;
}
