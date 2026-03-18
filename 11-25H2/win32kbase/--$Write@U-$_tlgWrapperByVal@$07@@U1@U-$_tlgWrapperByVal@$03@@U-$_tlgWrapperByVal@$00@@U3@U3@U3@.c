/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U3@U3@U3@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@44443@Z @ 0x14008072C
 * Callers:
 *     ?PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z @ 0x140080360 (-PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z.c)
 * Callees:
 *     _tlgWriteAgg @ 0x140080814 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+30h] [rbp-A9h] BYREF
  __int64 v14; // [rsp+50h] [rbp-89h]
  __int64 v15; // [rsp+58h] [rbp-81h]
  __int64 v16; // [rsp+60h] [rbp-79h]
  __int64 v17; // [rsp+68h] [rbp-71h]
  __int64 v18; // [rsp+70h] [rbp-69h]
  __int64 v19; // [rsp+78h] [rbp-61h]
  __int64 v20; // [rsp+80h] [rbp-59h]
  __int64 v21; // [rsp+88h] [rbp-51h]
  __int64 v22; // [rsp+90h] [rbp-49h]
  __int64 v23; // [rsp+98h] [rbp-41h]
  __int64 v24; // [rsp+A0h] [rbp-39h]
  __int64 v25; // [rsp+A8h] [rbp-31h]
  __int64 v26; // [rsp+B0h] [rbp-29h]
  __int64 v27; // [rsp+B8h] [rbp-21h]
  __int64 v28; // [rsp+C0h] [rbp-19h]
  __int64 v29; // [rsp+C8h] [rbp-11h]
  __int64 v30; // [rsp+D0h] [rbp-9h]
  __int64 v31; // [rsp+D8h] [rbp-1h]

  v30 = a12;
  v28 = a11;
  v26 = a10;
  v24 = a9;
  v22 = a8;
  v20 = a7;
  v18 = a6;
  v16 = a5;
  v14 = a4;
  v31 = 4LL;
  v29 = 1LL;
  v27 = 1LL;
  v25 = 1LL;
  v23 = 1LL;
  v21 = 1LL;
  v19 = 4LL;
  v17 = 8LL;
  v15 = 8LL;
  return tlgWriteAgg((int)&dword_14029EDE8, a2, 0, 11, &v13);
}
