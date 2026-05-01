/*
 * XREFs of ?ShellView_ShowRequested@GamingOverlayTelemetry@@SAXXZ @ 0x18034F98C
 * Callers:
 *     ?HandleShellViewShowRequested@GamingOverlayExperienceManager@@AEAAXAEBUShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@Z @ 0x180347DD0 (-HandleShellViewShowRequested@GamingOverlayExperienceManager@@AEAAXAEBUShowShellViewRequestedEve.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180015BDC (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Provider@GamingOverlayTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x1802994EC (-Provider@GamingOverlayTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall GamingOverlayTelemetry::ShellView_ShowRequested(__int64 a1)
{
  const struct _tlgProvider_t *v1; // rax

  v1 = GamingOverlayTelemetry::Provider(a1);
  if ( *(_DWORD *)v1 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v1,
      byte_1807BD17A,
      0LL);
}
