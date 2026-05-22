/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U_tlgWrapperPtrSize@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU_tlgWrapperPtrSize@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180009A20
 * Callers:
 *     ?DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_K1PEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z @ 0x1801CF798 (-DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_K1PEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000BEAC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperPtrSize,_tlgWrapperByVal<8>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8,
        __int64 a9)
{
  _BYTE v10[32]; // [rsp+30h] [rbp-51h] BYREF
  __int64 v11; // [rsp+50h] [rbp-31h]
  __int64 v12; // [rsp+58h] [rbp-29h]
  __int64 v13; // [rsp+60h] [rbp-21h]
  __int64 v14; // [rsp+68h] [rbp-19h]
  __int64 v15; // [rsp+70h] [rbp-11h]
  __int64 v16; // [rsp+78h] [rbp-9h]
  __int64 v17; // [rsp+80h] [rbp-1h]
  int v18; // [rsp+88h] [rbp+7h]
  int v19; // [rsp+8Ch] [rbp+Bh]
  __int64 v20; // [rsp+90h] [rbp+Fh]
  __int64 v21; // [rsp+98h] [rbp+17h]

  v20 = a9;
  v21 = 8LL;
  v17 = *a8;
  v18 = *((_DWORD *)a8 + 2);
  v15 = a7;
  v13 = a6;
  v11 = a5;
  v19 = 0;
  v16 = 4LL;
  v14 = 4LL;
  v12 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer(&dword_180251328, a2, 0LL, 0LL, 7, v10);
}
