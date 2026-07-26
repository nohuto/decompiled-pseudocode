/*
 * XREFs of ndisRegisterMiniportTriageData @ 0x14009480C
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x14017AAB0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     ??1?$out_param_t@V?$unique_ptr@VTriageData@@U?$KFreePoolNP@VTriageData@@@@@wistd@@@details@wil@@QEAA@XZ @ 0x140093148 (--1-$out_param_t@V-$unique_ptr@VTriageData@@U-$KFreePoolNP@VTriageData@@@@@wistd@@@details@wil@@.c)
 *     ?Make@?$ObjectTriageData@U_NDIS_MINIPORT_BLOCK@@@@SAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU?$TriageDataCollector@U_NDIS_MINIPORT_BLOCK@@@@_KPEAPEAVTriageData@@@Z @ 0x140093E88 (-Make@-$ObjectTriageData@U_NDIS_MINIPORT_BLOCK@@@@SAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU-$TriageDataC.c)
 */

__int64 __fastcall ndisRegisterMiniportTriageData(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // [rsp+20h] [rbp-E0h] BYREF
  TriageData *v4; // [rsp+28h] [rbp-D8h] BYREF
  char v5; // [rsp+30h] [rbp-D0h]
  int v6; // [rsp+40h] [rbp-C0h] BYREF
  bool (__fastcall *v7)(void *, TriageDataArray *); // [rsp+48h] [rbp-B8h]
  int v8; // [rsp+50h] [rbp-B0h]
  bool (__fastcall *v9)(__int64, TriageDataArray *); // [rsp+58h] [rbp-A8h]
  int v10; // [rsp+60h] [rbp-A0h]
  bool (__fastcall *v11)(__int64, TriageDataArray *); // [rsp+68h] [rbp-98h]
  int v12; // [rsp+70h] [rbp-90h]
  char (__fastcall *v13)(__int64, TriageDataArray *); // [rsp+78h] [rbp-88h]
  int v14; // [rsp+80h] [rbp-80h]
  bool (__fastcall *v15)(__int64, TriageDataArray *); // [rsp+88h] [rbp-78h]
  int v16; // [rsp+90h] [rbp-70h]
  bool (__fastcall *v17)(__int64, TriageDataArray *); // [rsp+98h] [rbp-68h]
  int v18; // [rsp+A0h] [rbp-60h]
  bool (__fastcall *v19)(__int64, TriageDataArray *); // [rsp+A8h] [rbp-58h]
  int v20; // [rsp+B0h] [rbp-50h]
  bool (__fastcall *v21)(__int64, TriageDataArray *); // [rsp+B8h] [rbp-48h]
  int v22; // [rsp+C0h] [rbp-40h]
  bool (__fastcall *v23)(__int64, TriageDataArray *); // [rsp+C8h] [rbp-38h]
  int v24; // [rsp+D0h] [rbp-30h]
  bool (__fastcall *v25)(__int64, TriageDataArray *); // [rsp+D8h] [rbp-28h]
  int v26; // [rsp+E0h] [rbp-20h]
  bool (__fastcall *v27)(__int64, TriageDataArray *); // [rsp+E8h] [rbp-18h]
  int v28; // [rsp+F0h] [rbp-10h]
  bool (__fastcall *v29)(__int64, TriageDataArray *); // [rsp+F8h] [rbp-8h]
  int v30; // [rsp+100h] [rbp+0h]
  bool (__fastcall *v31)(__int64, TriageDataArray *); // [rsp+108h] [rbp+8h]
  int v32; // [rsp+110h] [rbp+10h]
  bool (__fastcall *v33)(__int64, TriageDataArray *); // [rsp+118h] [rbp+18h]
  int v34; // [rsp+120h] [rbp+20h]
  bool (__fastcall *v35)(__int64, TriageDataArray *); // [rsp+128h] [rbp+28h]
  int v36; // [rsp+130h] [rbp+30h]
  bool (__fastcall *v37)(__int64, TriageDataArray *); // [rsp+138h] [rbp+38h]
  int v38; // [rsp+140h] [rbp+40h]
  bool (__fastcall *v39)(__int64, TriageDataArray *); // [rsp+148h] [rbp+48h]
  int v40; // [rsp+150h] [rbp+50h]
  bool (__fastcall *v41)(__int64, TriageDataArray *); // [rsp+158h] [rbp+58h]
  int v42; // [rsp+160h] [rbp+60h]
  bool (__fastcall *v43)(__int64, TriageDataArray *); // [rsp+168h] [rbp+68h]
  int v44; // [rsp+170h] [rbp+70h]
  bool (__fastcall *v45)(__int64, TriageDataArray *); // [rsp+178h] [rbp+78h]
  int v46; // [rsp+180h] [rbp+80h]
  bool (__fastcall *v47)(__int64, TriageDataArray *); // [rsp+188h] [rbp+88h]
  int v48; // [rsp+190h] [rbp+90h]
  bool (__fastcall *v49)(__int64, TriageDataArray *); // [rsp+198h] [rbp+98h]
  int v50; // [rsp+1A0h] [rbp+A0h]
  void (__fastcall *v51)(__int64, TriageDataArray *); // [rsp+1A8h] [rbp+A8h]
  int v52; // [rsp+1B0h] [rbp+B0h]
  bool (__fastcall *v53)(__int64, TriageDataArray *); // [rsp+1B8h] [rbp+B8h]
  int v54; // [rsp+1C0h] [rbp+C0h]
  bool (__fastcall *v55)(__int64, TriageDataArray *); // [rsp+1C8h] [rbp+C8h]
  int v56; // [rsp+1D0h] [rbp+D0h]
  bool (__fastcall *v57)(__int64, TriageDataArray *); // [rsp+1D8h] [rbp+D8h]
  int v58; // [rsp+1E0h] [rbp+E0h]
  bool (__fastcall *v59)(__int64, TriageDataArray *); // [rsp+1E8h] [rbp+E8h]
  int v60; // [rsp+1F0h] [rbp+F0h]
  char (__fastcall *v61)(__int64, TriageDataArray *); // [rsp+1F8h] [rbp+F8h]
  int v62; // [rsp+200h] [rbp+100h]
  char (__fastcall *v63)(__int64, TriageDataArray *); // [rsp+208h] [rbp+108h]
  int v64; // [rsp+210h] [rbp+110h]
  char (__fastcall *v65)(__int64, TriageDataArray *); // [rsp+218h] [rbp+118h]
  int v66; // [rsp+220h] [rbp+120h]
  char (__fastcall *v67)(__int64, TriageDataArray *); // [rsp+228h] [rbp+128h]
  int v68; // [rsp+230h] [rbp+130h]
  char (__fastcall *v69)(__int64, TriageDataArray *); // [rsp+238h] [rbp+138h]
  int v70; // [rsp+240h] [rbp+140h]
  bool (__fastcall *v71)(__int64, TriageDataArray *); // [rsp+248h] [rbp+148h]
  int v72; // [rsp+250h] [rbp+150h]
  void (__fastcall *v73)(struct _NDIS_MINIPORT_BLOCK *, struct TriageDataArray *, const struct BugcheckParameters *); // [rsp+258h] [rbp+158h]
  int v74; // [rsp+260h] [rbp+160h]
  void (__fastcall *v75)(__int64, TriageDataArray *); // [rsp+268h] [rbp+168h]

  v50 = 3;
  v6 = 1;
  v7 = StructSliceDataCollector<_NDIS_FILTER_BLOCK,0,128>::AddTriageBlocks;
  v9 = StructFieldDataCollector<_NDIS_MINIPORT_BLOCK,enum _NET_IF_MEDIA_CONNECT_STATE,344>::AddTriageBlocks;
  v11 = StructFieldDataCollector<_NDIS_MINIPORT_BLOCK,_UNICODE_STRING,360>::AddTriageBlocks;
  v13 = UnicodeStringDataCollector<_NDIS_MINIPORT_BLOCK,360>::AddTriageBlocks;
  v15 = StructFieldDataCollector<_NDIS_MINIPORT_BLOCK,enum _NDIS_MEDIUM,464>::AddTriageBlocks;
  v17 = StructFieldDataCollector<_NDIS_MINIPORT_BLOCK,enum _NET_IF_MEDIA_CONNECT_STATE,480>::AddTriageBlocks;
  v19 = StructFieldDataCollector<_NDIS_MINIPORT_BLOCK,int,540>::AddTriageBlocks;
  v21 = StructFieldDataCollector<_NDIS_MINIPORT_BLOCK,unsigned char,930>::AddTriageBlocks;
  v23 = StructSliceDataCollector<_NDIS_MINIPORT_BLOCK,1520,1528>::AddTriageBlocks;
  v25 = StructSliceDataCollector<_NDIS_MINIPORT_BLOCK,1784,1788>::AddTriageBlocks;
  v27 = StructFieldDataCollector<_NDIS_MINIPORT_BLOCK,unsigned long,1800>::AddTriageBlocks;
  v29 = StructFieldDataCollector<_NDIS_MINIPORT_BLOCK,enum _NDIS_PHYSICAL_MEDIUM,1832>::AddTriageBlocks;
  v31 = StructSliceDataCollector<_NDIS_MINIPORT_BLOCK,2040,2056>::AddTriageBlocks;
  v33 = StructSliceDataCollector<_NDIS_MINIPORT_BLOCK,2192,2232>::AddTriageBlocks;
  v35 = StructFieldDataCollector<_NDIS_MINIPORT_BLOCK,enum _NDIS_MINIPORT_STATE,2248>::AddTriageBlocks;
  v37 = StructFieldDataCollector<_NDIS_MINIPORT_BLOCK,unsigned long,2684>::AddTriageBlocks;
  v39 = StructFieldDataCollector<_NDIS_MINIPORT_BLOCK,unsigned long,3688>::AddTriageBlocks;
  v41 = StructFieldDataCollector<_NDIS_MINIPORT_BLOCK,_NDIS_M_DRIVER_BLOCK *,3760>::AddTriageBlocks;
  v43 = StructSliceDataCollector<_NDIS_MINIPORT_BLOCK,3776,3888>::AddTriageBlocks;
  v45 = StructFieldDataCollector<_NDIS_MINIPORT_BLOCK,_NDIS_IF_BLOCK *,4040>::AddTriageBlocks;
  v47 = StructSliceDataCollector<_NDIS_MINIPORT_BLOCK,4060,4072>::AddTriageBlocks;
  v49 = StructFieldDataCollector<_NDIS_MINIPORT_BLOCK,NDIS_NBL_TRACKER_HANDLE__ *,4080>::AddTriageBlocks;
  v51 = NblTrackerCollector<_NDIS_MINIPORT_BLOCK>::AddTriageBlocks;
  v53 = StructFieldDataCollector<_NDIS_MINIPORT_BLOCK,unsigned long,4248>::AddTriageBlocks;
  v55 = StructSliceDataCollector<_NDIS_MINIPORT_BLOCK,4416,4464>::AddTriageBlocks;
  v57 = StructFieldDataCollector<_NDIS_MINIPORT_BLOCK,NDIS_EVENT_LOG_HANDLE__ *,4472>::AddTriageBlocks;
  v8 = 1;
  v10 = 1;
  v12 = 1;
  v14 = 1;
  v16 = 1;
  v18 = 1;
  v20 = 1;
  v22 = 1;
  v24 = 1;
  v26 = 1;
  v28 = 1;
  v30 = 1;
  v32 = 1;
  v34 = 1;
  v36 = 1;
  v38 = 1;
  v40 = 1;
  v42 = 1;
  v44 = 1;
  v46 = 1;
  v48 = 1;
  v52 = 1;
  v54 = 1;
  v56 = 1;
  v58 = 1;
  v59 = StructSliceDataCollector<_NDIS_MINIPORT_BLOCK,5016,5240>::AddTriageBlocks;
  v70 = 2;
  v61 = EmbeddedPointerDataCollector<_NDIS_MINIPORT_BLOCK,_DEVICE_OBJECT *,3832>::AddTriageBlocks;
  v72 = 2;
  v63 = EmbeddedPointerDataCollector<_NDIS_MINIPORT_BLOCK,_DEVICE_OBJECT *,3824>::AddTriageBlocks;
  v60 = 1;
  v65 = EmbeddedPointerDataCollector<_NDIS_MINIPORT_BLOCK,_DEVICE_OBJECT *,3840>::AddTriageBlocks;
  v67 = EmbeddedPointerDataCollector<_NDIS_MINIPORT_BLOCK,_NDIS_MINIPORT_AOAC *,4456>::AddTriageBlocks;
  v69 = EmbeddedPointerDataCollector<_NDIS_MINIPORT_BLOCK,_NDIS_SELECTIVE_SUSPEND *,4448>::AddTriageBlocks;
  v71 = UnicodeStringPointerDataCollector<_NDIS_MINIPORT_BLOCK,_UNICODE_STRING *,3856>::AddTriageBlocks;
  v73 = MiniportCustomCollector::AddTriageBlocks;
  v75 = OidRequestQueueCollector<_NDIS_MINIPORT_BLOCK>::AddTriageBlocks;
  v3 = a1 + 6120;
  v62 = 1;
  v64 = 1;
  v66 = 1;
  v68 = 1;
  v74 = 11;
  v4 = 0LL;
  v5 = 1;
  v1 = ObjectTriageData<_NDIS_MINIPORT_BLOCK>::Make(a1, &v6, (TriageData *)1, &v4);
  wil::details::out_param_t<wistd::unique_ptr<TriageData,KFreePoolNP<TriageData>>>::~out_param_t<wistd::unique_ptr<TriageData,KFreePoolNP<TriageData>>>((__int64)&v3);
  return v1;
}
