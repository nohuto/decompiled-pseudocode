/*
 * XREFs of ?KeyboardButtonInvoked_@KeyboardButtonTelemetry@@QEBAX_N00@Z @ 0x180472418
 * Callers:
 *     ?ToggleTabTip@KeyboardHosting@@YAJXZ @ 0x1804724D8 (-ToggleTabTip@KeyboardHosting@@YAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3333AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180008DE8 (--$Write@U-$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ?Provider@TaskbarLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18016BA58 (-Provider@TaskbarLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall KeyboardButtonTelemetry::KeyboardButtonInvoked_(KeyboardButtonTelemetry *this)
{
  const struct _tlgProvider_t *v1; // rcx
  __int64 v2; // rcx

  v1 = TaskbarLogging::Provider((__int64)this);
  if ( *(_DWORD *)v1 > 5u )
  {
    if ( tlgKeywordOn((__int64)v1, 0x400000000000LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
        v2,
        (__int64)&unk_1807D8758);
  }
}
