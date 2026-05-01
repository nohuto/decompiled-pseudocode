/*
 * XREFs of ??$CoreInputViewOcclusionChanged@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEAW4CoreInputViewOcclusionKind@2ViewManagement@56@PEBGAEAURect@Foundation@6@AEAU9Foundation@6@AEAU9Foundation@6@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEAW4CoreInputViewOcclusionKind@2ViewManagement@56@$$QEAPEBGAEAURect@Foundation@6@33@Z @ 0x18046A200
 * Callers:
 *     ?NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z @ 0x180096F9C (-NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z.c)
 * Callees:
 *     ?IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z @ 0x180037E34 (-IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z.c)
 *     ?Instance@TouchKeyboardExperienceTelemetryLogger@@KAPEAV1@XZ @ 0x180097540 (-Instance@TouchKeyboardExperienceTelemetryLogger@@KAPEAV1@XZ.c)
 *     ?CoreInputViewOcclusionChanged_@TouchKeyboardExperienceTelemetryLogger@@QEBAXIW4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Windows@@PEBGAEAURect@Foundation@6@22@Z @ 0x18046B5B4 (-CoreInputViewOcclusionChanged_@TouchKeyboardExperienceTelemetryLogger@@QEBAXIW4CoreInputViewOcc.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::CoreInputViewOcclusionChanged<enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType &,enum Windows::UI::ViewManagement::Core::CoreInputViewOcclusionKind &,unsigned short const *,Windows::Foundation::Rect &,Windows::Foundation::Rect &,Windows::Foundation::Rect &>(
        unsigned int *a1,
        unsigned int *a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  char result; // al
  __int64 v11; // rcx

  result = TouchKeyboardExperienceTelemetryLogger::IsEnabled();
  if ( result )
  {
    TouchKeyboardExperienceTelemetryLogger::Instance();
    return TouchKeyboardExperienceTelemetryLogger::CoreInputViewOcclusionChanged_(v11, *a1, *a2, *a3, a4, a5, a6);
  }
  return result;
}
