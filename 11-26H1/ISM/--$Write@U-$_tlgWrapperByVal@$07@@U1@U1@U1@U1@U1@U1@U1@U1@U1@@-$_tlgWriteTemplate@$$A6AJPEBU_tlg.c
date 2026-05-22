/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333333333@Z @ 0x180007A50
 * Callers:
 *     ?DragEnded@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z @ 0x180156ED4 (-DragEnded@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z.c)
 *     ?DragInProgress@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z @ 0x180157008 (-DragInProgress@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000BEAC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  _BYTE v15[32]; // [rsp+30h] [rbp-C9h] BYREF
  __int64 v16; // [rsp+50h] [rbp-A9h]
  __int64 v17; // [rsp+58h] [rbp-A1h]
  __int64 v18; // [rsp+60h] [rbp-99h]
  __int64 v19; // [rsp+68h] [rbp-91h]
  __int64 v20; // [rsp+70h] [rbp-89h]
  __int64 v21; // [rsp+78h] [rbp-81h]
  __int64 v22; // [rsp+80h] [rbp-79h]
  __int64 v23; // [rsp+88h] [rbp-71h]
  __int64 v24; // [rsp+90h] [rbp-69h]
  __int64 v25; // [rsp+98h] [rbp-61h]
  __int64 v26; // [rsp+A0h] [rbp-59h]
  __int64 v27; // [rsp+A8h] [rbp-51h]
  __int64 v28; // [rsp+B0h] [rbp-49h]
  __int64 v29; // [rsp+B8h] [rbp-41h]
  __int64 v30; // [rsp+C0h] [rbp-39h]
  __int64 v31; // [rsp+C8h] [rbp-31h]
  __int64 v32; // [rsp+D0h] [rbp-29h]
  __int64 v33; // [rsp+D8h] [rbp-21h]
  __int64 v34; // [rsp+E0h] [rbp-19h]
  __int64 v35; // [rsp+E8h] [rbp-11h]

  v34 = a14;
  v32 = a13;
  v30 = a12;
  v28 = a11;
  v26 = a10;
  v24 = a9;
  v22 = a8;
  v20 = a7;
  v18 = a6;
  v16 = a5;
  v35 = 8LL;
  v33 = 8LL;
  v31 = 8LL;
  v29 = 8LL;
  v27 = 8LL;
  v25 = 8LL;
  v23 = 8LL;
  v21 = 8LL;
  v19 = 8LL;
  v17 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 12, v15);
}
