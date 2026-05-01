/*
 * XREFs of ?CortanaExperienceManager_PreLaunch_LaunchRequired@CortanaExperienceManager_PreLaunch@CortanaProactiveTelemetry@@QEAAXXZ @ 0x18036B188
 * Callers:
 *     ?Prelaunch@CortanaSharedExperienceManager@@UEAAJE@Z @ 0x18036CDA0 (-Prelaunch@CortanaSharedExperienceManager@@UEAAJE@Z.c)
 *     ?Prelaunch@SearchAppExperienceManager@@UEAAJE@Z @ 0x18039AFD0 (-Prelaunch@SearchAppExperienceManager@@UEAAJE@Z.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180015BDC (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Provider@CortanaProactiveLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800C458C (-Provider@CortanaProactiveLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch::CortanaExperienceManager_PreLaunch_LaunchRequired(
        CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch *this)
{
  const struct _tlgProvider_t *v2; // rax

  v2 = CortanaProactiveLogging::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 4u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v2,
      byte_1807C0B4E,
      (const GUID *)(*((_QWORD *)this + 34) + 8LL));
}
