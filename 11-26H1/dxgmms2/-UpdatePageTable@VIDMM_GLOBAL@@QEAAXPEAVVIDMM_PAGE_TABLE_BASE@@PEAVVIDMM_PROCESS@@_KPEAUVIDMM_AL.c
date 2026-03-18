/*
 * XREFs of ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGE_TABLE_BASE@@PEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@2IIPEBU_DXGK_PTE@@5II2W4_DXGK_PAGETABLEUPDATEMODE@@2U_DXGK_UPDATEPAGETABLEFLAGS@@2@Z @ 0x1400D5DA0
 * Callers:
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1400D3C74 (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_.c)
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K2@Z @ 0x1400D3F00 (-UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@PEBU_DXGK_PTE@@@Z @ 0x1400D5894 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DAFA0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1401053E0 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14001D9F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x1400302B0 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x140037958 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ @ 0x140038588 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400D1928 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEA_KPEAX@Z @ 0x1400D6590 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::UpdatePageTable(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGE_TABLE_BASE *a2,
        struct VIDMM_PROCESS *a3,
        D3DGPU_VIRTUAL_ADDRESS a4,
        struct VIDMM_ALLOC *a5,
        struct VIDMM_GLOBAL_ALLOC *a6,
        UINT64 a7,
        UINT a8,
        LONG a9,
        const struct _DXGK_PTE *a10,
        struct _DXGK_PTE *a11,
        unsigned int a12,
        UINT a13,
        SIZE_T a14,
        enum _DXGK_PAGETABLEUPDATEMODE a15,
        unsigned __int64 a16,
        LONG a17,
        unsigned __int64 a18)
{
  struct VIDMM_GLOBAL_ALLOC *v18; // r14
  const struct _DXGK_PTE *v21; // r13
  LONG v22; // ebx
  bool v23; // zf
  unsigned int v24; // ecx
  UINT v25; // esi
  __int64 v26; // rdi
  enum _DXGK_PAGETABLEUPDATEMODE v27; // r12d
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  void *v32; // rax
  __int64 v33; // r9
  _QWORD *v34; // r9
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  void *v38; // rcx
  UINT v39; // eax
  int v40; // eax
  SIZE_T v41; // rcx
  __int64 v42; // rsi
  __int64 v43; // rdi
  DXGGLOBAL *Global; // rax
  void *v45; // rax
  unsigned int NumPageTableEntries; // esi
  int v47; // edi
  char *v48; // rax
  char *v49; // r8
  struct VIDMM_PROCESS *v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rdx
  DXGK_PTE *v54; // rdx
  int v55; // edi
  DXGK_PTE *pPageTableEntries64KB; // rax
  unsigned int v57; // r8d
  int v58; // r9d
  unsigned int v59; // edi
  unsigned __int64 v60; // rsi
  __int64 v61; // r12
  __int64 v62; // rsi
  D3DGPU_VIRTUAL_ADDRESS v63; // r14
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rax
  unsigned int v68; // r9d
  __int64 v69; // r10
  __int128 v70; // xmm0
  __int64 v71; // rcx
  unsigned __int64 v72; // [rsp+50h] [rbp-B8h] BYREF
  enum _DXGK_PAGETABLEUPDATEMODE v73; // [rsp+58h] [rbp-B0h]
  int v74; // [rsp+5Ch] [rbp-ACh]
  SIZE_T v75; // [rsp+60h] [rbp-A8h]
  struct VIDMM_PROCESS *v76; // [rsp+68h] [rbp-A0h]
  __int64 v77; // [rsp+70h] [rbp-98h]
  DXGK_PTE *v78; // [rsp+78h] [rbp-90h]
  D3DGPU_VIRTUAL_ADDRESS v79; // [rsp+80h] [rbp-88h]
  struct VIDMM_GLOBAL_ALLOC *v80; // [rsp+88h] [rbp-80h]
  void *v81; // [rsp+90h] [rbp-78h]
  __int64 v82; // [rsp+98h] [rbp-70h]
  const struct _DXGK_PTE *v83; // [rsp+A0h] [rbp-68h]
  struct _DXGKARG_BUILDPAGINGBUFFER v84; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v85; // [rsp+1E8h] [rbp+E0h] BYREF

  v18 = a6;
  v21 = a10;
  v22 = a17;
  v23 = *((_BYTE *)this + 7040) == 0;
  v78 = a11;
  v24 = a12;
  v81 = a2;
  v79 = a4;
  v76 = a3;
  v80 = a6;
  v83 = a10;
  v75 = a14;
  if ( v23 )
  {
    v25 = *(_DWORD *)a2 & 7;
    v26 = a12;
    v27 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    v28 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * a12);
    if ( !*((_BYTE *)this + 41068) )
      v27 = a15;
    v74 = *(_DWORD *)a2 & 7;
    v82 = a12;
    v23 = (*(_BYTE *)(v28 + 559) & 1) == 0;
    v77 = v28;
    v73 = v27;
    if ( !v23 )
    {
LABEL_72:
      if ( *(_QWORD *)(v28 + 1808) != v28 + 1808 && *((_BYTE *)this + 41072) && (v22 & 2) != 0 )
      {
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, v24);
        *((_BYTE *)this + 41072) = 0;
      }
    }
    memset(&v84, 0, sizeof(v84));
    v29 = *(_QWORD **)(*((_QWORD *)this + 2) + 744LL);
    v30 = *(_QWORD *)(v29[42] + 8 * v26);
    if ( v30 )
    {
      v32 = *(void **)(v30 + 48);
    }
    else
    {
      if ( *((_BYTE *)this + 41070) )
        v31 = v29[44];
      else
        v31 = v29[41];
      v32 = *(void **)(*(_QWORD *)(v31 + 8 * v26) + 64LL);
    }
    v84.hSystemContext = v32;
    v84.MultipassOffset = 0;
    while ( 1 )
    {
      v33 = *((_QWORD *)this + v26 + 80);
      if ( (*(_DWORD *)(v33 + 36) & 4) == 0 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 29LL, v33, 0LL, 0LL);
        WdLogGlobalForLineNumber = 213;
        goto LABEL_72;
      }
      if ( *((_QWORD *)this + v26 + 336) || *((_QWORD *)this + v26 + 400) )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 86LL, v33, 0LL, 0LL);
        WdLogGlobalForLineNumber = 213;
        JUMPOUT(0x1400D6589LL);
      }
      v34 = (_QWORD *)*((_QWORD *)this + v26 + 144);
      if ( *(_DWORD *)(v34[16] + 40LL) )
        v35 = *(_QWORD *)(v34[6] + 208LL);
      else
        v35 = v34[8];
      v36 = *((unsigned int *)this + v26 + 416);
      *((_QWORD *)this + v26 + 336) = v36 + v35;
      v37 = *((unsigned int *)this + v26 + 544);
      v84.pDmaBuffer = (void *)(v36 + v35);
      v38 = (void *)(v37 + v34[15]);
      *((_QWORD *)this + v26 + 400) = v38;
      v39 = *((_DWORD *)this + v26 + 31) - v36;
      v84.pDmaBufferPrivateData = v38;
      v84.DmaSize = v39;
      v84.DmaBufferPrivateDataSize = *((_DWORD *)this + v26 + 95) - v37;
      v84.DmaBufferGpuVirtualAddress = v34[11];
      v40 = v22;
      v84.DmaBufferWriteOffset = v36;
      v84.Operation = DXGK_OPERATION_UPDATE_PAGE_TABLE;
      v84.Transfer.Destination.SegmentAddress.HighPart = v22;
      v84.UnmapApertureSegment.DummyPage.HighPart = a9;
      v85 = 0LL;
      if ( (unsigned int)v27 > DXGK_PAGETABLEUPDATE_GPU_VIRTUAL )
      {
        v84.Fill.FillPattern = a13;
        v84.MapApertureSegment.OffsetInPages = v75;
      }
      else
      {
        v84.Transfer.TransferSize = v75;
      }
      v84.Transfer.Destination.SegmentId = a8;
      v84.ReadPhysical.SegmentId = v25;
      if ( v21 )
      {
        v84.UpdatePageTable.pPageTableEntries64KB = v78;
        v84.Transfer.Source.SegmentAddress.QuadPart = (LONGLONG)v21;
      }
      else
      {
        v84.Transfer.Source.SegmentAddress.QuadPart = (LONGLONG)&v85;
        pPageTableEntries64KB = (DXGK_PTE *)&v85;
        if ( **(char **)(v77 + 560) >= 0 )
          pPageTableEntries64KB = v84.UpdatePageTable.pPageTableEntries64KB;
        v84.UpdatePageTable.pPageTableEntries64KB = pPageTableEntries64KB;
        v40 = v22 | 1;
        v84.Transfer.Destination.SegmentAddress.HighPart = v22 | 1;
      }
      v84.Reserved.Reserved[20] = v27;
      v84.UpdatePageTable.FirstPteVirtualAddress = a16 << 12;
      if ( !v25 )
      {
        if ( a18 == 16 )
        {
          if ( (v22 & 8) != 0 )
            goto LABEL_68;
        }
        else if ( a18 == 1 && (v22 & 8) == 0 )
        {
LABEL_68:
          v84.Transfer.Destination.SegmentAddress.HighPart = v40 | 1;
        }
      }
      v84.TransferVirtual.DestinationPageTable = v79;
      if ( v18 )
      {
        v41 = *(_QWORD *)(*((_QWORD *)v18 + 46) + 48LL);
        v84.UpdatePageTable.AllocationOffsetInBytes = a7;
        v84.Fill.FillSize = v41;
      }
      v42 = *(unsigned int *)(*((_QWORD *)this + 3) + 240LL);
      v43 = *((_QWORD *)v76 + 9);
      Global = DXGGLOBAL::GetGlobal();
      if ( (unsigned int)v42 < (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(Global)
        && *(_QWORD *)(8 * v42 + *(_QWORD *)(v43 + 48)) )
      {
        _mm_lfence();
        v45 = *(void **)(*(_QWORD *)(8 * v42 + *(_QWORD *)(v43 + 48)) + 48LL);
      }
      else
      {
        v45 = 0LL;
      }
      NumPageTableEntries = v84.UpdatePageTable.NumPageTableEntries;
      v84.UpdatePageTable.hProcess = v45;
      if ( (v84.Reserved.Reserved[13] & 1) != 0 )
        NumPageTableEntries = 1;
      v47 = 16 * (NumPageTableEntries - 1);
      if ( v84.UpdatePageTable.pPageTableEntries64KB )
        v47 += 16 * NumPageTableEntries;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 41144, 0LL);
      *((_QWORD *)this + 5144) = KeGetCurrentThread();
      v48 = operator new(168, (VIDMM_GLOBAL *)((char *)this + 41168), 4u, v47);
      v49 = v48;
      if ( v48 )
      {
        v50 = v76;
        *(_OWORD *)v48 = *(_OWORD *)&v84.Transfer.hAllocation;
        *((_OWORD *)v48 + 1) = *(_OWORD *)&v84.NotifyResidency.PhysicalAddress.SegmentOffset;
        *((_OWORD *)v48 + 2) = *(_OWORD *)&v84.Reserved.Reserved[8];
        *((_OWORD *)v48 + 3) = *(_OWORD *)&v84.Reserved.Reserved[12];
        *((_OWORD *)v48 + 4) = *(_OWORD *)&v84.Reserved.Reserved[16];
        *((_OWORD *)v48 + 5) = *(_OWORD *)&v84.Reserved.Reserved[20];
        *((_QWORD *)v48 + 12) = v84.UpdatePageTable.FirstPteVirtualAddress;
        *((_DWORD *)v48 + 36) = a12;
        *((_QWORD *)v48 + 15) = a5;
        *((_QWORD *)v48 + 16) = v18;
        *((_QWORD *)v48 + 13) = *((_QWORD *)v50 + 2);
        *((_QWORD *)v48 + 14) = *((_QWORD *)v50 + 9);
        if ( a5 && (v67 = *((_QWORD *)a5 + 2)) != 0 )
        {
          v51 = *(_QWORD *)(v67 + 32);
        }
        else if ( v18 )
        {
          v51 = *(_QWORD *)(*((_QWORD *)v18 + 46) + 48LL);
        }
        else
        {
          v51 = 0LL;
        }
        *((_QWORD *)v49 + 17) = v51;
        if ( NumPageTableEntries )
        {
          v52 = 0LL;
          v53 = NumPageTableEntries;
          do
          {
            v52 += 16LL;
            *(_OWORD *)&v49[v52 + 136] = *(_OWORD *)(v52 + v84.Transfer.Source.SegmentAddress.QuadPart - 16);
            --v53;
          }
          while ( v53 );
        }
        v54 = v84.UpdatePageTable.pPageTableEntries64KB;
        if ( v84.UpdatePageTable.pPageTableEntries64KB )
        {
          v68 = 0;
          if ( NumPageTableEntries )
          {
            v69 = 0LL;
            while ( 1 )
            {
              v70 = *(_OWORD *)&v54[v69].0;
              v71 = v68 + NumPageTableEntries;
              ++v68;
              ++v69;
              *(_OWORD *)&v49[16 * v71 + 152] = v70;
              if ( v68 >= NumPageTableEntries )
                break;
              v54 = v84.UpdatePageTable.pPageTableEntries64KB;
            }
          }
        }
      }
      *((_QWORD *)this + 5144) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 41144, 0LL);
      KeLeaveCriticalRegion();
      if ( *((_QWORD *)this + 5150) && !v84.ReadPhysical.SegmentId && (v84.Reserved.Reserved[13] & 1) == 0 )
      {
        v57 = v84.UpdatePageTable.NumPageTableEntries;
        v58 = 0x10000;
        if ( (v84.Reserved.Reserved[13] & 8) == 0 )
          v58 = 4096;
        v59 = 0;
        LODWORD(v72) = v58;
        if ( v84.UnmapApertureSegment.DummyPage.HighPart )
        {
          do
          {
            v60 = *(_QWORD *)(v84.Transfer.Source.SegmentAddress.QuadPart + 16LL * v59);
            if ( (v60 & 1) != 0 )
            {
              v61 = *(_QWORD *)(v84.Transfer.Source.SegmentAddress.QuadPart + 16LL * v59 + 8);
              v62 = (v60 >> 5) & 0x1F;
              v63 = v84.UpdatePageTable.FirstPteVirtualAddress + v59 * v58;
              if ( *((_QWORD *)this + 5150) )
              {
                KeEnterCriticalRegion();
                ExAcquirePushLockExclusiveEx((char *)this + 41144, 0LL);
                *((_QWORD *)this + 5144) = KeGetCurrentThread();
                v64 = *((unsigned int *)this + 10302);
                v65 = *((_QWORD *)this + 5150);
                if ( (_DWORD)v64 == dword_14008A4F4 )
                {
                  *((_DWORD *)this + 10302) = 0;
                  v64 = 0LL;
                }
                v66 = 6 * v64;
                *(_QWORD *)(v65 + 8 * v66) = MEMORY[0xFFFFF78000000014];
                *(_DWORD *)(v65 + 8 * v66 + 32) = 1;
                *(_DWORD *)(v65 + 8 * v66 + 36) = v62;
                *(_QWORD *)(v65 + 8 * v66 + 8) = v61;
                *(_QWORD *)(v65 + 8 * v66 + 16) = 1LL;
                *(_QWORD *)(v65 + 8 * v66 + 24) = v63;
                *(_DWORD *)(v65 + 8 * v66 + 40) = *((_DWORD *)this + 10295);
                ++*((_DWORD *)this + 10302);
                *((_QWORD *)this + 5144) = 0LL;
                ExReleasePushLockExclusiveEx((char *)this + 41144, 0LL);
                KeLeaveCriticalRegion();
                v57 = v84.UpdatePageTable.NumPageTableEntries;
                v58 = v72;
              }
            }
            ++v59;
          }
          while ( v59 < v57 );
          v22 = a17;
          v18 = v80;
          v27 = v73;
        }
      }
      v55 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v84);
      v72 = 0LL;
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(this, a12, 0LL, &v84, v55, 0, &v72, v81);
      if ( v55 != -1071775743 )
        return;
      v26 = v82;
      v25 = v74;
      v21 = v83;
    }
  }
}
