/*
 * XREFs of ?WindowEventDispatcher_WindowManagerWatcherDisconnected@ViewManagerInteropTraceLogging@@SAXXZ @ 0x18042090C
 * Callers:
 *     _lambda_99fecce93f01391543c16575634a6bf3_::operator() @ 0x18041E69C (_lambda_99fecce93f01391543c16575634a6bf3_--operator().c)
 *     _lambda_aec0846700b42ca4e39c995f67d0b5b9_::operator() @ 0x18041E9E4 (_lambda_aec0846700b42ca4e39c995f67d0b5b9_--operator().c)
 *     _lambda_420994182feb68798a6ba33cec143f0f_::operator() @ 0x180425F7C (_lambda_420994182feb68798a6ba33cec143f0f_--operator().c)
 *     _lambda_71ff6fbdffe959cf5c08784a2795046e_::operator() @ 0x180426228 (_lambda_71ff6fbdffe959cf5c08784a2795046e_--operator().c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180015BDC (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Provider@ViewManagerInteropLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180070E64 (-Provider@ViewManagerInteropLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void ViewManagerInteropTraceLogging::WindowEventDispatcher_WindowManagerWatcherDisconnected(void)
{
  const struct _tlgProvider_t *v0; // rax

  v0 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v0 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v0,
      byte_1807CD9BD,
      0LL);
}
