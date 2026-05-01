/*
 * XREFs of ?DashboardActivatorCreated@DashboardManagerTelemetry@@SAXXZ @ 0x180193B70
 * Callers:
 *     ??0?$heap_implements@V?$module_count_wrapper@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x180193A80 (--0-$heap_implements@V-$module_count_wrapper@UDashboardActivator@implementation@Shell@Internal@W.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180015BDC (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Provider@DashboardManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x180193E1C (-Provider@DashboardManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void DashboardManagerTelemetry::DashboardActivatorCreated(void)
{
  const struct _tlgProvider_t *v0; // rax

  v0 = DashboardManagerTelemetry::Provider();
  if ( *(_DWORD *)v0 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v0,
      byte_1807EA23C,
      0LL);
}
