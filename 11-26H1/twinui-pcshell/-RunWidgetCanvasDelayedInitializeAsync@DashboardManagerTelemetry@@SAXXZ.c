/*
 * XREFs of ?RunWidgetCanvasDelayedInitializeAsync@DashboardManagerTelemetry@@SAXXZ @ 0x1805D6FD8
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1 @ 0x1805D6690 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvasDelayedInitial.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18001DFD4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Provider@DashboardManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x18018CBE4 (-Provider@DashboardManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall DashboardManagerTelemetry::RunWidgetCanvasDelayedInitializeAsync(__int64 a1)
{
  const struct _tlgProvider_t *v1; // rax

  v1 = DashboardManagerTelemetry::Provider(a1);
  if ( *(_DWORD *)v1 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v1,
      byte_18082620C,
      0LL);
}
