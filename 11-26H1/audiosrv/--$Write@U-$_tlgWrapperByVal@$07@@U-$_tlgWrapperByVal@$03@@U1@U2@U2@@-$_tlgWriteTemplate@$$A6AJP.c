/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@344@Z @ 0x180074890
 * Callers:
 *     ?Renew@CPdcTimerActivation@@QEAAXXZ @ 0x18007FBBC (-Renew@CPdcTimerActivation@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v10; // [rsp+30h] [rbp-71h]
  _DWORD v11[2]; // [rsp+38h] [rbp-69h] BYREF
  __int64 v12; // [rsp+40h] [rbp-61h]
  unsigned __int16 *v13; // [rsp+50h] [rbp-51h] BYREF
  int v14; // [rsp+58h] [rbp-49h]
  int v15; // [rsp+5Ch] [rbp-45h]
  unsigned __int8 *v16; // [rsp+60h] [rbp-41h]
  int v17; // [rsp+68h] [rbp-39h]
  int v18; // [rsp+6Ch] [rbp-35h]
  __int64 v19; // [rsp+70h] [rbp-31h]
  __int64 v20; // [rsp+78h] [rbp-29h]
  __int64 v21; // [rsp+80h] [rbp-21h]
  __int64 v22; // [rsp+88h] [rbp-19h]
  __int64 v23; // [rsp+90h] [rbp-11h]
  __int64 v24; // [rsp+98h] [rbp-9h]
  __int64 v25; // [rsp+A0h] [rbp-1h]
  __int64 v26; // [rsp+A8h] [rbp+7h]
  __int64 v27; // [rsp+B0h] [rbp+Fh]
  __int64 v28; // [rsp+B8h] [rbp+17h]

  v27 = a9;
  v25 = a8;
  v23 = a7;
  v21 = a6;
  v19 = a5;
  v11[0] = *a2 << 24;
  v11[1] = *(unsigned __int16 *)(a2 + 1);
  v12 = *(_QWORD *)(a2 + 3);
  v13 = *(unsigned __int16 **)(a1 + 8);
  v28 = 4LL;
  v26 = 4LL;
  v24 = 8LL;
  v22 = 4LL;
  v20 = 8LL;
  v14 = *v13;
  v17 = *(unsigned __int16 *)(a2 + 11);
  v16 = a2 + 11;
  v15 = 2;
  v18 = 1;
  LODWORD(v10) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
  return EtwEventWriteTransfer(*(_QWORD *)(a1 + 32), v11, 0LL, 0LL, 7, &v13, v10);
}
