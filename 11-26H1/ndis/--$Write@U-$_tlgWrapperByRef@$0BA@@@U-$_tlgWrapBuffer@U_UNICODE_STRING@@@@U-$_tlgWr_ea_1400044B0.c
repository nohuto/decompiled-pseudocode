/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1400044B0
 * Callers:
 *     ??1MiniportRemoveDeviceTelemetry@AzTelemetry@@UEAA@XZ @ 0x1400E6DE4 (--1MiniportRemoveDeviceTelemetry@AzTelemetry@@UEAA@XZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14001DD30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        unsigned __int16 **a6,
        __int64 a7)
{
  int v7; // ecx
  _BYTE v9[32]; // [rsp+30h] [rbp-31h] BYREF
  __int64 v10; // [rsp+50h] [rbp-11h]
  __int64 v11; // [rsp+58h] [rbp-9h]
  _DWORD *v12; // [rsp+60h] [rbp-1h]
  __int64 v13; // [rsp+68h] [rbp+7h]
  __int64 v14; // [rsp+70h] [rbp+Fh]
  _DWORD v15[2]; // [rsp+78h] [rbp+17h] BYREF
  __int64 v16; // [rsp+80h] [rbp+1Fh]
  __int64 v17; // [rsp+88h] [rbp+27h]

  v16 = a7;
  v12 = v15;
  v17 = 8LL;
  v13 = 2LL;
  v7 = **a6;
  v14 = *((_QWORD *)*a6 + 1);
  v15[0] = v7;
  v15[1] = 0;
  v11 = 16LL;
  v10 = *a5;
  return tlgWriteTransfer_EtwWriteTransfer(&dword_14011C6C0, a2, a3, 0LL, 6, v9);
}
