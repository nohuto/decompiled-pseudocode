/*
 * XREFs of ?FlyoutHidden@MeetNowTelemetry@@SAXXZ @ 0x1803B8894
 * Callers:
 *     ?OnViewHidden@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803BAF80 (-OnViewHidden@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180015BDC (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Provider@MeetNowTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1803BB868 (-Provider@MeetNowTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void MeetNowTelemetry::FlyoutHidden(void)
{
  const struct _tlgProvider_t *v0; // rax

  v0 = MeetNowTelemetryLogging::Provider();
  if ( *(_DWORD *)v0 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v0,
      byte_1807C921E,
      0LL);
}
