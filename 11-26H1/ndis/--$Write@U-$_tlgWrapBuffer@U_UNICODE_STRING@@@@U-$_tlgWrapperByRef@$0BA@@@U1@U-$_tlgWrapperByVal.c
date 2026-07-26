/*
 * XREFs of ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByRef@$0BA@@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByRef@$0BA@@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x140001670
 * Callers:
 *     ??1Filter@BindingMetrics@@QEAA@XZ @ 0x14005F2C0 (--1Filter@BindingMetrics@@QEAA@XZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14001DD30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByRef<16>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 **a5,
        __int64 *a6,
        unsigned __int16 **a7,
        __int64 a8,
        __int64 a9)
{
  int v9; // ecx
  __int64 v10; // rcx
  _BYTE v12[32]; // [rsp+30h] [rbp-71h] BYREF
  _DWORD *v13; // [rsp+50h] [rbp-51h]
  __int64 v14; // [rsp+58h] [rbp-49h]
  __int64 v15; // [rsp+60h] [rbp-41h]
  _DWORD v16[2]; // [rsp+68h] [rbp-39h] BYREF
  __int64 v17; // [rsp+70h] [rbp-31h]
  __int64 v18; // [rsp+78h] [rbp-29h]
  _DWORD *v19; // [rsp+80h] [rbp-21h]
  __int64 v20; // [rsp+88h] [rbp-19h]
  __int64 v21; // [rsp+90h] [rbp-11h]
  _DWORD v22[2]; // [rsp+98h] [rbp-9h] BYREF
  __int64 v23; // [rsp+A0h] [rbp-1h]
  __int64 v24; // [rsp+A8h] [rbp+7h]
  __int64 v25; // [rsp+B0h] [rbp+Fh]
  __int64 v26; // [rsp+B8h] [rbp+17h]

  v25 = a9;
  v23 = a8;
  v19 = v22;
  v26 = 8LL;
  v24 = 4LL;
  v20 = 2LL;
  v9 = **a7;
  v21 = *((_QWORD *)*a7 + 1);
  v22[0] = v9;
  v22[1] = 0;
  v18 = 16LL;
  v10 = *a6;
  v13 = v16;
  v17 = v10;
  v14 = 2LL;
  LODWORD(v10) = **a5;
  v15 = *((_QWORD *)*a5 + 1);
  v16[0] = v10;
  v16[1] = 0;
  return tlgWriteTransfer_EtwWriteTransfer(&dword_14011C6C0, a2, a3, 0LL, 9, v12);
}
