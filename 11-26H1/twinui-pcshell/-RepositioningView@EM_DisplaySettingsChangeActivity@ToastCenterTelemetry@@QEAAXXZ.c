/*
 * XREFs of ?RepositioningView@EM_DisplaySettingsChangeActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x18001DECC
 * Callers:
 *     ?DisplaySettingsChange@CToastCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18001E180 (-DisplaySettingsChange@CToastCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MO.c)
 * Callees:
 *     ?Provider@ToastCenterLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001D6FC (-Provider@ToastCenterLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall ToastCenterTelemetry::EM_DisplaySettingsChangeActivity::RepositioningView(
        ToastCenterTelemetry::EM_DisplaySettingsChangeActivity *this)
{
  const struct _tlgProvider_t *v2; // rax

  v2 = ToastCenterLogging::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      v2,
      &unk_1807F45EE,
      *((_QWORD *)this + 34) + 8LL);
}
