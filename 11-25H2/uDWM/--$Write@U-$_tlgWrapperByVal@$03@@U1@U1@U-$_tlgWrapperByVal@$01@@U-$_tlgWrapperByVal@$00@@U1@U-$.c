/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800014B8
 * Callers:
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x18007D0E0 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18004F434 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  _BYTE v12[32]; // [rsp+30h] [rbp-81h] BYREF
  __int64 v13; // [rsp+50h] [rbp-61h]
  __int64 v14; // [rsp+58h] [rbp-59h]
  __int64 v15; // [rsp+60h] [rbp-51h]
  __int64 v16; // [rsp+68h] [rbp-49h]
  __int64 v17; // [rsp+70h] [rbp-41h]
  __int64 v18; // [rsp+78h] [rbp-39h]
  __int64 v19; // [rsp+80h] [rbp-31h]
  __int64 v20; // [rsp+88h] [rbp-29h]
  __int64 v21; // [rsp+90h] [rbp-21h]
  __int64 v22; // [rsp+98h] [rbp-19h]
  __int64 v23; // [rsp+A0h] [rbp-11h]
  __int64 v24; // [rsp+A8h] [rbp-9h]
  __int64 v25; // [rsp+B0h] [rbp-1h]
  __int64 v26; // [rsp+B8h] [rbp+7h]

  v25 = a11;
  v23 = a10;
  v21 = a9;
  v19 = a8;
  v17 = a7;
  v15 = a6;
  v13 = a5;
  v26 = 8LL;
  v24 = 4LL;
  v22 = 1LL;
  v20 = 2LL;
  v18 = 4LL;
  v16 = 4LL;
  v14 = 4LL;
  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, 0, 0, 9, (__int64)v12);
}
