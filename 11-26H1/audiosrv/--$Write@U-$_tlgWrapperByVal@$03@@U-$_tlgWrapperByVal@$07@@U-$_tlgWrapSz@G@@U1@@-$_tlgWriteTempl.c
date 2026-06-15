/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@3@Z @ 0x18005E26C
 * Callers:
 *     ?SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z @ 0x180021320 (-SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z.c)
 *     ?StopStream_Internal@CVADServer@@IEAAJXZ @ 0x180080C20 (-StopStream_Internal@CVADServer@@IEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const wchar_t **a7,
        __int64 a8)
{
  const wchar_t *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  __int64 v13; // [rsp+30h] [rbp-59h]
  _DWORD v14[2]; // [rsp+38h] [rbp-51h] BYREF
  __int64 v15; // [rsp+40h] [rbp-49h]
  unsigned __int16 *v16; // [rsp+50h] [rbp-39h] BYREF
  int v17; // [rsp+58h] [rbp-31h]
  int v18; // [rsp+5Ch] [rbp-2Dh]
  unsigned __int8 *v19; // [rsp+60h] [rbp-29h]
  int v20; // [rsp+68h] [rbp-21h]
  int v21; // [rsp+6Ch] [rbp-1Dh]
  __int64 v22; // [rsp+70h] [rbp-19h]
  __int64 v23; // [rsp+78h] [rbp-11h]
  __int64 v24; // [rsp+80h] [rbp-9h]
  __int64 v25; // [rsp+88h] [rbp-1h]
  const wchar_t *v26; // [rsp+90h] [rbp+7h]
  int v27; // [rsp+98h] [rbp+Fh]
  int v28; // [rsp+9Ch] [rbp+13h]
  __int64 v29; // [rsp+A0h] [rbp+17h]
  __int64 v30; // [rsp+A8h] [rbp+1Fh]

  v29 = a8;
  v30 = 4LL;
  v9 = *a7;
  if ( *a7 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v9[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v9 = &LocaleName;
    v11 = 2;
  }
  v27 = v11;
  v24 = a6;
  v22 = a5;
  v14[0] = *a2 << 24;
  v14[1] = *(unsigned __int16 *)(a2 + 1);
  v15 = *(_QWORD *)(a2 + 3);
  v16 = *(unsigned __int16 **)(a1 + 8);
  v26 = v9;
  v28 = 0;
  v25 = 8LL;
  v23 = 4LL;
  v17 = *v16;
  v20 = *(unsigned __int16 *)(a2 + 11);
  v19 = a2 + 11;
  v18 = 2;
  v21 = 1;
  LODWORD(v13) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
  return EtwEventWriteTransfer(*(_QWORD *)(a1 + 32), v14, 0LL, 0LL, 6, &v16, v13);
}
