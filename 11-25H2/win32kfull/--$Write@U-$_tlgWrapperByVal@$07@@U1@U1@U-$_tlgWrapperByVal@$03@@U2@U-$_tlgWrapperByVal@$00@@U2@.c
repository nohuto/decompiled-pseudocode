/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@U2@U?$_tlgWrapSz@G@@U4@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@4AEBU?$_tlgWrapSz@G@@644@Z @ 0x1400070C4
 * Callers:
 *     ?RecordUnhandledException@UmfdHostLifeTimeManager@@SAXPEBVFontDriverDdiRequest@@@Z @ 0x140338544 (-RecordUnhandledException@UmfdHostLifeTimeManager@@SAXPEBVFontDriverDdiRequest@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14012B154 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        _QWORD *a12,
        _QWORD *a13)
{
  __int64 v13; // rcx
  __int64 v14; // rax

  v13 = -1LL;
  if ( *a13 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *(_WORD *)(*a13 + 2 * v14) );
  }
  if ( *a12 )
  {
    do
      ++v13;
    while ( *(_WORD *)(*a12 + 2 * v13) );
  }
  return tlgWriteTransfer_EtwWriteTransfer(&dword_14039BBC0, a2, 0LL);
}
