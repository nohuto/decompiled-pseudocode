/*
 * XREFs of ?PeoplePaneViewChanged_@CommonPeopleTelemetry@@QEBAXW4PeoplePaneViewChange@@@Z @ 0x180402598
 * Callers:
 *     ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x180402430 (-NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800FCC90 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Provider@CommonPeopleTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180379EC0 (-Provider@CommonPeopleTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall CommonPeopleTelemetry::PeoplePaneViewChanged_(__int64 a1, int a2)
{
  const struct _tlgProvider_t *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = a1;
  v3 = CommonPeopleTelemetryLogging::Provider(a1);
  if ( *(_DWORD *)v3 > 5u )
  {
    LOBYTE(v3) = tlgKeywordOn((__int64)v3, 0x200000000000LL);
    if ( (_BYTE)v3 )
    {
      LODWORD(v7) = a2;
      LOBYTE(v3) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
                     v4,
                     byte_1807CCA14,
                     0LL,
                     v5,
                     (__int64)&v7);
    }
  }
  return (char)v3;
}
