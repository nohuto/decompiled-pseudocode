/*
 * XREFs of ??$IgnoreRelativeToFocusedElementShowRequest@AEA_N_NAEAMAEAM@TouchKeyboardExperienceTelemetryLogger@@SAXAEA_N$$QEA_NAEAM2@Z @ 0x180482548
 * Callers:
 *     ?IgnoreRelativeToFocusedElementShowRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x18021012C (-IgnoreRelativeToFocusedElementShowRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKe.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180009130 (--$Write@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$07@@@-$_tl.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BD788 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char TouchKeyboardExperienceTelemetryLogger::IgnoreRelativeToFocusedElementShowRequest<bool &,bool,float &,float &>()
{
  const struct _tlgProvider_t *v0; // rax
  __int64 v1; // rcx

  v0 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v0 > 5u )
  {
    LOBYTE(v0) = tlgKeywordOn((__int64)v0, 0x200000000000LL);
    if ( (_BYTE)v0 )
      LOBYTE(v0) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                     v1,
                     (__int64)&unk_18080F4CF);
  }
  return (char)v0;
}
