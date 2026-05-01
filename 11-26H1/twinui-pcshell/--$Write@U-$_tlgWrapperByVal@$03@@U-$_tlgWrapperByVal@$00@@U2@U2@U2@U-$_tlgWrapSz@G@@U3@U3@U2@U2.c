/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U2@U2@U2@U?$_tlgWrapSz@G@@U3@U3@U2@U2@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@444AEBU?$_tlgWrapSz@G@@55443AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18000FA28
 * Callers:
 *     ?WidgetsOSState_@DashboardManagerTelemetry@@QEAAXK_N000PEBG1100I@Z @ 0x1805DA1B0 (-WidgetsOSState_@DashboardManagerTelemetry@@QEAAXK_N000PEBG1100I@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007E240 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        _QWORD *a10,
        _QWORD *a11,
        _QWORD *a12)
{
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax

  v13 = -1LL;
  if ( *a12 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *(_WORD *)(*a12 + 2 * v14) );
  }
  if ( *a11 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *(_WORD *)(*a11 + 2 * v15) );
  }
  if ( *a10 )
  {
    do
      ++v13;
    while ( *(_WORD *)(*a10 + 2 * v13) );
  }
  return tlgWriteTransfer_EventWriteTransfer(a1, a2);
}
