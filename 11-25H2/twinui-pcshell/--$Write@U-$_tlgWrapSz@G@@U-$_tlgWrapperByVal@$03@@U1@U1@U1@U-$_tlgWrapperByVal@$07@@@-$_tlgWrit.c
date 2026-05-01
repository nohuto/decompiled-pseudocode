/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18000F6CC
 * Callers:
 *     ??$AppBackup_Error@AEAY0CL@$$CBGHPEBGPEBGPEBG@CAppBackupListenerTelemetry@@SAXAEAY0CL@$$CBG$$QEAH$$QEAPEBG22@Z @ 0x1805EBB88 (--$AppBackup_Error@AEAY0CL@$$CBGHPEBGPEBGPEBG@CAppBackupListenerTelemetry@@SAXAEAY0CL@$$CBG$$QEA.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18008EEEC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6,
        _QWORD *a7,
        _QWORD *a8,
        _QWORD *a9)
{
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  v10 = -1LL;
  if ( *a9 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( *(_WORD *)(*a9 + 2 * v11) );
  }
  if ( *a8 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *(_WORD *)(*a8 + 2 * v12) );
  }
  if ( *a7 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *(_WORD *)(*a7 + 2 * v13) );
  }
  if ( *a5 )
  {
    do
      ++v10;
    while ( *(_WORD *)(*a5 + 2 * v10) );
  }
  return tlgWriteTransfer_EventWriteTransfer(a1, a2);
}
