/*
 * XREFs of ?Close@CScreenClippingExperienceManager@@EEAAJXZ @ 0x1801F61B0
 * Callers:
 *     ?RuntimeClassInitialize@CScreenClippingExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1802AAD10 (-RuntimeClassInitialize@CScreenClippingExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     wil::details::ScopeExitFn__lambda_e6e33050b8850206e70e8fb747e65d99___::_ScopeExitFn__lambda_e6e33050b8850206e70e8fb747e65d99___ @ 0x1802C3400 (wil--details--ScopeExitFn__lambda_e6e33050b8850206e70e8fb747e65d99___--_ScopeExitFn__lambda_e6e3.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18001DFD4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180068AAC (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?UnregisterOnClose@CScreenClippingExperienceManager@@AEAAXXZ @ 0x1801F61FC (-UnregisterOnClose@CScreenClippingExperienceManager@@AEAAXXZ.c)
 */

__int64 __fastcall CScreenClippingExperienceManager::Close(CScreenClippingExperienceManager *this)
{
  const struct _tlgProvider_t *v2; // rax

  v2 = SingleViewExperienceLogging::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v2,
      byte_1807F9190,
      0LL);
  CScreenClippingExperienceManager::UnregisterOnClose((CScreenClippingExperienceManager *)((char *)this - 16));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 37);
  return 0LL;
}
