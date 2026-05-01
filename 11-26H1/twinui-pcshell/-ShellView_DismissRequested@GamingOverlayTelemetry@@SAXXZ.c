/*
 * XREFs of ?ShellView_DismissRequested@GamingOverlayTelemetry@@SAXXZ @ 0x180354060
 * Callers:
 *     ?HandleShellViewDismissRequested@GamingOverlayExperienceManager@@AEAAXAEBUDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18034B1F8 (-HandleShellViewDismissRequested@GamingOverlayExperienceManager@@AEAAXAEBUDismissShellViewReques.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18001DFD4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Provider@GamingOverlayTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x1802901FC (-Provider@GamingOverlayTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall GamingOverlayTelemetry::ShellView_DismissRequested(__int64 a1)
{
  const struct _tlgProvider_t *v1; // rax

  v1 = GamingOverlayTelemetry::Provider(a1);
  if ( *(_DWORD *)v1 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v1,
      byte_1807EB3A7,
      0LL);
}
