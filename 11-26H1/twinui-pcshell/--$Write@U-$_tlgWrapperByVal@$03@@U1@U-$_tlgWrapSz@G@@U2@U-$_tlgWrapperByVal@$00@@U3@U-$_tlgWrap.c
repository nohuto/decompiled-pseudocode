/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18001155C
 * Callers:
 *     ??$CPCProviderAppLaunchResult@IHPEBGPEBG_N_N@CloudPCTelemetryCore@@SAX$$QEAI$$QEAH$$QEAPEBG2$$QEA_N3@Z @ 0x180670A8C (--$CPCProviderAppLaunchResult@IHPEBGPEBG_N_N@CloudPCTelemetryCore@@SAX$$QEAI$$QEAH$$QEAPEBG2$$QE.c)
 *     ??$CPCProviderAppLaunchResult@IIAEAY0BAE@GPEBG_N_N@CloudPCTelemetryCore@@SAX$$QEAI0AEAY0BAE@G$$QEAPEBG$$QEA_N3@Z @ 0x180670B88 (--$CPCProviderAppLaunchResult@IIAEAY0BAE@GPEBG_N_N@CloudPCTelemetryCore@@SAX$$QEAI0AEAY0BAE@G$$Q.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007E240 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        _QWORD *a8)
{
  __int64 v9; // rcx
  __int64 v10; // rax

  v9 = -1LL;
  if ( *a8 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *(_WORD *)(*a8 + 2 * v10) );
  }
  if ( *a7 )
  {
    do
      ++v9;
    while ( *(_WORD *)(*a7 + 2 * v9) );
  }
  return tlgWriteTransfer_EventWriteTransfer(a1, a2);
}
