/*
 * XREFs of ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400DA3C8
 * Callers:
 *     ?RecommitSchLog@VIDMM_SCH_LOG@@SAJPEAV1@@Z @ 0x14003B1CC (-RecommitSchLog@VIDMM_SCH_LOG@@SAJPEAV1@@Z.c)
 *     CommitAllocationVirtualAddressCb @ 0x14003B630 (CommitAllocationVirtualAddressCb.c)
 *     ?RecommitSystemGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@I@Z @ 0x1400A5F58 (-RecommitSystemGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDM.c)
 *     ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x1400B7C7C (-UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1400CB330 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PE.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CE814 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUVIDMM_SYSTEM_ADDRESS_CONTEXT@@@Z @ 0x1400D5AD4 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUV.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAUVIDMM_GLOBAL_ALLOC@@0I0PEBU_DXGK_ADL@@PEAE0@Z @ 0x1400D87F8 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAUVIDMM_GLOBAL_.c)
 *     ?MapPageTableToGpuVa@@YAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGE_TABLE_BASE@@I@Z @ 0x1400D9BF4 (-MapPageTableToGpuVa@@YAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGE_TABLE_BASE@@I@Z.c)
 *     ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400D9F90 (-RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1400E2908 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x140106E1C (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14002FF98 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0x_EtwWriteTransfer @ 0x140031A48 (McTemplateK0x_EtwWriteTransfer.c)
 *     McTemplateK0pqxx_EtwWriteTransfer @ 0x140031B5C (McTemplateK0pqxx_EtwWriteTransfer.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x140037EF8 (-GetVidMmGlobalAllocFromOwner@@YAPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x140038F20 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x14003BC10 (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     ?DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z @ 0x1400470E0 (-DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z.c)
 *     ?SysMmMapLogicalAddressRange@@YAJPEAUSYSMM_ADAPTER@@IPEAU_IOMMU_DMA_DOMAIN@@_K22PEBU_DXGK_ADL@@_N@Z @ 0x14004C59C (-SysMmMapLogicalAddressRange@@YAJPEAUSYSMM_ADAPTER@@IPEAU_IOMMU_DMA_DOMAIN@@_K22PEBU_DXGK_ADL@@_.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400D1928 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?MustFlushTlbOnValidTransition@VIDMM_GLOBAL@@QEAA_NI@Z @ 0x1400D8A54 (-MustFlushTlbOnValidTransition@VIDMM_GLOBAL@@QEAA_NI@Z.c)
 *     ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400D9F90 (-RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DAFA0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1400DD97C (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1401050F8 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x14011379C (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall CVirtualAddressAllocator::CommitVirtualAddressRange(
        __int64 a1,
        __int64 a2,
        char a3,
        int a4,
        unsigned __int64 a5,
        struct _DXGK_ADL *a6,
        int a7,
        struct VIDMM_ALLOC **a8,
        _BYTE *a9,
        int a10,
        unsigned __int64 a11)
{
  struct VIDMM_ALLOC **v12; // rdx
  _BYTE *v15; // r9
  unsigned int v16; // ecx
  __int64 v17; // r8
  __int64 v18; // r10
  __int64 v19; // rax
  __int64 v20; // r13
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // r8
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // r14
  VIDMM_PAGE_DIRECTORY *v30; // r12
  DXGPUSHLOCK *v31; // rcx
  unsigned __int64 v32; // r12
  __int64 v33; // r10
  int v34; // r8d
  char v35; // al
  int v36; // r11d
  __int64 v37; // r9
  _QWORD *v38; // r8
  __int64 v39; // r9
  _DWORD *v40; // r10
  unsigned __int64 v41; // rdx
  struct _DXGK_ADL *v42; // r13
  __int128 v43; // xmm0
  _QWORD **v44; // r13
  __int64 v45; // rcx
  int v46; // ebx
  __int64 v47; // r8
  unsigned int v48; // r10d
  __int64 result; // rax
  UINT v50; // ebx
  unsigned int v51; // ecx
  __int64 v52; // rcx
  char v53; // al
  int v54; // eax
  unsigned int v55; // r14d
  __int64 v56; // rcx
  char v57; // cl
  __int64 v58; // rdx
  __int64 v59; // rax
  int v60; // ecx
  struct DXGPROCESS_RENDER_ADAPTER_INFO *RenderAdapterInfo; // rax
  int v62; // eax
  __int64 v63; // rcx
  UINT NumberOfPte; // eax
  unsigned int v65; // edx
  __int64 v66; // rcx
  unsigned int RootPageTableSize; // eax
  struct VIDMM_PAGE_DIRECTORY *PageDirectory; // rax
  __int64 v69; // rcx
  int v70; // ebx
  __int64 v71; // r12
  __int64 v72; // rcx
  bool v73; // zf
  _QWORD *VidMmGlobalAllocFromOwner; // rax
  int v75; // ecx
  char v76; // al
  unsigned __int64 v77; // [rsp+20h] [rbp-E0h]
  char v78; // [rsp+50h] [rbp-B0h]
  unsigned int v79[2]; // [rsp+60h] [rbp-A0h]
  _DWORD *v80; // [rsp+68h] [rbp-98h]
  unsigned int v81; // [rsp+70h] [rbp-90h]
  UINT v82; // [rsp+74h] [rbp-8Ch]
  int v83; // [rsp+78h] [rbp-88h]
  struct _DXGKARG_GETROOTPAGETABLESIZE v85; // [rsp+90h] [rbp-70h] BYREF
  _BYTE *v86; // [rsp+98h] [rbp-68h]
  unsigned __int64 v87; // [rsp+A0h] [rbp-60h]
  _QWORD **v88; // [rsp+A8h] [rbp-58h]
  __int64 v89; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v90; // [rsp+B8h] [rbp-48h]
  _OWORD v91[6]; // [rsp+C0h] [rbp-40h] BYREF

  v12 = a8;
  v15 = a9;
  v16 = *(_DWORD *)(a2 + 72);
  v17 = *(_QWORD *)(a1 + 96);
  v18 = (v16 >> 4) & 0x3F;
  v19 = *(_QWORD *)(v17 + 40320);
  v86 = a9;
  *(_QWORD *)v79 = v18;
  v20 = *(_QWORD *)(v19 + 8 * v18);
  if ( (v16 & 0x800) == 0 )
  {
    v53 = *(_BYTE *)(v20 + 556);
    if ( (v53 & 0x10) != 0 )
    {
      RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(
                            *(DXGPROCESS **)(*(_QWORD *)(a1 + 104) + 72LL),
                            *(_DWORD *)(*(_QWORD *)(v17 + 24) + 240LL));
      v77 = *(_QWORD *)(a2 + 112) - *(_QWORD *)(a2 + 104);
      v62 = SysMmMapLogicalAddressRange(
              *(struct SYSMM_ADAPTER **)(*(_QWORD *)(*((_QWORD *)RenderAdapterInfo + 10) + 16LL) + 224LL),
              v79[0],
              *((struct _IOMMU_DMA_DOMAIN **)RenderAdapterInfo + 5));
      v55 = v62;
      if ( v62 < 0 )
      {
        WdLogSingleEntry1(1LL, v62);
        WdLogGlobalForLineNumber = 3623;
        goto LABEL_62;
      }
    }
    else
    {
      if ( (v53 & 0x20) == 0 )
        goto LABEL_2;
      v77 = *(_QWORD *)(a2 + 112) - *(_QWORD *)(a2 + 104);
      v54 = SysMmMapLogicalAddressRange(
              *(struct SYSMM_ADAPTER **)(*(_QWORD *)(v17 + 24) + 224LL),
              (unsigned int)v18,
              0LL);
      v55 = v54;
      if ( v54 < 0 )
      {
        WdLogSingleEntry1(1LL, v54);
        WdLogGlobalForLineNumber = 3642;
LABEL_62:
        DxgkLogInternalTriageEvent(v56, 0x40000LL);
        return v55;
      }
    }
    v15 = v86;
    v12 = a8;
    v18 = *(_QWORD *)v79;
    *(_DWORD *)(a2 + 72) |= 0x800u;
  }
LABEL_2:
  if ( (*(_BYTE *)(v20 + 556) & 4) == 0 )
    return 0LL;
  if ( a7 == 2 )
    *v15 = 0;
  v21 = a11;
  *v12 = 0LL;
  v22 = *(_QWORD *)(a2 + 104);
  v23 = *(_QWORD *)(a2 + 112) - v22;
  v87 = v22;
  v24 = v23 >> 12;
  v25 = v22 >> 12;
  if ( !a11 )
    v21 = v25 + v24;
  v83 = *(_DWORD *)(a2 + 72) & 0xF;
  v88 = *(_QWORD ***)(a2 + 64);
  v90 = *(_QWORD *)(a2 + 80);
  if ( v21 <= v25 )
  {
    WdLogSingleEntry2(1LL, v21, v25);
    WdLogGlobalForLineNumber = 3682;
LABEL_90:
    DxgkLogInternalTriageEvent(v63, 0x40000LL);
    return 3221225485LL;
  }
  v26 = *(_QWORD *)(a1 + 16) >> 12;
  if ( v21 > v26 )
  {
    WdLogSingleEntry2(1LL, v21, v26);
    WdLogGlobalForLineNumber = 3687;
    goto LABEL_90;
  }
  v27 = -2;
  v28 = *(_QWORD *)(v20 + 560);
  if ( (*(_BYTE *)(a2 + 96) & 4) == 0 )
    v27 = a4;
  v29 = 32 * v18 + *(_QWORD *)(a1 + 128);
  LODWORD(v89) = v27;
  v80 = (_DWORD *)v28;
  v30 = *(VIDMM_PAGE_DIRECTORY **)v29;
  if ( !*(_QWORD *)v29 || (*(_DWORD *)v30 & 8) != 0 )
  {
    v82 = *(_DWORD *)(v29 + 16);
    v50 = (((v21 - 1) & *(_QWORD *)(v20 + 48LL * *(unsigned int *)(v20 + 548) + 224)) >> *(_QWORD *)(v20 + 48LL * *(unsigned int *)(v20 + 548) + 232))
        + 1;
    if ( v50 > v82 || !v30 )
    {
      v51 = *(_DWORD *)(v29 + 20);
      v81 = v51;
      if ( v30 && (*(_DWORD *)(a1 + 152) & 4) != 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3721;
        DxgkLogInternalTriageEvent(v52, 0x40000LL);
        return 3221225473LL;
      }
      NumberOfPte = *(_DWORD *)(v29 + 16);
      v65 = *(_DWORD *)(v29 + 20);
      if ( *(_DWORD *)(v28 + 16) == 2 )
      {
        *(_DWORD *)(v29 + 16) = v50;
        v66 = *(_QWORD *)(a1 + 96);
        v85.NumberOfPte = v50;
        v85.PhysicalAdapterIndex = v18;
        RootPageTableSize = ADAPTER_RENDER::DdiGetRootPageTableSize(*(ADAPTER_RENDER **)(v66 + 16), &v85);
        v51 = v81;
        v65 = RootPageTableSize;
        LODWORD(v18) = v79[0];
        *(_DWORD *)(v29 + 20) = RootPageTableSize;
        NumberOfPte = v85.NumberOfPte;
        *(_DWORD *)(v29 + 16) = v85.NumberOfPte;
      }
      if ( NumberOfPte < v50 || v65 < v51 )
      {
        WdLogSingleEntry1(1LL, NumberOfPte);
        WdLogGlobalForLineNumber = 3738;
        DxgkLogInternalTriageEvent(0LL, 0x40000LL);
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 72LL, a1, v29, v50);
        WdLogGlobalForLineNumber = 213;
        JUMPOUT(0x1400DAF97LL);
      }
      PageDirectory = CreatePageDirectory((struct CVirtualAddressAllocator *)a1, v18, *(_DWORD *)(v20 + 548));
      *(_QWORD *)v29 = PageDirectory;
      if ( !PageDirectory )
      {
        _InterlockedAdd(&dword_14008A834, 1u);
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 3745;
        DxgkLogInternalTriageEvent(v69, 262145LL);
        *(_DWORD *)(v29 + 16) = v82;
        *(_DWORD *)(v29 + 20) = v81;
        result = 3221225495LL;
        *(_QWORD *)v29 = v30;
        return result;
      }
      if ( (*(_DWORD *)(a1 + 152) & 4) != 0 )
        *(_DWORD *)PageDirectory |= 0x100000u;
      if ( v30 )
      {
        VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
          *(VIDMM_PROCESS **)(a1 + 104),
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 240LL),
          1);
        v70 = *(_DWORD *)(v29 + 16);
        *(_DWORD *)(v29 + 16) = v82;
        VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(v30, (struct CVirtualAddressAllocator *)a1, 0LL);
        *(_DWORD *)(v29 + 16) = v70;
        v71 = (int)CVirtualAddressAllocator::RecommitVirtualAddressRanges(
                     (struct _KTHREAD **)a1,
                     1LL << SLOBYTE(v79[0]),
                     a8);
        CVirtualAddressAllocator::FlushGpuVaTlb((CVirtualAddressAllocator *)a1, v79[0], 0LL, 0LL);
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*(VIDMM_GLOBAL **)(a1 + 96), v79[0]);
        VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
          *(VIDMM_PROCESS **)(a1 + 104),
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 240LL),
          0);
        if ( (int)v71 < 0 )
        {
          WdLogSingleEntry1(1LL, v71);
          WdLogGlobalForLineNumber = 3795;
          DxgkLogInternalTriageEvent(v72, 0x40000LL);
          return (unsigned int)v71;
        }
      }
    }
  }
  v31 = (DXGPUSHLOCK *)(a1 + 64);
  v78 = 0;
  if ( *(struct _KTHREAD **)(a1 + 72) != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive(v31);
    v78 = 1;
  }
  v32 = v87;
  if ( byte_14008A202 < 0 )
  {
    LODWORD(v77) = v83;
    McTemplateK0pqxx_EtwWriteTransfer((__int64)v31, &CommitVirtualAddressStart, v28, v88, v77, v87, v24);
  }
  memset(v91, 0, sizeof(v91));
  v33 = *(_QWORD *)(a2 + 128);
  if ( v33 )
  {
    *((_QWORD *)&v91[1] + 1) = *(_QWORD *)(a2 + 120) >> 12;
    *((_QWORD *)&v91[5] + 1) = v33;
  }
  v34 = 1;
  v35 = BYTE13(v91[4]);
  if ( (*(_BYTE *)(v20 + 558) & 8) != 0 )
    v35 = 1;
  v36 = v89;
  v37 = *(_QWORD *)&v91[0] | 1LL;
  BYTE13(v91[4]) = v35;
  *(_QWORD *)&v91[1] = *(_QWORD *)(a2 + 88);
  *(_QWORD *)&v91[0] |= 1uLL;
  switch ( (_DWORD)v89 )
  {
    case 0xFFFFFFFE:
      *(_QWORD *)&v91[0] = v37 | 2;
      if ( (_WORD)v32 || (v24 & 0xF) != 0 || (v73 = (*(_BYTE *)(v20 + 558) & 8) == 0, BYTE12(v91[4]) = 1, v73) )
        BYTE12(v91[4]) = 0;
      VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(*(_DWORD *)(a2 + 72) & 0xF, *(_QWORD **)(a2 + 64));
      if ( VidMmGlobalAllocFromOwner )
      {
        v75 = *(_DWORD *)(*VidMmGlobalAllocFromOwner + 32LL);
        if ( !v75 || (_WORD)v75 )
          BYTE12(v91[4]) = 0;
      }
      break;
    case 0xFFFFFFFD:
      BYTE12(v91[4]) = 1;
      break;
    case 0xFFFFFFFF:
      break;
    default:
      v38 = GetVidMmGlobalAllocFromOwner(*(_DWORD *)(a2 + 72) & 0xF, *(_QWORD **)(a2 + 64));
      if ( a10 != 2 )
      {
        if ( a10 == 1 )
        {
LABEL_26:
          BYTE12(v91[4]) = 0;
          goto LABEL_27;
        }
        v57 = 0;
        if ( (*(_BYTE *)(a2 + 128) & 0xF) == 0 )
          v57 = (*(_BYTE *)(v20 + 558) >> 5) & ((_WORD)v32 == 0);
        if ( !v57 || *(_WORD *)(a2 + 120) )
          goto LABEL_27;
        if ( v36 )
        {
          v58 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 40320LL) + 8LL * v79[0]) + 1752LL)
                          + 8LL * (unsigned int)(v36 - 1));
          v59 = v58 + 132;
          if ( !v58 )
            v59 = 124LL;
          if ( *(_DWORD *)v59 == 0x10000 )
          {
            v76 = BYTE12(v91[4]);
            if ( (v24 & 0xF) == 0 && (unsigned __int16)a5 == 0LL )
              v76 = 1;
            BYTE12(v91[4]) = v76;
          }
          if ( !v38 )
            goto LABEL_27;
          v60 = *(_DWORD *)(*v38 + 32LL);
          if ( v60 )
          {
            if ( !(_WORD)v60 )
              goto LABEL_27;
          }
          goto LABEL_26;
        }
        if ( (_WORD)a5 || (*(_DWORD *)(a1 + 152) & 4) != 0 || !v38 || (v38[3] & 0x10000000) == 0 )
          goto LABEL_27;
      }
      BYTE12(v91[4]) = 1;
LABEL_27:
      v40 = v80;
      v41 = v39 & 0xFFFFFFFFFFFE041FuLL | (32 * (v36 & 0x1F | ((unsigned __int64)(a3 & 0x3F) << 6)));
      *(_QWORD *)&v91[0] = v41;
      if ( (*v80 & 0x40) != 0 && (!v38 || (*(_DWORD *)v38[46] & 0x80u) == 0) )
      {
        v42 = a6;
        if ( (*(_DWORD *)(a1 + 152) & 4) == 0
          && (*((_DWORD *)a6 + 1) & 1) != 0
          && (v36 || (*v80 & 0x800) != 0 && *(_BYTE *)(*(_QWORD *)(a1 + 96) + 40099LL)) )
        {
          LOBYTE(v91[5]) = 1;
        }
      }
      else
      {
        v42 = a6;
      }
      if ( (*v80 & 0x10) != 0 && (v83 == 2 || v83 == 7 || v38 && (*(_DWORD *)v38[46] & 4) != 0) )
      {
        v41 |= 4uLL;
        *(_QWORD *)&v91[0] = v41;
      }
      v34 = 1;
      if ( (*v80 & 1) != 0 && (*(_BYTE *)(a2 + 96) & 1) == 0 )
      {
        v41 |= 8uLL;
        *(_QWORD *)&v91[0] = v41;
      }
      if ( (*v80 & 2) != 0 && (*(_BYTE *)(a2 + 96) & 2) == 0 )
        *(_QWORD *)&v91[0] = v41 | 0x10;
      goto LABEL_34;
  }
  v40 = v80;
  v42 = a6;
LABEL_34:
  DWORD2(v91[4]) = v36;
  DWORD2(v91[3]) = v83;
  v43 = *(_OWORD *)v42;
  v44 = v88;
  *(_QWORD *)&v91[3] = v88;
  v91[2] = v43;
  if ( v83 == 3 )
  {
    *(_QWORD *)&v91[4] = v88;
  }
  else if ( v83 == v34 )
  {
    *(_QWORD *)&v91[4] = **v88;
  }
  if ( (*v40 & 0x80u) != 0 )
    HIWORD(v91[4]) = 257;
  v46 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
          *(VIDMM_PAGE_DIRECTORY **)v29,
          (struct CVirtualAddressAllocator *)a1,
          (const struct COMMIT_VA_STATE *)v91,
          v90,
          v32,
          v24,
          a5,
          0,
          a8);
  if ( byte_14008A202 < 0 )
    McTemplateK0x_EtwWriteTransfer(v45, &CommitVirtualAddressEnd, v47, v44);
  if ( VIDMM_GLOBAL::MustFlushTlbOnValidTransition(*(VIDMM_GLOBAL **)(a1 + 96), v79[0]) || BYTE4(v91[5]) )
  {
    if ( a7 == 1 )
    {
      CVirtualAddressAllocator::FlushGpuVaTlb((CVirtualAddressAllocator *)a1, v48, v32, v32 + (v24 << 12));
      v48 = v79[0];
    }
    else if ( a7 == 2 )
    {
      *v86 = 1;
    }
  }
  if ( BYTE3(v91[5]) )
  {
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*(VIDMM_GLOBAL **)(a1 + 96), v48);
    VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
      *(VIDMM_PROCESS **)(a1 + 104),
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 240LL),
      0);
  }
  *(_DWORD *)(a2 + 72) |= ((v46 >> 31) & 0xC00) + 1024;
  if ( v78 )
  {
    *(_QWORD *)(a1 + 72) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 64, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v46;
}
