/*
 * XREFs of ?HandleDragEnded_@TouchKeyboardExperienceTelemetryLogger@@QEBAXIAEAURect@Foundation@Windows@@00II@Z @ 0x1804743F8
 * Callers:
 *     ??$HandleDragEnded@AEAIAEAURect@Foundation@Windows@@AEAU123@AEAU123@II@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEAURect@Foundation@Windows@@11$$QEAI2@Z @ 0x180472EE4 (--$HandleDragEnded@AEAIAEAURect@Foundation@Windows@@AEAU123@AEAU123@II@TouchKeyboardExperienceTe.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44444444444444@Z @ 0x1800096EC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180038344 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::HandleDragEnded_(
        TouchKeyboardExperienceTelemetryLogger *this,
        __int64 a2,
        struct Windows::Foundation::Rect *a3,
        struct Windows::Foundation::Rect *a4)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r10

  v4 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    if ( tlgKeywordOn((__int64)v4, 0x400000000000LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v5,
        (__int64)&unk_1807D9747);
  }
}
