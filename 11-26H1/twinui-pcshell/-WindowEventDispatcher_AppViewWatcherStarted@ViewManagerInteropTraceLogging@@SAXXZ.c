/*
 * XREFs of ?WindowEventDispatcher_AppViewWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ @ 0x18022FE50
 * Callers:
 *     ?WindowManagerWatcherConnected@WindowManagerBridge@@AEAAJXZ @ 0x18042BD08 (-WindowManagerWatcherConnected@WindowManagerBridge@@AEAAJXZ.c)
 *     ?StartUalmWatcherBamo@UwpWindowManagerBridge@@AEAAJXZ @ 0x180432A74 (-StartUalmWatcherBamo@UwpWindowManagerBridge@@AEAAJXZ.c)
 *     ?WindowManagerWatcherConnected@UwpWindowManagerBridge@@AEAAJUwrite_lock_required@wil@@@Z @ 0x180432AD8 (-WindowManagerWatcherConnected@UwpWindowManagerBridge@@AEAAJUwrite_lock_required@wil@@@Z.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18001DFD4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Provider@ViewManagerInteropLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18006B7C4 (-Provider@ViewManagerInteropLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewWatcherStarted(void)
{
  const struct _tlgProvider_t *v0; // rax

  v0 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v0 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v0,
      byte_180802B43,
      0LL);
}
