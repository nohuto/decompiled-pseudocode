/*
 * XREFs of ??$FailedToLaunchGamingAppForContract@PEBGAEAJ@GamingPostureCoreTelemetryProvider@@SAX$$QEAPEBGAEAJ@Z @ 0x18032913C
 * Callers:
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync$_ResumeCoro$1_::_1_::catch$42 @ 0x1806BB786 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806BB786.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800025F0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ?Provider@GamingPostureCoreTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18032EF2C (-Provider@GamingPostureCoreTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall GamingPostureCoreTelemetryProvider::FailedToLaunchGamingAppForContract<unsigned short const *,long &>(
        _QWORD *a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  _QWORD v6[3]; // [rsp+40h] [rbp-18h] BYREF

  v2 = GamingPostureCoreTelemetryProvider::Provider();
  if ( *(_DWORD *)v2 > 5u )
  {
    LOBYTE(v2) = tlgKeywordOn((__int64)v2, 0x400000000000LL);
    if ( (_BYTE)v2 )
    {
      v6[0] = *a1;
      LOBYTE(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                     v4,
                     (__int64)&unk_1807BC508,
                     v3,
                     v4,
                     v6);
    }
  }
  return (char)v2;
}
