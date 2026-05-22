/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@4@Z @ 0x180004304
 * Callers:
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x180083B54 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000BEAC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const unsigned __int16 **a5,
        const WCHAR **a6,
        const WCHAR **a7)
{
  __int64 v8; // rcx
  int v9; // r8d
  const WCHAR *v10; // rdx
  __int64 v11; // rax
  int v12; // eax
  const WCHAR *v13; // rdx
  __int64 v14; // rax
  const unsigned __int16 *v15; // rdx
  int v16; // ecx
  _BYTE v18[32]; // [rsp+30h] [rbp-68h] BYREF
  const unsigned __int16 *v19; // [rsp+50h] [rbp-48h]
  int v20; // [rsp+58h] [rbp-40h]
  int v21; // [rsp+5Ch] [rbp-3Ch]
  const WCHAR *v22; // [rsp+60h] [rbp-38h]
  int v23; // [rsp+68h] [rbp-30h]
  int v24; // [rsp+6Ch] [rbp-2Ch]
  const WCHAR *v25; // [rsp+70h] [rbp-28h]
  int v26; // [rsp+78h] [rbp-20h]
  int v27; // [rsp+7Ch] [rbp-1Ch]

  v8 = -1LL;
  v9 = 2;
  v10 = *a7;
  if ( *a7 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( v10[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v10 = &WindowName;
    v12 = 2;
  }
  v26 = v12;
  v25 = v10;
  v27 = 0;
  v13 = *a6;
  if ( *a6 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v9 = 2 * v14 + 2;
  }
  else
  {
    v13 = &WindowName;
  }
  v22 = v13;
  v23 = v9;
  v24 = 0;
  v15 = *a5;
  if ( *a5 )
  {
    do
      ++v8;
    while ( *((_BYTE *)v15 + v8) );
    v16 = v8 + 1;
  }
  else
  {
    v15 = &word_180200D48;
    v16 = 1;
  }
  v19 = v15;
  v20 = v16;
  v21 = 0;
  return tlgWriteTransfer_EventWriteTransfer(&dword_180251248, a2, 0LL, 0LL, 5, v18);
}
