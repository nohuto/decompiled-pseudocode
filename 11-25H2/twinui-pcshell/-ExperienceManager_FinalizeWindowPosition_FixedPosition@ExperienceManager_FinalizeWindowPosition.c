/*
 * XREFs of ?ExperienceManager_FinalizeWindowPosition_FixedPosition@ExperienceManager_FinalizeWindowPosition@QuickConnectTelemetry@@QEAAXXZ @ 0x18038A2AC
 * Callers:
 *     ?FinalizeWindowPosition@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z @ 0x18038A7C8 (-FinalizeWindowPosition@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180015BDC (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ?Provider@QuickConnectLoggingProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18038BD14 (-Provider@QuickConnectLoggingProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall QuickConnectTelemetry::ExperienceManager_FinalizeWindowPosition::ExperienceManager_FinalizeWindowPosition_FixedPosition(
        QuickConnectTelemetry::ExperienceManager_FinalizeWindowPosition *this)
{
  const struct _tlgProvider_t *v2; // rcx
  __int64 v3; // rcx

  v2 = QuickConnectLoggingProvider::Provider();
  if ( *(_DWORD *)v2 > 5u )
  {
    if ( tlgKeywordOn((__int64)v2, 0x200000000000LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        v3,
        byte_1807C3A3F,
        (const GUID *)(*((_QWORD *)this + 34) + 8LL));
  }
}
