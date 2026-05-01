/*
 * XREFs of ?SwitchItemInitializationError_@MultitaskingViewTelemetry@@QEBAXJ@Z @ 0x1804BEDE0
 * Callers:
 *     ?ItemInitTelemetry@SwitchItemTelemetry@@YAJJ@Z @ 0x1804BEDA8 (-ItemInitTelemetry@SwitchItemTelemetry@@YAJJ@Z.c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800B6908 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

void __fastcall MultitaskingViewTelemetry::SwitchItemInitializationError_(MultitaskingViewTelemetry *this, int a2)
{
  const struct _tlgProvider_t *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r9
  MultitaskingViewTelemetry *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = this;
  v3 = WindowManagementLogging::Provider((__int64)this);
  if ( *(_DWORD *)v3 > 5u )
  {
    if ( tlgKeywordOn((__int64)v3, 0x200000000000LL) )
    {
      LODWORD(v6) = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        v4,
        byte_180812497,
        0LL,
        v5,
        (__int64)&v6);
    }
  }
}
