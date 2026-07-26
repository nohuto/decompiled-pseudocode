/*
 * XREFs of ndisRegisterFilterTriageData @ 0x14009A5D0
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14017C1A0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     NdisConvertNtStatusToNdisStatus @ 0x14005C970 (NdisConvertNtStatusToNdisStatus.c)
 *     ??1?$out_param_t@V?$unique_ptr@VTriageData@@U?$KFreePoolNP@VTriageData@@@@@wistd@@@details@wil@@QEAA@XZ @ 0x140093148 (--1-$out_param_t@V-$unique_ptr@VTriageData@@U-$KFreePoolNP@VTriageData@@@@@wistd@@@details@wil@@.c)
 *     ?Make@?$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@SAJPEAU_NDIS_FILTER_BLOCK@@PEBU?$TriageDataCollector@U_NDIS_FILTER_BLOCK@@@@_KPEAPEAVTriageData@@@Z @ 0x14009A3B0 (-Make@-$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@SAJPEAU_NDIS_FILTER_BLOCK@@PEBU-$TriageDataColle.c)
 */

__int64 __fastcall ndisRegisterFilterTriageData(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v4; // [rsp+20h] [rbp-49h] BYREF
  TriageData *v5; // [rsp+28h] [rbp-41h] BYREF
  char v6; // [rsp+30h] [rbp-39h]
  int v7; // [rsp+40h] [rbp-29h] BYREF
  bool (__fastcall *v8)(void *, TriageDataArray *); // [rsp+48h] [rbp-21h]
  int v9; // [rsp+50h] [rbp-19h]
  bool (__fastcall *v10)(__int64, TriageDataArray *); // [rsp+58h] [rbp-11h]
  int v11; // [rsp+60h] [rbp-9h]
  bool (__fastcall *v12)(__int64, TriageDataArray *); // [rsp+68h] [rbp-1h]
  int v13; // [rsp+70h] [rbp+7h]
  bool (__fastcall *v14)(__int64, TriageDataArray *); // [rsp+78h] [rbp+Fh]
  int v15; // [rsp+80h] [rbp+17h]
  void (__fastcall *v16)(__int64, TriageDataArray *); // [rsp+88h] [rbp+1Fh]
  int v17; // [rsp+90h] [rbp+27h]
  char (__fastcall *v18)(__int64, TriageDataArray *); // [rsp+98h] [rbp+2Fh]
  int v19; // [rsp+A0h] [rbp+37h]
  char (__fastcall *v20)(__int64, TriageDataArray *); // [rsp+A8h] [rbp+3Fh]
  int v21; // [rsp+B0h] [rbp+47h]
  void (__fastcall *v22)(__int64, TriageDataArray *); // [rsp+B8h] [rbp+4Fh]

  v15 = 3;
  v7 = 1;
  v8 = StructSliceDataCollector<_NDIS_FILTER_BLOCK,0,128>::AddTriageBlocks;
  v9 = 1;
  v10 = StructSliceDataCollector<_NDIS_FILTER_BLOCK,160,184>::AddTriageBlocks;
  v17 = 2;
  v12 = StructSliceDataCollector<_NDIS_FILTER_BLOCK,312,377>::AddTriageBlocks;
  v14 = StructFieldDataCollector<_NDIS_FILTER_BLOCK,NDIS_NBL_TRACKER_HANDLE__ *,648>::AddTriageBlocks;
  v16 = NblTrackerCollector<_NDIS_FILTER_BLOCK>::AddTriageBlocks;
  v18 = UnicodeStringPointerDataCollector<_NDIS_FILTER_BLOCK,wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>,40>::AddTriageBlocks;
  v20 = UnicodeStringPointerDataCollector<_NDIS_FILTER_BLOCK,_UNICODE_STRING *,48>::AddTriageBlocks;
  v22 = OidRequestQueueCollector<_NDIS_FILTER_BLOCK>::AddTriageBlocks;
  v19 = 2;
  v4 = a1 + 1416;
  v11 = 1;
  v13 = 1;
  v21 = 11;
  v5 = 0LL;
  v6 = 1;
  v1 = ObjectTriageData<_NDIS_FILTER_BLOCK>::Make(a1, &v7, (TriageData *)1, &v5);
  v2 = NdisConvertNtStatusToNdisStatus(v1);
  wil::details::out_param_t<wistd::unique_ptr<TriageData,KFreePoolNP<TriageData>>>::~out_param_t<wistd::unique_ptr<TriageData,KFreePoolNP<TriageData>>>((__int64)&v4);
  return v2;
}
