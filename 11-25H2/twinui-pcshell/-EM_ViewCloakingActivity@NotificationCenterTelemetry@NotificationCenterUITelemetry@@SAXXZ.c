/*
 * XREFs of ?EM_ViewCloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x18035E538
 * Callers:
 *     ?OnViewCloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18035FC30 (-OnViewCloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180015BDC (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Provider@NotificationCenterLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180047E50 (-Provider@NotificationCenterLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewCloakingActivity(__int64 a1)
{
  const struct _tlgProvider_t *v1; // rax

  v1 = NotificationCenterLogging::Provider(a1);
  if ( *(_DWORD *)v1 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v1,
      byte_1807BDB72,
      0LL);
}
