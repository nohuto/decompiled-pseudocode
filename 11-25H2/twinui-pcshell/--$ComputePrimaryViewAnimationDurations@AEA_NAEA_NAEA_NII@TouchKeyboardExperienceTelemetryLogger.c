/*
 * XREFs of ??$ComputePrimaryViewAnimationDurations@AEA_NAEA_NAEA_NII@TouchKeyboardExperienceTelemetryLogger@@SAXAEA_N00$$QEAI1@Z @ 0x1802C057C
 * Callers:
 *     ?ComputePrimaryViewAnimationDurations@AnimationCoordinationHelper@KeyboardHosting@@SA?AV?$tuple@II@std@@_N0AEBUtagRECT@@@Z @ 0x180239980 (-ComputePrimaryViewAnimationDurations@AnimationCoordinationHelper@KeyboardHosting@@SA-AV-$tuple@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@33AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180008D34 (--$Write@U-$_tlgWrapperByVal@$00@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$07@@@-$.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180038344 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 */

char TouchKeyboardExperienceTelemetryLogger::ComputePrimaryViewAnimationDurations<bool &,bool &,bool &,unsigned int,unsigned int>()
{
  const struct _tlgProvider_t *v0; // rax
  __int64 v1; // r10

  v0 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v0 > 5u )
  {
    LOBYTE(v0) = tlgKeywordOn((__int64)v0, 16LL);
    if ( (_BYTE)v0 )
      LOBYTE(v0) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                     v1,
                     (__int64)&unk_1807D869D);
  }
  return (char)v0;
}
