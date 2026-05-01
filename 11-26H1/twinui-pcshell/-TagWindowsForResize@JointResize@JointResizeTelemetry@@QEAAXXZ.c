/*
 * XREFs of ?TagWindowsForResize@JointResize@JointResizeTelemetry@@QEAAXXZ @ 0x18053AA88
 * Callers:
 *     ?TagWindowsForResize@JointResize@@AEAAXXZ @ 0x18053A908 (-TagWindowsForResize@JointResize@@AEAAXXZ.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18001DFD4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 */

void __fastcall JointResizeTelemetry::JointResize::TagWindowsForResize(JointResizeTelemetry::JointResize *this)
{
  const struct _tlgProvider_t *v2; // rcx
  __int64 v3; // rcx

  v2 = WindowManagementLogging::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 5u )
  {
    if ( tlgKeywordOn((__int64)v2, 0x200000000000LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        v3,
        byte_18081C932,
        (const GUID *)(*((_QWORD *)this + 34) + 8LL));
  }
}
