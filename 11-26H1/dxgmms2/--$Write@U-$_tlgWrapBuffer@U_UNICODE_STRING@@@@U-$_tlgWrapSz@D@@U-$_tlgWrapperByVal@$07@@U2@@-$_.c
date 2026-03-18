/*
 * XREFs of ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x14000158C
 * Callers:
 *     ?LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z @ 0x140102B20 (-LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140040548 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 **a5,
        void **a6,
        __int64 a7,
        void **a8)
{
  __int64 v9; // rcx
  int v11; // r8d
  _BYTE *v12; // rdx
  __int64 v13; // rax
  int v14; // eax
  _BYTE *v15; // rdx
  int v16; // ecx
  _BYTE v18[32]; // [rsp+30h] [rbp-49h] BYREF
  _DWORD *v19; // [rsp+50h] [rbp-29h]
  __int64 v20; // [rsp+58h] [rbp-21h]
  __int64 v21; // [rsp+60h] [rbp-19h]
  _DWORD v22[2]; // [rsp+68h] [rbp-11h] BYREF
  _BYTE *v23; // [rsp+70h] [rbp-9h]
  int v24; // [rsp+78h] [rbp-1h]
  int v25; // [rsp+7Ch] [rbp+3h]
  __int64 v26; // [rsp+80h] [rbp+7h]
  __int64 v27; // [rsp+88h] [rbp+Fh]
  _BYTE *v28; // [rsp+90h] [rbp+17h]
  int v29; // [rsp+98h] [rbp+1Fh]
  int v30; // [rsp+9Ch] [rbp+23h]

  v9 = -1LL;
  v11 = 1;
  v12 = *a8;
  if ( *a8 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = v13 + 1;
  }
  else
  {
    v12 = &unk_140067CEC;
    v14 = 1;
  }
  v29 = v14;
  v26 = a7;
  v28 = v12;
  v30 = 0;
  v27 = 8LL;
  v15 = *a6;
  if ( *a6 )
  {
    do
      ++v9;
    while ( v15[v9] );
    v11 = v9 + 1;
  }
  else
  {
    v15 = &unk_140067CEC;
  }
  v23 = v15;
  v19 = v22;
  v24 = v11;
  v25 = 0;
  v20 = 2LL;
  v16 = **a5;
  v21 = *((_QWORD *)*a5 + 1);
  v22[0] = v16;
  v22[1] = 0;
  return tlgWriteTransfer_EtwWriteTransfer(&dword_14008A048, a2, a3, 0LL, 7, v18);
}
