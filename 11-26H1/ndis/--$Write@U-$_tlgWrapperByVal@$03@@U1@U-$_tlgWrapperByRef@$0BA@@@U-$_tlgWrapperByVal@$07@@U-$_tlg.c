/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@_W@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@_W@@3@Z @ 0x140001540
 * Callers:
 *     ?NdisTraceLoggingDeviceAddFailure@@YAXW4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEBUNDIS_MINIPORT_CREATION_CONFIG@@JEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B17FC (-NdisTraceLoggingDeviceAddFailure@@YAXW4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEBUNDIS_MINIPORT_CREA.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14001DD30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        __int64 a8,
        void **a9,
        __int64 a10)
{
  _WORD *v10; // rcx
  __int64 v11; // rax
  int v13; // eax
  __int64 v14; // rcx
  _BYTE v16[32]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v17; // [rsp+50h] [rbp-78h]
  __int64 v18; // [rsp+58h] [rbp-70h]
  __int64 v19; // [rsp+60h] [rbp-68h]
  __int64 v20; // [rsp+68h] [rbp-60h]
  __int64 v21; // [rsp+70h] [rbp-58h]
  __int64 v22; // [rsp+78h] [rbp-50h]
  __int64 v23; // [rsp+80h] [rbp-48h]
  __int64 v24; // [rsp+88h] [rbp-40h]
  _WORD *v25; // [rsp+90h] [rbp-38h]
  int v26; // [rsp+98h] [rbp-30h]
  int v27; // [rsp+9Ch] [rbp-2Ch]
  __int64 v28; // [rsp+A0h] [rbp-28h]
  __int64 v29; // [rsp+A8h] [rbp-20h]

  v28 = a10;
  v29 = 4LL;
  v10 = *a9;
  if ( *a9 )
  {
    v11 = -1LL;
    while ( v10[++v11] != 0 )
      ;
    v13 = 2 * v11 + 2;
  }
  else
  {
    v10 = &unk_1400F7E38;
    v13 = 2;
  }
  v26 = v13;
  v23 = a8;
  v25 = v10;
  v27 = 0;
  v24 = 8LL;
  v14 = *a7;
  v19 = a6;
  v17 = a5;
  v21 = v14;
  v22 = 16LL;
  v20 = 4LL;
  v18 = 4LL;
  return tlgWriteTransfer_EtwWriteTransfer(&dword_14011C6F8, a2, 0LL, 0LL, 8, v16);
}
