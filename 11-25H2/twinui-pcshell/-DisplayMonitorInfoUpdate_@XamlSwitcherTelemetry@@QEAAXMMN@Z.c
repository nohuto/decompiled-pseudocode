/*
 * XREFs of ?DisplayMonitorInfoUpdate_@XamlSwitcherTelemetry@@QEAAXMMN@Z @ 0x1806961CC
 * Callers:
 *     ??$DisplayMonitorInfoUpdate@MMAEBN@XamlSwitcherTelemetry@@SAX$$QEAM0AEBN@Z @ 0x18069458C (--$DisplayMonitorInfoUpdate@MMAEBN@XamlSwitcherTelemetry@@SAX$$QEAM0AEBN@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x18000C7B8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ?Provider@XamlSwitcherLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18010705C (-Provider@XamlSwitcherLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall XamlSwitcherTelemetry::DisplayMonitorInfoUpdate_(
        XamlSwitcherTelemetry *this,
        float a2,
        float a3,
        double a4)
{
  const struct _tlgProvider_t *v4; // rcx
  __int64 v5; // rcx

  v4 = XamlSwitcherLogging::Provider((__int64)this);
  if ( *(_DWORD *)v4 > 5u )
  {
    if ( tlgKeywordOn((__int64)v4, 0x400000000000LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v5,
        (__int64)&unk_1807F5606);
  }
}
