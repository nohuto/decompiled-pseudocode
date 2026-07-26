/*
 * XREFs of ndisRegisterFilterDriverTriageData @ 0x14009CB5C
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x14009D990 (NdisFRegisterFilterDriver.c)
 * Callees:
 *     NdisConvertNtStatusToNdisStatus @ 0x14005C970 (NdisConvertNtStatusToNdisStatus.c)
 *     ??1?$out_param_t@V?$unique_ptr@VTriageData@@U?$KFreePoolNP@VTriageData@@@@@wistd@@@details@wil@@QEAA@XZ @ 0x140093148 (--1-$out_param_t@V-$unique_ptr@VTriageData@@U-$KFreePoolNP@VTriageData@@@@@wistd@@@details@wil@@.c)
 *     ?Make@?$ObjectTriageData@U_NDIS_FILTER_DRIVER_BLOCK@@@@SAJPEAU_NDIS_FILTER_DRIVER_BLOCK@@PEBU?$TriageDataCollector@U_NDIS_FILTER_DRIVER_BLOCK@@@@_KPEAPEAVTriageData@@@Z @ 0x14009C1D4 (-Make@-$ObjectTriageData@U_NDIS_FILTER_DRIVER_BLOCK@@@@SAJPEAU_NDIS_FILTER_DRIVER_BLOCK@@PEBU-$T.c)
 */

__int64 __fastcall ndisRegisterFilterDriverTriageData(__int64 a1, __int64 a2, TriageData *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // [rsp+20h] [rbp-50h] BYREF
  TriageData *v7; // [rsp+28h] [rbp-48h] BYREF
  char v8; // [rsp+30h] [rbp-40h]
  int v9; // [rsp+38h] [rbp-38h] BYREF
  bool (__fastcall *v10)(void *, TriageDataArray *); // [rsp+40h] [rbp-30h]
  int v11; // [rsp+48h] [rbp-28h]
  bool (__fastcall *v12)(__int64, TriageDataArray *); // [rsp+50h] [rbp-20h]
  int v13; // [rsp+58h] [rbp-18h]
  void (__fastcall *v14)(struct _NDIS_FILTER_DRIVER_BLOCK *, struct TriageDataArray *, const struct BugcheckParameters *); // [rsp+60h] [rbp-10h]

  v13 = 5;
  v9 = 1;
  v10 = StructSliceDataCollector<_NDIS_FILTER_DRIVER_BLOCK,0,96>::AddTriageBlocks;
  v11 = 1;
  v12 = StructSliceDataCollector<_NDIS_FILTER_DRIVER_BLOCK,336,360>::AddTriageBlocks;
  v14 = FilterDriverCustomCollector::AddTriageBlocks;
  v8 = 1;
  v6 = a1 + 360;
  v7 = 0LL;
  v3 = ObjectTriageData<_NDIS_FILTER_DRIVER_BLOCK>::Make(a1, &v9, a3, &v7);
  v4 = NdisConvertNtStatusToNdisStatus(v3);
  wil::details::out_param_t<wistd::unique_ptr<TriageData,KFreePoolNP<TriageData>>>::~out_param_t<wistd::unique_ptr<TriageData,KFreePoolNP<TriageData>>>((__int64)&v6);
  return v4;
}
