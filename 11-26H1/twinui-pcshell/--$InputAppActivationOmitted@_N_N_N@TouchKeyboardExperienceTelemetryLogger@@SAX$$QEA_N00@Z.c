/*
 * XREFs of ??$InputAppActivationOmitted@_N_N_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_N00@Z @ 0x180464AA0
 * Callers:
 *     ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18024A340 (-EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@33AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180005EA8 (--$Write@U-$_tlgWrapperByVal@$00@@U1@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BD788 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char TouchKeyboardExperienceTelemetryLogger::InputAppActivationOmitted<bool,bool,bool>()
{
  const struct _tlgProvider_t *v0; // rax
  __int64 v1; // r9

  v0 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v0 > 5u )
  {
    LOBYTE(v0) = tlgKeywordOn((__int64)v0, 0x400000000000LL);
    if ( (_BYTE)v0 )
      LOBYTE(v0) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
                     v1,
                     (__int64)&unk_180807D68);
  }
  return (char)v0;
}
