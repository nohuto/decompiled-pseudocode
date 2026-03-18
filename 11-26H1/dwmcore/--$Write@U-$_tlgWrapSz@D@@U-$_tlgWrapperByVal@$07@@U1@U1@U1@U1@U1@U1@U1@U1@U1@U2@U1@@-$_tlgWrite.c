/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@33333333343@Z @ 0x180001664
 * Callers:
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x180110440 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800AB4E0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6,
        _QWORD *a7,
        _QWORD *a8,
        _QWORD *a9,
        _QWORD *a10,
        _QWORD *a11,
        _QWORD *a12,
        _QWORD *a13,
        _QWORD *a14,
        _QWORD *a15,
        __int64 a16,
        _QWORD *a17)
{
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax

  v17 = -1LL;
  if ( *a17 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( *(_BYTE *)(*a17 + v18) );
  }
  if ( *a15 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *(_BYTE *)(*a15 + v19) );
  }
  if ( *a14 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( *(_BYTE *)(*a14 + v20) );
  }
  if ( *a13 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( *(_BYTE *)(*a13 + v21) );
  }
  if ( *a12 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( *(_BYTE *)(*a12 + v22) );
  }
  if ( *a11 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( *(_BYTE *)(*a11 + v23) );
  }
  if ( *a10 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( *(_BYTE *)(*a10 + v24) );
  }
  if ( *a9 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( *(_BYTE *)(*a9 + v25) );
  }
  if ( *a8 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( *(_BYTE *)(*a8 + v26) );
  }
  if ( *a7 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( *(_BYTE *)(*a7 + v27) );
  }
  if ( *a5 )
  {
    do
      ++v17;
    while ( *(_BYTE *)(*a5 + v17) );
  }
  return tlgWriteTransfer_EventWriteTransfer(&dword_1803DC8B8, a2, 0LL);
}
