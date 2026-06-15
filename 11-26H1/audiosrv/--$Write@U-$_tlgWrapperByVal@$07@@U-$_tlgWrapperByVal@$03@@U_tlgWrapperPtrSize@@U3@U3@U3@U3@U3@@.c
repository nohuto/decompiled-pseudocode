/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U_tlgWrapperPtrSize@@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperPtrSize@@55555@Z @ 0x18000130C
 * Callers:
 *     ?CompareStreamingEffectsOverrideProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProcessingModeParameters@@PEAW4PMP_MATCH_TYPE@@@Z @ 0x180070320 (-CompareStreamingEffectsOverrideProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProc.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18004EB10 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        __int64 *a8,
        __int64 *a9,
        __int64 *a10,
        __int64 *a11,
        __int64 *a12)
{
  _BYTE v13[32]; // [rsp+30h] [rbp-99h] BYREF
  __int64 v14; // [rsp+50h] [rbp-79h]
  __int64 v15; // [rsp+58h] [rbp-71h]
  __int64 v16; // [rsp+60h] [rbp-69h]
  __int64 v17; // [rsp+68h] [rbp-61h]
  __int64 v18; // [rsp+70h] [rbp-59h]
  int v19; // [rsp+78h] [rbp-51h]
  int v20; // [rsp+7Ch] [rbp-4Dh]
  __int64 v21; // [rsp+80h] [rbp-49h]
  int v22; // [rsp+88h] [rbp-41h]
  int v23; // [rsp+8Ch] [rbp-3Dh]
  __int64 v24; // [rsp+90h] [rbp-39h]
  int v25; // [rsp+98h] [rbp-31h]
  int v26; // [rsp+9Ch] [rbp-2Dh]
  __int64 v27; // [rsp+A0h] [rbp-29h]
  int v28; // [rsp+A8h] [rbp-21h]
  int v29; // [rsp+ACh] [rbp-1Dh]
  __int64 v30; // [rsp+B0h] [rbp-19h]
  int v31; // [rsp+B8h] [rbp-11h]
  int v32; // [rsp+BCh] [rbp-Dh]
  __int64 v33; // [rsp+C0h] [rbp-9h]
  int v34; // [rsp+C8h] [rbp-1h]
  int v35; // [rsp+CCh] [rbp+3h]

  v17 = 4LL;
  v35 = 0;
  v32 = 0;
  v29 = 0;
  v33 = *a12;
  v34 = *((_DWORD *)a12 + 2);
  v26 = 0;
  v23 = 0;
  v30 = *a11;
  v31 = *((_DWORD *)a11 + 2);
  v20 = 0;
  v15 = 8LL;
  v27 = *a10;
  v28 = *((_DWORD *)a10 + 2);
  v24 = *a9;
  v25 = *((_DWORD *)a9 + 2);
  v21 = *a8;
  v22 = *((_DWORD *)a8 + 2);
  v18 = *a7;
  v19 = *((_DWORD *)a7 + 2);
  v16 = a6;
  v14 = a5;
  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, 0, 0, 10, (__int64)v13);
}
