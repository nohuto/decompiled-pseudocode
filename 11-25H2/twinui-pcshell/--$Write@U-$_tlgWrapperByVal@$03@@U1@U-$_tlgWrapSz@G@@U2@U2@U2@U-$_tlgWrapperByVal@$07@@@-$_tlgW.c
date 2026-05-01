/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@444AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18000E834
 * Callers:
 *     ??$RequestContextCreatedFromProcessThread@KAEAKPEBGPEBGPEBGPEBG@PinManagerTelemetry@@SAX$$QEAKAEAK$$QEAPEBG222@Z @ 0x18028FC3C (--$RequestContextCreatedFromProcessThread@KAEAKPEBGPEBGPEBGPEBG@PinManagerTelemetry@@SAX$$QEAKAE.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18008EEEC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        _QWORD *a8,
        _QWORD *a9,
        _QWORD *a10)
{
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  v11 = -1LL;
  if ( *a10 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *(_WORD *)(*a10 + 2 * v12) );
  }
  if ( *a9 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *(_WORD *)(*a9 + 2 * v13) );
  }
  if ( *a8 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *(_WORD *)(*a8 + 2 * v14) );
  }
  if ( *a7 )
  {
    do
      ++v11;
    while ( *(_WORD *)(*a7 + 2 * v11) );
  }
  return tlgWriteTransfer_EventWriteTransfer(a1, a2);
}
