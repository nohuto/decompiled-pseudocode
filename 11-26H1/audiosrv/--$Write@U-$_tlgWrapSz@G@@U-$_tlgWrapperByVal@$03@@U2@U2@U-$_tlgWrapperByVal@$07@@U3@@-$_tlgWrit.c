/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapperByVal@$07@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapperByVal@$07@@5@Z @ 0x180077844
 * Callers:
 *     ?Fire@AudioSrvVolumeTelemetrySessionVolume@@EEAAX_KI@Z @ 0x1800DBF40 (-Fire@AudioSrvVolumeTelemetrySessionVolume@@EEAAX_KI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const wchar_t **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  const wchar_t *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 v15; // [rsp+30h] [rbp-89h]
  _DWORD v16[2]; // [rsp+38h] [rbp-81h] BYREF
  __int64 v17; // [rsp+40h] [rbp-79h]
  unsigned __int16 *v18; // [rsp+50h] [rbp-69h] BYREF
  int v19; // [rsp+58h] [rbp-61h]
  int v20; // [rsp+5Ch] [rbp-5Dh]
  unsigned __int8 *v21; // [rsp+60h] [rbp-59h]
  int v22; // [rsp+68h] [rbp-51h]
  int v23; // [rsp+6Ch] [rbp-4Dh]
  const wchar_t *v24; // [rsp+70h] [rbp-49h]
  int v25; // [rsp+78h] [rbp-41h]
  int v26; // [rsp+7Ch] [rbp-3Dh]
  __int64 v27; // [rsp+80h] [rbp-39h]
  __int64 v28; // [rsp+88h] [rbp-31h]
  __int64 v29; // [rsp+90h] [rbp-29h]
  __int64 v30; // [rsp+98h] [rbp-21h]
  __int64 v31; // [rsp+A0h] [rbp-19h]
  __int64 v32; // [rsp+A8h] [rbp-11h]
  __int64 v33; // [rsp+B0h] [rbp-9h]
  __int64 v34; // [rsp+B8h] [rbp-1h]
  __int64 v35; // [rsp+C0h] [rbp+7h]
  __int64 v36; // [rsp+C8h] [rbp+Fh]

  v35 = a10;
  v33 = a9;
  v31 = a8;
  v29 = a7;
  v27 = a6;
  v36 = 8LL;
  v34 = 8LL;
  v32 = 4LL;
  v11 = *a5;
  v30 = 4LL;
  v28 = 4LL;
  if ( v11 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v11 = &LocaleName;
    v13 = 2;
  }
  v25 = v13;
  v16[0] = *a2 << 24;
  v16[1] = *(unsigned __int16 *)(a2 + 1);
  v17 = *(_QWORD *)(a2 + 3);
  v18 = *(unsigned __int16 **)(a1 + 8);
  v24 = v11;
  v26 = 0;
  v19 = *v18;
  v22 = *(unsigned __int16 *)(a2 + 11);
  v21 = a2 + 11;
  v20 = 2;
  v23 = 1;
  LODWORD(v15) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
  return EtwEventWriteTransfer(*(_QWORD *)(a1 + 32), v16, 0LL, 0LL, 8, &v18, v15);
}
