/*
 * XREFs of ?AllUpViewHoverScrubSelectVirtualDesktop@MultitaskingViewTelemetry@@SAXXZ @ 0x1804DCF24
 * Callers:
 *     ?v_OnPointerMove@CVirtualDesktopContainerElement@@MEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804DE950 (-v_OnPointerMove@CVirtualDesktopContainerElement@@MEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18001DFD4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 */

void __fastcall MultitaskingViewTelemetry::AllUpViewHoverScrubSelectVirtualDesktop(__int64 a1)
{
  const struct _tlgProvider_t *v1; // rcx
  __int64 v2; // rcx

  v1 = WindowManagementLogging::Provider(a1);
  if ( *(_DWORD *)v1 > 5u )
  {
    if ( tlgKeywordOn((__int64)v1, 0x400000000000LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        v2,
        byte_180812E2C,
        0LL);
  }
}
