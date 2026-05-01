/*
 * XREFs of ?AccessibleName@EM_EventQueuedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1803645FC
 * Callers:
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18003A800 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18001DFD4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Provider@NotificationCenterLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800980BC (-Provider@NotificationCenterLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_EventQueuedActivity::AccessibleName(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_EventQueuedActivity *this)
{
  const struct _tlgProvider_t *v2; // rax

  v2 = NotificationCenterLogging::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v2,
      byte_1807EC394,
      (const GUID *)(*((_QWORD *)this + 34) + 8LL));
}
