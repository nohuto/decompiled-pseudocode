/*
 * XREFs of ?LogSearchPaneRect_@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@QEAAXUtagRECT@@@Z @ 0x1803CF80C
 * Callers:
 *     ??$LogSearchPaneRect@AEAUtagRECT@@@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@SAXAEAUtagRECT@@@Z @ 0x1803CEEC0 (--$LogSearchPaneRect@AEAUtagRECT@@@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@SAXAEAUtagREC.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180004B60 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BCA70 (-Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall SearchBoxOnTaskbarSearchAppPositionerTelemetry::LogSearchPaneRect_(
        SearchBoxOnTaskbarSearchAppPositionerTelemetry *this,
        struct tagRECT *a2)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r9

  v2 = SearchAppLauncherLogging::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 4u )
  {
    if ( tlgKeywordOn((__int64)v2, 0x200000000000LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v3,
        (__int64)&unk_1807FEB0A);
  }
}
