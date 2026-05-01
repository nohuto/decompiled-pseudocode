/*
 * XREFs of ??$WorkAreaChanged_ForceToFitRectInMonitor@PEBGAEAUtagRECT@@AEBU1@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBGAEAUtagRECT@@AEBU1@@Z @ 0x180465BF4
 * Callers:
 *     ?WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z @ 0x18022A380 (-WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z @ 0x1800BA754 (-IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z.c)
 *     ?Instance@TouchKeyboardExperienceTelemetryLogger@@KAPEAV1@XZ @ 0x1800BA814 (-Instance@TouchKeyboardExperienceTelemetryLogger@@KAPEAV1@XZ.c)
 *     ?WorkAreaChanged_ForceToFitRectInMonitor_@TouchKeyboardExperienceTelemetryLogger@@QEBAXPEBGAEBUtagRECT@@1@Z @ 0x18047412C (-WorkAreaChanged_ForceToFitRectInMonitor_@TouchKeyboardExperienceTelemetryLogger@@QEBAXPEBGAEBUt.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::WorkAreaChanged_ForceToFitRectInMonitor<unsigned short const *,tagRECT &,tagRECT const &>(
        const unsigned __int16 **a1,
        const struct tagRECT *a2,
        const struct tagRECT *a3)
{
  TouchKeyboardExperienceTelemetryLogger *v6; // rcx

  if ( TouchKeyboardExperienceTelemetryLogger::IsEnabled() )
  {
    TouchKeyboardExperienceTelemetryLogger::Instance();
    TouchKeyboardExperienceTelemetryLogger::WorkAreaChanged_ForceToFitRectInMonitor_(v6, *a1, a2, a3);
  }
}
