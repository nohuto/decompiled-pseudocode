/*
 * XREFs of ?Shell_BroadcastDVRComponent_CompleteInitializationTask_OnExit@GameDVRTraceProvider@@SAXXZ @ 0x1802C64D4
 * Callers:
 *     ?BroadcastDVRComponent_CompleteInitializationTask_OnExit@GameDVRTraceProvider@@SAXXZ @ 0x180227758 (-BroadcastDVRComponent_CompleteInitializationTask_OnExit@GameDVRTraceProvider@@SAXXZ.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18001DFD4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Provider@GameDVRTraceProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1800C79C8 (-Provider@GameDVRTraceProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall GameDVRTraceProvider::Shell_BroadcastDVRComponent_CompleteInitializationTask_OnExit(__int64 a1)
{
  const struct _tlgProvider_t *v1; // rax

  v1 = GameDVRTraceProvider::Provider(a1);
  if ( *(_DWORD *)v1 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v1,
      byte_1807E88DA,
      0LL);
}
