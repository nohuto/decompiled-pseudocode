/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@_W@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperBinary@@4AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@_W@@3@Z @ 0x14001DA70
 * Callers:
 *     ?NdisTraceLoggingDeviceAddSuccess@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@E@Z @ 0x1400B18D0 (-NdisTraceLoggingDeviceAddSuccess@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@E@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14001DD30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperBinary,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 *a7,
        __int64 *a8,
        __int64 a9,
        void **a10,
        __int64 a11)
{
  _WORD *v11; // rcx
  __int64 v12; // rax
  int v14; // eax
  __int64 v15; // rcx
  _BYTE v17[32]; // [rsp+30h] [rbp-A1h] BYREF
  __int64 v18; // [rsp+50h] [rbp-81h]
  __int64 v19; // [rsp+58h] [rbp-79h]
  _DWORD *v20; // [rsp+60h] [rbp-71h]
  __int64 v21; // [rsp+68h] [rbp-69h]
  __int64 v22; // [rsp+70h] [rbp-61h]
  _DWORD v23[2]; // [rsp+78h] [rbp-59h] BYREF
  _DWORD *v24; // [rsp+80h] [rbp-51h]
  __int64 v25; // [rsp+88h] [rbp-49h]
  __int64 v26; // [rsp+90h] [rbp-41h]
  _DWORD v27[2]; // [rsp+98h] [rbp-39h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-31h]
  __int64 v29; // [rsp+A8h] [rbp-29h]
  __int64 v30; // [rsp+B0h] [rbp-21h]
  __int64 v31; // [rsp+B8h] [rbp-19h]
  _WORD *v32; // [rsp+C0h] [rbp-11h]
  int v33; // [rsp+C8h] [rbp-9h]
  int v34; // [rsp+CCh] [rbp-5h]
  __int64 v35; // [rsp+D0h] [rbp-1h]
  __int64 v36; // [rsp+D8h] [rbp+7h]

  v35 = a11;
  v36 = 4LL;
  v11 = *a10;
  if ( *a10 )
  {
    v12 = -1LL;
    while ( v11[++v12] != 0 )
      ;
    v14 = 2 * v12 + 2;
  }
  else
  {
    v11 = &unk_1400F7E38;
    v14 = 2;
  }
  v33 = v14;
  v30 = a9;
  v32 = v11;
  v34 = 0;
  v31 = 8LL;
  v15 = *a8;
  v24 = v27;
  v28 = v15;
  v29 = 16LL;
  v25 = 2LL;
  v27[1] = 0;
  v26 = *a7;
  v27[0] = *((unsigned __int16 *)a7 + 4);
  v20 = v23;
  v21 = 2LL;
  v22 = *a6;
  v23[0] = *((unsigned __int16 *)a6 + 4);
  v18 = a5;
  v23[1] = 0;
  v19 = 4LL;
  return tlgWriteTransfer_EtwWriteTransfer(&dword_14011C6F8, a2, 0LL, 0LL, 11, v17);
}
