/*
 * XREFs of ndisRegisterCommonOpenTriageData @ 0x1400BB678
 * Callers:
 *     NdisOpenAdapterEx @ 0x1401758D0 (NdisOpenAdapterEx.c)
 * Callees:
 *     NdisConvertNtStatusToNdisStatus @ 0x14005C970 (NdisConvertNtStatusToNdisStatus.c)
 *     ?Make@?$ObjectTriageData@U_NDIS_COMMON_OPEN_BLOCK@@@@SAJPEAU_NDIS_COMMON_OPEN_BLOCK@@PEBU?$TriageDataCollector@U_NDIS_COMMON_OPEN_BLOCK@@@@_KPEAPEAVTriageData@@@Z @ 0x1400BAD44 (-Make@-$ObjectTriageData@U_NDIS_COMMON_OPEN_BLOCK@@@@SAJPEAU_NDIS_COMMON_OPEN_BLOCK@@PEBU-$Triag.c)
 */

__int64 __fastcall ndisRegisterCommonOpenTriageData(__int64 a1, __int64 a2, TriageData *a3)
{
  int v3; // eax
  int v5; // [rsp+20h] [rbp-19h] BYREF
  bool (__fastcall *v6)(void *, TriageDataArray *); // [rsp+28h] [rbp-11h]
  int v7; // [rsp+30h] [rbp-9h]
  bool (__fastcall *v8)(__int64, TriageDataArray *); // [rsp+38h] [rbp-1h]
  int v9; // [rsp+40h] [rbp+7h]
  bool (__fastcall *v10)(__int64, TriageDataArray *); // [rsp+48h] [rbp+Fh]
  int v11; // [rsp+50h] [rbp+17h]
  bool (__fastcall *v12)(__int64, TriageDataArray *); // [rsp+58h] [rbp+1Fh]
  int v13; // [rsp+60h] [rbp+27h]
  void (__fastcall *v14)(__int64, TriageDataArray *); // [rsp+68h] [rbp+2Fh]
  int v15; // [rsp+70h] [rbp+37h]
  bool (__fastcall *v16)(__int64, TriageDataArray *); // [rsp+78h] [rbp+3Fh]
  int v17; // [rsp+80h] [rbp+47h]
  char (__fastcall *v18)(__int64, TriageDataArray *); // [rsp+88h] [rbp+4Fh]

  v13 = 3;
  v5 = 1;
  v6 = StructSliceDataCollector<_NDIS_FILTER_BLOCK,0,128>::AddTriageBlocks;
  v7 = 1;
  v8 = StructSliceDataCollector<_NDIS_COMMON_OPEN_BLOCK,228,268>::AddTriageBlocks;
  v10 = StructSliceDataCollector<_NDIS_COMMON_OPEN_BLOCK,392,440>::AddTriageBlocks;
  v12 = StructFieldDataCollector<_NDIS_COMMON_OPEN_BLOCK,NDIS_NBL_TRACKER_HANDLE__ *,584>::AddTriageBlocks;
  v14 = NblTrackerCollector<_NDIS_COMMON_OPEN_BLOCK>::AddTriageBlocks;
  v16 = StructFieldDataCollector<_NDIS_COMMON_OPEN_BLOCK,NDIS_BIND_PROTOCOL_LINK *,856>::AddTriageBlocks;
  v9 = 1;
  v11 = 1;
  v15 = 1;
  v17 = 1;
  v18 = EmbeddedPointerDataCollector<_NDIS_COMMON_OPEN_BLOCK,NDIS_BIND_PROTOCOL_LINK *,856>::AddTriageBlocks;
  v3 = ObjectTriageData<_NDIS_COMMON_OPEN_BLOCK>::Make(a1, &v5, a3, (TriageData **)(a1 + 1024));
  return NdisConvertNtStatusToNdisStatus(v3);
}
