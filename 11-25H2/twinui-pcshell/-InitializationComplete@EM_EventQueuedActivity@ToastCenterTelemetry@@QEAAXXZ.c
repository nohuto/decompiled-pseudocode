/*
 * XREFs of ?InitializationComplete@EM_EventQueuedActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x1800168F0
 * Callers:
 *     ?OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180031270 (-OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__.c)
 * Callees:
 *     ?Provider@ToastCenterLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001783C (-Provider@ToastCenterLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall ToastCenterTelemetry::EM_EventQueuedActivity::InitializationComplete(
        ToastCenterTelemetry::EM_EventQueuedActivity *this)
{
  const struct _tlgProvider_t *v2; // rax

  v2 = ToastCenterLogging::Provider();
  if ( *(_DWORD *)v2 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v2,
      byte_1807BE08F,
      (const GUID *)(*((_QWORD *)this + 34) + 8LL));
}
