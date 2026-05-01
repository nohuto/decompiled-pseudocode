/*
 * XREFs of ??$MonitorInfoUsedForShowRequest@_KAEBURect@Foundation@Windows@@AEBW4DEVICE_SCALE_FACTOR@@_KAEBU123@AEBW44@_KAEBU123@AEBW44@AEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_KAEBURect@Foundation@Windows@@AEBW4DEVICE_SCALE_FACTOR@@012012AEA_N3@Z @ 0x1800BA42C
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x18024EFF0 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ?IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z @ 0x1800BA754 (-IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z.c)
 *     ?Instance@TouchKeyboardExperienceTelemetryLogger@@KAPEAV1@XZ @ 0x1800BA814 (-Instance@TouchKeyboardExperienceTelemetryLogger@@KAPEAV1@XZ.c)
 *     ?MonitorInfoUsedForShowRequest_@TouchKeyboardExperienceTelemetryLogger@@QEBAX_KAEBURect@Foundation@Windows@@I01I01I_N2@Z @ 0x180484684 (-MonitorInfoUsedForShowRequest_@TouchKeyboardExperienceTelemetryLogger@@QEBAX_KAEBURect@Foundati.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::MonitorInfoUsedForShowRequest<unsigned __int64,Windows::Foundation::Rect const &,enum DEVICE_SCALE_FACTOR const &,unsigned __int64,Windows::Foundation::Rect const &,enum DEVICE_SCALE_FACTOR const &,unsigned __int64,Windows::Foundation::Rect const &,enum DEVICE_SCALE_FACTOR const &,bool &,bool &>(
        unsigned __int64 *a1,
        const struct Windows::Foundation::Rect *a2,
        unsigned int *a3,
        unsigned __int64 *a4,
        struct Windows::Foundation::Rect *a5,
        unsigned int *a6,
        unsigned __int64 *a7,
        struct Windows::Foundation::Rect *a8,
        unsigned int *a9,
        bool *a10,
        bool *a11)
{
  if ( TouchKeyboardExperienceTelemetryLogger::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2) )
  {
    TouchKeyboardExperienceTelemetryLogger::Instance();
    TouchKeyboardExperienceTelemetryLogger::MonitorInfoUsedForShowRequest_(
      (TouchKeyboardExperienceTelemetryLogger *)*a6,
      *a1,
      a2,
      *a3,
      *a4,
      a5,
      *a6,
      *a7,
      a8,
      *a9,
      *a10,
      *a11);
  }
}
