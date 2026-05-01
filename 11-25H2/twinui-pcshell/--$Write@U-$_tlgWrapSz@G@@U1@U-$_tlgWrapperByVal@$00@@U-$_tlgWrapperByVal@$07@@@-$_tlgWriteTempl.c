/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18000E740
 * Callers:
 *     ??$PackagedAppDisplayInformationRetrieved@PEBGPEBG_N@PinManagerTelemetry@@SAX$$QEAPEBG0$$QEA_N@Z @ 0x1805BC2F0 (--$PackagedAppDisplayInformationRetrieved@PEBGPEBG_N@PinManagerTelemetry@@SAX$$QEAPEBG0$$QEA_N@Z.c)
 *     ??$UnpackagedAppDisplayInformationRetrieved@PEBGPEBG_N@PinManagerTelemetry@@SAX$$QEAPEBG0$$QEA_N@Z @ 0x1805BCF74 (--$UnpackagedAppDisplayInformationRetrieved@PEBGPEBG_N@PinManagerTelemetry@@SAX$$QEAPEBG0$$QEA_N.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18008EEEC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v7; // rcx
  __int64 v8; // rax

  v7 = -1LL;
  if ( *a6 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)(*a6 + 2 * v8) );
  }
  if ( *a5 )
  {
    do
      ++v7;
    while ( *(_WORD *)(*a5 + 2 * v7) );
  }
  return tlgWriteTransfer_EventWriteTransfer(a1, a2);
}
