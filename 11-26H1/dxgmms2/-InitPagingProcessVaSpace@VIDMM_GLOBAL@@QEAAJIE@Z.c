/*
 * XREFs of ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1400E2908
 * Callers:
 *     ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x140037B00 (-NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1400A320C (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D09E8 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400E4500 (-RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140038D60 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     VidSchRecommitSchedulingLogs @ 0x14003B13C (VidSchRecommitSchedulingLogs.c)
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x14003B2E8 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     ?VidMmGetFullPfnArray@@YAPEB_KPEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14003E1A4 (-VidMmGetFullPfnArray@@YAPEB_KPEBUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z @ 0x140041F78 (-EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z.c)
 *     VidSchCreateHwQueue @ 0x14004A8B0 (VidSchCreateHwQueue.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x14004CE78 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     Feature_NotifyResidency2__private_ReportDeviceUsage @ 0x14004F254 (Feature_NotifyResidency2__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     VidSchSetHwQueueProgressFenceObject @ 0x1400995B0 (VidSchSetHwQueueProgressFenceObject.c)
 *     ?ComputeMaxPageTableSizeForPagingProcess@@YAIPEAUVIDMM_PHYSICAL_ADAPTER@@I@Z @ 0x14009A93C (-ComputeMaxPageTableSizeForPagingProcess@@YAIPEAUVIDMM_PHYSICAL_ADAPTER@@I@Z.c)
 *     ?RecommitSystemFenceGpuVA@VIDMM_GLOBAL@@QEAAJI@Z @ 0x1400A5F00 (-RecommitSystemFenceGpuVA@VIDMM_GLOBAL@@QEAAJI@Z.c)
 *     ?MapPagingQueueGpuVAs@VIDMM_DEVICE@@QEAAJI@Z @ 0x1400A7564 (-MapPagingQueueGpuVAs@VIDMM_DEVICE@@QEAAJI@Z.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAVCVirtualAddressAllocator@@PEAUVIDMM_VAD@@_K2IPEAX2W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@222K@Z @ 0x1400A955C (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAVCVirtualAddressAllocator@@PEAUVIDMM_VAD@@_K2IPEAX2W4VIDMM_VAD.c)
 *     ?QueryPagingProcessInfo@VIDMM_GLOBAL@@QEAAXPEA_KPEA_N1PEAI2@Z @ 0x1400AAC38 (-QueryPagingProcessInfo@VIDMM_GLOBAL@@QEAAXPEA_KPEA_N1PEAI2@Z.c)
 *     VidSchGetSchedulingLogSize @ 0x1400C427C (VidSchGetSchedulingLogSize.c)
 *     ?VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z @ 0x1400CB2A0 (-VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z.c)
 *     ?MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1400CB2CC (-MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1400CBDB4 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ??2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z @ 0x1400CC4C8 (--2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x1400CC7D4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1400D9B1C (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400DA3C8 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400E499C (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?GetPageDirectoryData@CVirtualAddressAllocator@@QEBAXIPEA_KPEAI10@Z @ 0x140104750 (-GetPageDirectoryData@CVirtualAddressAllocator@@QEBAXIPEA_KPEAI10@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x140105A6C (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     VidSchSetPagingNodePageDirectory @ 0x14011A5DC (VidSchSetPagingNodePageDirectory.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitPagingProcessVaSpace(VIDMM_GLOBAL *this, unsigned int a2, char a3)
{
  __int64 v3; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r15
  DXGADAPTER *v7; // rcx
  char v8; // cl
  __int64 v9; // rcx
  int HwQueue; // esi
  __int64 v12; // rax
  __int64 v13; // r14
  bool v14; // zf
  unsigned __int64 v15; // rdx
  CVirtualAddressAllocator *v16; // r13
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  __int64 v21; // rsi
  unsigned __int64 v22; // rsi
  __int64 v23; // rax
  unsigned __int64 v24; // r14
  __int64 v25; // rcx
  PVOID v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rsi
  int v32; // eax
  __int64 *v33; // r9
  __int64 v34; // rdx
  PVOID v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r9
  VIDMM_MAPPED_VA_RANGE *v38; // r14
  __int64 v39; // rcx
  unsigned int v40; // edx
  unsigned __int64 v41; // r9
  int v42; // r8d
  struct _RTL_AVL_TREE **v43; // rcx
  struct _RTL_AVL_TREE *v44; // r15
  __int64 v45; // rcx
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // r15
  struct _RTL_AVL_TREE *v49; // rsi
  __int64 LogicalAddress; // rax
  const struct VIDMM_GLOBAL_ALLOC *v51; // rcx
  unsigned __int64 v52; // r14
  __int64 v53; // rsi
  const unsigned __int64 *FullPfnArray; // rax
  __int64 v55; // rcx
  unsigned __int64 *v56; // r9
  int v57; // eax
  unsigned __int64 v58; // rdi
  int v59; // eax
  unsigned int v60; // r14d
  __int64 v61; // rcx
  unsigned __int64 v62; // [rsp+50h] [rbp-B0h]
  unsigned int v63[2]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v64; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v65[2]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v66; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v67; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v68; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v69; // [rsp+B0h] [rbp-50h] BYREF
  VIDMM_MAPPED_VA_RANGE *v70; // [rsp+B8h] [rbp-48h]
  struct _DXGKARG_QUERYADAPTERINFO v71[2]; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v72[5]; // [rsp+120h] [rbp+20h] BYREF
  struct VIDMM_ALLOC *v73; // [rsp+180h] [rbp+80h] BYREF
  unsigned int v74; // [rsp+188h] [rbp+88h] BYREF
  char v75; // [rsp+190h] [rbp+90h]
  struct _RTL_AVL_TREE *v76; // [rsp+198h] [rbp+98h] BYREF

  v75 = a3;
  v74 = a2;
  v3 = *((_QWORD *)this + 5040);
  v5 = 0LL;
  v64 = 0LL;
  v6 = *(_QWORD *)(v3 + 8LL * a2);
  v69 = v6;
  v66 = 0;
  Feature_NotifyResidency2__private_ReportDeviceUsage();
  v7 = (DXGADAPTER *)*((_QWORD *)this + 3);
  v71[0].pInputData = &v74;
  *(_QWORD *)&v71[0].Type = 48LL;
  v71[0].pOutputData = &v66;
  *(_QWORD *)&v71[0].InputDataSize = 4LL;
  v71[0].hKmdProcessHandle = 0LL;
  *(_QWORD *)&v71[0].OutputDataSize = 4LL;
  if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v7, v71) >= 0 )
  {
    v5 = (unsigned __int64)v66 << 20;
    v64 = v5;
  }
  v8 = *(_BYTE *)(v6 + 556);
  if ( v8 < 0 && (*(_BYTE *)(v6 + 557) & 1) != 0 )
    goto LABEL_10;
  if ( !*(_BYTE *)(*((_QWORD *)this + 3) + 3079LL) || (v8 & 4) == 0 )
  {
    if ( *(_DWORD *)(v6 + 544) != 1 && !v5 && !*(_BYTE *)(*((_QWORD *)this + 2) + 1880LL) )
      return 0LL;
LABEL_10:
    if ( (v8 & 4) == 0 )
      goto LABEL_15;
  }
  if ( (*(_BYTE *)(v6 + 557) & 4) == 0 )
    return 0LL;
  if ( (unsigned int)(dword_14008A4E8 - 1) > 0x3D )
  {
    WdLogSingleEntry1(1LL, (unsigned int)dword_14008A4E8);
    WdLogGlobalForLineNumber = 9265;
LABEL_14:
    DxgkLogInternalTriageEvent(v9, 0x40000LL);
    return 3221225485LL;
  }
LABEL_15:
  HwQueue = 0;
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
  {
    v12 = *((_QWORD *)this + 2);
    v13 = v74;
    *((_BYTE *)this + 41068) = 1;
    v14 = (*(_BYTE *)(v6 + 556) & 4) == 0;
    v15 = *(_QWORD *)(v12 + 744);
    v16 = (CVirtualAddressAllocator *)*((_QWORD *)this + v13 + 5068);
    v67 = v15;
    v70 = 0LL;
    if ( !v14 )
    {
      if ( v75 )
      {
        CVirtualAddressAllocator::EvictRootPageTable(v16, v13, 0);
        LODWORD(v13) = v74;
      }
      if ( !*((_QWORD *)this + 5136) )
      {
        v68 = 0LL;
        LOBYTE(v73) = 0;
        LOBYTE(v76) = 0;
        v65[0] = 0;
        v63[0] = 0;
        VIDMM_GLOBAL::QueryPagingProcessInfo(this, &v68, (bool *)&v73, (bool *)&v76, v65, v63);
        if ( v65[0] )
        {
          v22 = (unsigned __int64)v65[0] << 20;
        }
        else
        {
          v18 = *((_QWORD *)this + 2);
          v19 = 0x800000LL;
          if ( *(_BYTE *)(v18 + 1880) )
            v19 = (unsigned int)VidSchGetSchedulingLogSize(*(_QWORD *)(v18 + 744)) + 0x800000LL;
          if ( (_BYTE)v76 )
            v19 += v63[0];
          v20 = v19 + (v68 >> 2);
          v21 = 1LL << dword_14008A4E8;
          if ( v20 < 1LL << dword_14008A4E8 )
            v21 = v20;
          v22 = (v21 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
        }
        if ( (_BYTE)v73 )
        {
          v23 = (*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * (unsigned int)v13) + 296LL) << 12) - 1LL;
          v22 = ~v23 & (v23 + v22);
          v24 = 2 * v22;
        }
        else
        {
          v24 = v22;
        }
        if ( v64 )
          v24 = v64;
        if ( v24 > *((_QWORD *)v16 + 2) )
        {
          *((_BYTE *)this + 41068) = 0;
          WdLogSingleEntry1(1LL, v24);
          WdLogGlobalForLineNumber = 9392;
          goto LABEL_14;
        }
        *((_QWORD *)this + 5139) = v24;
        if ( (_BYTE)v76 )
        {
          v64 = 0LL;
          LODWORD(v76) = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
                           (struct _KTHREAD **)v16,
                           v63[0],
                           v17,
                           0LL,
                           0LL,
                           0x1000u,
                           &v64);
          if ( (int)v76 < 0 )
          {
            WdLogSingleEntry1(1LL, v63[0]);
            WdLogGlobalForLineNumber = 9410;
LABEL_46:
            DxgkLogInternalTriageEvent(v25, 0x40000LL);
            HwQueue = (int)v76;
            goto LABEL_56;
          }
          v26 = VIDMM_MAPPED_VA_RANGE::operator new();
          if ( v26 )
            v28 = VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                    (__int64)v26,
                    v27,
                    0LL,
                    v64,
                    v64 + v63[0],
                    0,
                    0LL,
                    0LL,
                    0,
                    1LL,
                    0LL,
                    0LL,
                    0LL,
                    0);
          else
            v28 = 0LL;
          *((_QWORD *)this + 5141) = v28;
          if ( !v28 )
          {
            WdLogSingleEntry1(1LL, *(unsigned int *)(v6 + 1720));
            WdLogGlobalForLineNumber = 9434;
            DxgkLogInternalTriageEvent(v29, 0x40000LL);
            HwQueue = -1073741823;
LABEL_56:
            *((_BYTE *)this + 41068) = 0;
            return (unsigned int)HwQueue;
          }
        }
        LODWORD(v76) = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
                         (struct _KTHREAD **)v16,
                         v24,
                         v17,
                         0LL,
                         0LL,
                         (_BYTE)v73 != 0 ? 0x10000 : 4096,
                         (unsigned __int64 *)this + 5135);
        if ( (int)v76 < 0 )
        {
          WdLogSingleEntry1(1LL, v24);
          WdLogGlobalForLineNumber = 9446;
          goto LABEL_46;
        }
        CVirtualAddressAllocator::FreeVirtualAddressRange(v16, *((_QWORD *)this + 5135));
        v30 = v22 + *((_QWORD *)this + 5135);
        *((_QWORD *)this + 5136) = v30;
        *((_QWORD *)this + 5140) = v30;
        if ( (_BYTE)v73 )
        {
          *((_QWORD *)this + 5137) = v30;
          *((_QWORD *)this + 5138) = v30 + v22;
          *((_QWORD *)this + 5140) = v30 + v22;
        }
        v31 = v22 >> 2;
        if ( v31 > 0xFFFEFFFF )
          LODWORD(v31) = -65537;
        *((_DWORD *)this + 10284) = (v31 + 0xFFFF) & 0xFFFF0000;
      }
      if ( *(_DWORD *)(v6 + 548) == 1 )
        v32 = ComputeMaxPageTableSizeForPagingProcess((struct VIDMM_PHYSICAL_ADAPTER *)v6, *((_DWORD *)this + 10278));
      else
        v32 = *(_DWORD *)(v6 + 1720);
      *(_DWORD *)(v6 + 1724) = v32;
      HwQueue = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v6 + 344LL))(v6);
      if ( HwQueue < 0 )
        goto LABEL_56;
      LODWORD(v13) = v74;
      v15 = v67;
    }
    if ( *(_BYTE *)(v15 + 63) )
    {
      v33 = (__int64 *)(*(_QWORD *)(v15 + 344) + 8LL * (unsigned int)v13);
      if ( !*v33 )
      {
        v34 = *(_QWORD *)(v15 + 336);
        memset(v71, 0, 48);
        HwQueue = VidSchCreateHwQueue(0LL, *(_QWORD *)(v34 + 8LL * (unsigned int)v13), (__int64)v71, v33, 0LL);
        if ( HwQueue < 0 )
          goto LABEL_56;
        VidSchSetHwQueueProgressFenceObject(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL) + 344LL) + 8LL * v74),
          *((_QWORD *)this + v74 + 741),
          0);
        LODWORD(v13) = v74;
      }
    }
    v14 = (*(_BYTE *)(v6 + 556) & 4) == 0;
    LOBYTE(v73) = *(_BYTE *)(v6 + 557) & 0x40;
    if ( !v14 )
    {
      v35 = VIDMM_MAPPED_VA_RANGE::operator new();
      if ( !v35
        || ((v36 = *((_QWORD *)this + 5141)) == 0 ? (v37 = *((_QWORD *)this + 5135)) : (v37 = *(_QWORD *)(v36 + 104)),
            v70 = (VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                             (__int64)v35,
                                             (__int64)v35,
                                             0LL,
                                             v37,
                                             *((_QWORD *)this + 5136),
                                             v74,
                                             0LL,
                                             0LL,
                                             0,
                                             0LL,
                                             0LL,
                                             0LL,
                                             0LL,
                                             0),
            (v38 = v70) == 0LL) )
      {
        _InterlockedAdd(&dword_14008A830, 1u);
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 9554;
        DxgkLogInternalTriageEvent(v45, 262145LL);
        goto LABEL_56;
      }
      v62 = *((_QWORD *)this + 5138) >> 12;
      *(_QWORD *)v65 = 0LL;
      HwQueue = CVirtualAddressAllocator::CommitVirtualAddressRange(
                  (__int64)v16,
                  (__int64)v70,
                  v74,
                  -1,
                  0LL,
                  (struct _DXGK_ADL *)&xmmword_140060B68,
                  0,
                  (struct VIDMM_ALLOC **)v65,
                  0LL,
                  0,
                  v62);
      if ( HwQueue < 0 )
      {
        WdLogSingleEntry2(1LL, v16, *(_QWORD *)v65);
        WdLogGlobalForLineNumber = 9581;
LABEL_70:
        DxgkLogInternalTriageEvent(v39, 0x40000LL);
        goto LABEL_109;
      }
      if ( (_BYTE)v73 )
      {
        *((_QWORD *)v38 + 13) = *((_QWORD *)this + 5137);
        *((_QWORD *)v38 + 14) = *((_QWORD *)this + 5138);
        v73 = 0LL;
        HwQueue = CVirtualAddressAllocator::CommitVirtualAddressRange(
                    (__int64)v16,
                    (__int64)v38,
                    v74,
                    -3,
                    0LL,
                    (struct _DXGK_ADL *)&xmmword_140060B68,
                    0,
                    &v73,
                    0LL,
                    0,
                    0LL);
        if ( HwQueue < 0 )
        {
          WdLogSingleEntry2(1LL, v16, v73);
          WdLogGlobalForLineNumber = 9606;
          goto LABEL_70;
        }
      }
      HwQueue = VIDMM_PAGE_DIRECTORY::MapPageTablesToVaSpace(
                  *(VIDMM_PAGE_DIRECTORY **)(32LL * v74 + *((_QWORD *)v16 + 16)),
                  v16);
      if ( HwQueue < 0 )
      {
        WdLogSingleEntry1(1LL, v16);
        WdLogGlobalForLineNumber = 9616;
        goto LABEL_70;
      }
      LODWORD(v13) = v74;
    }
    v40 = 0;
    LODWORD(v73) = 0;
    v41 = (unsigned __int64)*((unsigned int *)this + (unsigned int)v13 + 31) >> 12;
    v68 = v41;
    do
    {
      v42 = 0;
      v43 = (struct _RTL_AVL_TREE **)(*((_QWORD *)this + (unsigned int)v13 + 80) + 88LL);
      v44 = *v43;
      while ( 1 )
      {
        v76 = v44;
        if ( v44 == (struct _RTL_AVL_TREE *)v43 )
          break;
        if ( v40 == v42 )
          goto LABEL_84;
        v44 = *(struct _RTL_AVL_TREE **)v44;
        ++v42;
      }
      v44 = 0LL;
      v76 = 0LL;
LABEL_84:
      v46 = *((_QWORD *)v44 + 7);
      v64 = v46;
      if ( v46 )
      {
        if ( !*((_QWORD *)v44 + 11) )
        {
          v47 = CVirtualAddressAllocator::MapVirtualAddressRange(
                  v16,
                  v44,
                  0LL,
                  4u,
                  v41 << 12,
                  0LL,
                  *((_QWORD *)this + 5135),
                  *((_QWORD *)this + 5136),
                  0x1000u,
                  (_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)((*((_DWORD *)this + 10) < 0x6000u) | 2LL),
                  0LL,
                  v13,
                  0LL,
                  0,
                  0);
          if ( !v47 )
          {
            HwQueue = -1073741823;
            WdLogSingleEntry2(1LL, v16, v44);
            WdLogGlobalForLineNumber = 9672;
            goto LABEL_95;
          }
          *((_QWORD *)v44 + 11) = *(_QWORD *)(v47 + 104);
          v46 = v64;
        }
        v48 = *(_QWORD *)(v46 + 648);
        v49 = v76;
        v72[0] = 0LL;
        LogicalAddress = SysMmGetLogicalAddress(*(void *const *)(*((_QWORD *)v76 + 6) + 344LL));
        v51 = (const struct VIDMM_GLOBAL_ALLOC *)*((_QWORD *)v49 + 6);
        v52 = LogicalAddress;
        v53 = *(_QWORD *)(*(_QWORD *)v51 + 16LL) >> 12;
        FullPfnArray = VidMmGetFullPfnArray(v51);
        VidMmiInitializeAdlForPfnArray((struct _DXGK_ADL *)v72, FullPfnArray, v53, v52);
        *(_QWORD *)v63 = 0LL;
        HwQueue = CVirtualAddressAllocator::CommitVirtualAddressRange(
                    (__int64)v16,
                    v48 - 32,
                    v74,
                    0,
                    0LL,
                    (struct _DXGK_ADL *)v72,
                    0,
                    (struct VIDMM_ALLOC **)v63,
                    0LL,
                    0,
                    0LL);
        if ( HwQueue < 0 )
        {
          WdLogSingleEntry2(1LL, v16, *(_QWORD *)v63);
          WdLogGlobalForLineNumber = 9699;
          goto LABEL_95;
        }
        LODWORD(v13) = v74;
        v40 = (unsigned int)v73;
        v41 = v68;
      }
      LODWORD(v73) = ++v40;
    }
    while ( v40 < 2 );
    if ( (**(_DWORD **)(*((_QWORD *)this + 3) + 3048LL) & 0x10000000) != 0 )
    {
      HwQueue = VidSchRecommitSchedulingLogs(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL), v13);
      if ( HwQueue < 0 )
      {
        WdLogSingleEntry2(1LL, *((_QWORD *)this + 2), v74);
        WdLogGlobalForLineNumber = 9712;
LABEL_95:
        DxgkLogInternalTriageEvent(v55, 0x40000LL);
        goto LABEL_108;
      }
      LODWORD(v13) = v74;
    }
    if ( *(_BYTE *)(v67 + 63) )
    {
      v56 = (unsigned __int64 *)((char *)this + 8 * (unsigned int)v13 + 6440);
      if ( *v56 )
      {
        v57 = VIDMM_GLOBAL::RecommitSystemFenceGpuVA(this, v13);
      }
      else
      {
        HwQueue = VIDMM_GLOBAL::MapGpuVA(
                    this,
                    *((struct VIDMM_DEVICE **)this + 5065),
                    (VIDMM_FENCE_STORAGE_PAGE **)(*((_QWORD *)this + (unsigned int)v13 + 741) + 64LL),
                    v56,
                    1 << v13,
                    1);
        if ( HwQueue < 0 )
          goto LABEL_108;
        v57 = VIDMM_DEVICE::MapPagingQueueGpuVAs(*((VIDMM_DEVICE **)this + 5065), v74);
      }
      HwQueue = v57;
      if ( v57 < 0 )
      {
LABEL_108:
        v38 = v70;
        if ( !v70 )
          goto LABEL_56;
LABEL_109:
        VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v38);
        goto LABEL_56;
      }
      LODWORD(v13) = v74;
    }
    v58 = v69;
    if ( (*(_BYTE *)(v69 + 556) & 4) != 0 )
    {
      v69 = 0LL;
      LODWORD(v76) = 0;
      LODWORD(v73) = 0;
      v67 = 0LL;
      CVirtualAddressAllocator::GetPageDirectoryData(v16, v13, &v69, (unsigned int *)&v76, (unsigned int *)&v73, &v67);
      VidSchSetPagingNodePageDirectory(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL), v74, (_DWORD)v76, (_DWORD)v73, v67);
    }
    *(_BYTE *)(v58 + 557) &= 0xF3u;
    goto LABEL_108;
  }
  memset(&v71[0].pInputData, 0, 0x50uLL);
  *((_DWORD *)&v71[0].Type + 1) = v74;
  v71[0].Type = DXGKQAITYPE_HARDWARERESERVEDRANGES|0x60;
  v59 = VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v71, 1);
  v60 = v59;
  if ( v59 < 0 )
  {
    WdLogSingleEntry1(1LL, v59);
    WdLogGlobalForLineNumber = 9281;
    DxgkLogInternalTriageEvent(v61, 0x40000LL);
    return v60;
  }
  return 0LL;
}
