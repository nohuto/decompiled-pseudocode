/*
 * XREFs of ?EventRaised@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180365354
 * Callers:
 *     ?RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x1800678F8 (-RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18001DFD4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Provider@NotificationCenterLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800980BC (-Provider@NotificationCenterLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity::EventRaised(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity *this)
{
  const struct _tlgProvider_t *v2; // rax

  v2 = NotificationCenterLogging::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v2,
      byte_1807EC8DC,
      (const GUID *)(*((_QWORD *)this + 34) + 8LL));
}
