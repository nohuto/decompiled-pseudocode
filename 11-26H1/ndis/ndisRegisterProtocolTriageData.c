/*
 * XREFs of ndisRegisterProtocolTriageData @ 0x1400BB718
 * Callers:
 *     NdisRegisterProtocol @ 0x1400BBFE0 (NdisRegisterProtocol.c)
 *     NdisRegisterProtocolDriver @ 0x1400BC420 (NdisRegisterProtocolDriver.c)
 * Callees:
 *     NdisConvertNtStatusToNdisStatus @ 0x14005C970 (NdisConvertNtStatusToNdisStatus.c)
 *     ??1?$out_param_t@V?$unique_ptr@VTriageData@@U?$KFreePoolNP@VTriageData@@@@@wistd@@@details@wil@@QEAA@XZ @ 0x140093148 (--1-$out_param_t@V-$unique_ptr@VTriageData@@U-$KFreePoolNP@VTriageData@@@@@wistd@@@details@wil@@.c)
 *     ?Make@?$ObjectTriageData@U_NDIS_PROTOCOL_BLOCK@@@@SAJPEAU_NDIS_PROTOCOL_BLOCK@@PEBU?$TriageDataCollector@U_NDIS_PROTOCOL_BLOCK@@@@_KPEAPEAVTriageData@@@Z @ 0x1400BAF64 (-Make@-$ObjectTriageData@U_NDIS_PROTOCOL_BLOCK@@@@SAJPEAU_NDIS_PROTOCOL_BLOCK@@PEBU-$TriageDataC.c)
 */

__int64 __fastcall ndisRegisterProtocolTriageData(__int64 a1, __int64 a2, TriageData *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // [rsp+20h] [rbp-60h] BYREF
  TriageData *v7; // [rsp+28h] [rbp-58h] BYREF
  char v8; // [rsp+30h] [rbp-50h]
  int v9; // [rsp+40h] [rbp-40h] BYREF
  bool (__fastcall *v10)(void *, TriageDataArray *); // [rsp+48h] [rbp-38h]
  int v11; // [rsp+50h] [rbp-30h]
  bool (__fastcall *v12)(__int64, TriageDataArray *); // [rsp+58h] [rbp-28h]
  int v13; // [rsp+60h] [rbp-20h]
  char (__fastcall *v14)(__int64, TriageDataArray *); // [rsp+68h] [rbp-18h]
  int v15; // [rsp+70h] [rbp-10h]
  char (__fastcall *v16)(__int64, TriageDataArray *); // [rsp+78h] [rbp-8h]

  v7 = 0LL;
  v9 = 1;
  v10 = StructSliceDataCollector<_NDIS_FILTER_BLOCK,0,128>::AddTriageBlocks;
  v11 = 1;
  v12 = StructSliceDataCollector<_NDIS_PROTOCOL_BLOCK,808,832>::AddTriageBlocks;
  v14 = UnicodeStringDataCollector<_NDIS_PROTOCOL_BLOCK,808>::AddTriageBlocks;
  v16 = UnicodeStringDataCollector<_NDIS_PROTOCOL_BLOCK,72>::AddTriageBlocks;
  v13 = 1;
  v15 = 1;
  v8 = 1;
  v6 = a1 + 888;
  v3 = ObjectTriageData<_NDIS_PROTOCOL_BLOCK>::Make(a1, &v9, a3, &v7);
  v4 = NdisConvertNtStatusToNdisStatus(v3);
  wil::details::out_param_t<wistd::unique_ptr<TriageData,KFreePoolNP<TriageData>>>::~out_param_t<wistd::unique_ptr<TriageData,KFreePoolNP<TriageData>>>((__int64)&v6);
  return v4;
}
