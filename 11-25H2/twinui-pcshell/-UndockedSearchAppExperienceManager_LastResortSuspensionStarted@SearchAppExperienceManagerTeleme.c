/*
 * XREFs of ?UndockedSearchAppExperienceManager_LastResortSuspensionStarted@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x180015328
 * Callers:
 *     ?StartLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180015298 (-StartLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180015BDC (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800384F8 (-Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_LastResortSuspensionStarted(void)
{
  const struct _tlgProvider_t *v0; // rax

  v0 = SearchAppLauncherLogging::Provider();
  if ( *(_DWORD *)v0 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      v0,
      &unk_1807C8787,
      0LL);
}
