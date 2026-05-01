/*
 * XREFs of ?WindowEventDispatcher_WindowManagerWatcherDisconnected@ViewManagerInteropTraceLogging@@SAXXZ @ 0x18042BCDC
 * Callers:
 *     _lambda_99fecce93f01391543c16575634a6bf3_::operator() @ 0x180429950 (_lambda_99fecce93f01391543c16575634a6bf3_--operator().c)
 *     _lambda_aec0846700b42ca4e39c995f67d0b5b9_::operator() @ 0x180429C9C (_lambda_aec0846700b42ca4e39c995f67d0b5b9_--operator().c)
 *     _lambda_420994182feb68798a6ba33cec143f0f_::operator() @ 0x180431D18 (_lambda_420994182feb68798a6ba33cec143f0f_--operator().c)
 *     _lambda_71ff6fbdffe959cf5c08784a2795046e_::operator() @ 0x180431FC4 (_lambda_71ff6fbdffe959cf5c08784a2795046e_--operator().c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18001DFD4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Provider@ViewManagerInteropLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18006B7C4 (-Provider@ViewManagerInteropLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void ViewManagerInteropTraceLogging::WindowEventDispatcher_WindowManagerWatcherDisconnected(void)
{
  const struct _tlgProvider_t *v0; // rax

  v0 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v0 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v0,
      byte_180802C7C,
      0LL);
}
