/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@44444AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x14001DBA0
 * Callers:
 *     ??$ndisAzTelemetryOidDelivered@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x140023DF0 (--$ndisAzTelemetryOidDelivered@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_R.c)
 *     ??$ndisAzTelemetryOidDelivered@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x140051C40 (--$ndisAzTelemetryOidDelivered@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_O.c)
 *     ??$TraceLoggingWriteOidRequestReturnedActivity@$0A@U_NDIS_OPEN_BLOCK@@@@YAXPEBU_NDIS_OPEN_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x14008EB80 (--$TraceLoggingWriteOidRequestReturnedActivity@$0A@U_NDIS_OPEN_BLOCK@@@@YAXPEBU_NDIS_OPEN_BLOCK@.c)
 *     ??$TraceLoggingWriteOidRequestReturnedActivity@$01U_NDIS_OPEN_BLOCK@@@@YAXPEBU_NDIS_OPEN_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x14008ED10 (--$TraceLoggingWriteOidRequestReturnedActivity@$01U_NDIS_OPEN_BLOCK@@@@YAXPEBU_NDIS_OPEN_BLOCK@@.c)
 *     ??$TraceLoggingWriteOidRequestReturnedActivity@$01U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1400E6A2C (--$TraceLoggingWriteOidRequestReturnedActivity@$01U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLO.c)
 *     ??$TraceLoggingWriteOidRequestReturnedActivity@$0A@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1400E6B18 (--$TraceLoggingWriteOidRequestReturnedActivity@$0A@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BL.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14001DD30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        unsigned __int16 **a12)
{
  int v12; // ecx
  _BYTE v14[32]; // [rsp+30h] [rbp-A9h] BYREF
  __int64 v15; // [rsp+50h] [rbp-89h]
  __int64 v16; // [rsp+58h] [rbp-81h]
  __int64 v17; // [rsp+60h] [rbp-79h]
  __int64 v18; // [rsp+68h] [rbp-71h]
  __int64 v19; // [rsp+70h] [rbp-69h]
  __int64 v20; // [rsp+78h] [rbp-61h]
  __int64 v21; // [rsp+80h] [rbp-59h]
  __int64 v22; // [rsp+88h] [rbp-51h]
  __int64 v23; // [rsp+90h] [rbp-49h]
  __int64 v24; // [rsp+98h] [rbp-41h]
  __int64 v25; // [rsp+A0h] [rbp-39h]
  __int64 v26; // [rsp+A8h] [rbp-31h]
  __int64 v27; // [rsp+B0h] [rbp-29h]
  __int64 v28; // [rsp+B8h] [rbp-21h]
  _DWORD *v29; // [rsp+C0h] [rbp-19h]
  __int64 v30; // [rsp+C8h] [rbp-11h]
  __int64 v31; // [rsp+D0h] [rbp-9h]
  _DWORD v32[2]; // [rsp+D8h] [rbp-1h] BYREF

  v30 = 2LL;
  v29 = v32;
  v12 = **a12;
  v31 = *((_QWORD *)*a12 + 1);
  v27 = a11;
  v25 = a10;
  v23 = a9;
  v21 = a8;
  v19 = a7;
  v17 = a6;
  v32[0] = v12;
  v32[1] = 0;
  v28 = 4LL;
  v15 = *a5;
  v26 = 4LL;
  v24 = 4LL;
  v22 = 4LL;
  v20 = 4LL;
  v18 = 4LL;
  v16 = 16LL;
  return tlgWriteTransfer_EtwWriteTransfer(&dword_14011C6C0, a2, a3, 0LL, 11, v14);
}
