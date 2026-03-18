/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapSz@D@@U2@U3@U3@U3@U2@U3@U3@U3@U3@U1@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapSz@D@@455545555353@Z @ 0x1800018FC
 * Callers:
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x180098A70 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800AB4E0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
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
        __int64 a11,
        _QWORD *a12,
        _QWORD *a13,
        _QWORD *a14,
        __int64 a15,
        _QWORD *a16,
        _QWORD *a17,
        _QWORD *a18,
        _QWORD *a19,
        __int64 a20,
        _QWORD *a21)
{
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax

  v22 = -1LL;
  if ( *a21 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( *(_BYTE *)(*a21 + v23) );
  }
  if ( *a19 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( *(_BYTE *)(*a19 + v24) );
  }
  if ( *a18 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( *(_BYTE *)(*a18 + v25) );
  }
  if ( *a17 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( *(_BYTE *)(*a17 + v26) );
  }
  if ( *a16 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( *(_BYTE *)(*a16 + v27) );
  }
  if ( *a14 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( *(_BYTE *)(*a14 + v28) );
  }
  if ( *a13 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( *(_BYTE *)(*a13 + v29) );
  }
  if ( *a12 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( *(_BYTE *)(*a12 + v30) );
  }
  if ( *a10 )
  {
    do
      ++v22;
    while ( *(_BYTE *)(*a10 + v22) );
  }
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL);
}
