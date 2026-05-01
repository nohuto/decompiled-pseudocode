/*
 * XREFs of ??$HandledUnexpectedException@AEAY0DK@$$CBGJ@GamingPostureCoreTelemetryProvider@@SAXAEAY0DK@$$CBG$$QEAJ@Z @ 0x180325C00
 * Callers:
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::perform_delayed_initialization_::_1_::catch$16 @ 0x1806E2C56 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E2C56.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800026A8 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?Provider@GamingPostureCoreTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18032D19C (-Provider@GamingPostureCoreTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char GamingPostureCoreTelemetryProvider::HandledUnexpectedException<unsigned short const (&)[58],long>()
{
  const struct _tlgProvider_t *v0; // rax
  __int64 v1; // r8
  __int64 v2; // r9
  const wchar_t *v4; // [rsp+68h] [rbp+20h] BYREF

  v0 = GamingPostureCoreTelemetryProvider::Provider();
  if ( *(_DWORD *)v0 > 5u )
  {
    LOBYTE(v0) = tlgKeywordOn((__int64)v0, 0x400000000000LL);
    if ( (_BYTE)v0 )
    {
      v4 = L"GamingPostureController::perform_delayed_initialization()";
      LOBYTE(v0) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                     v2,
                     (__int64)&unk_1807EA1AC,
                     v1,
                     v2,
                     &v4);
    }
  }
  return (char)v0;
}
