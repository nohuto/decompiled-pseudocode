/*
 * XREFs of ?NotifyResidency2@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@_N2III_KPEB_K@Z @ 0x1400A1848
 * Callers:
 *     ?VidMmPbmmNotifyEvictedCB@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@III_KPEB_KI@Z @ 0x1400B0AB4 (-VidMmPbmmNotifyEvictedCB@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@III_KPEB_KI@.c)
 *     ?VidMmPbmmNotifyResidentCB@@YAJPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@III_KPEB_KI@Z @ 0x1400B0B90 (-VidMmPbmmNotifyResidentCB@@YAJPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@III_KPEB_KI.c)
 *     UpdateAllocationProperty @ 0x1400B2A2C (UpdateAllocationProperty.c)
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z @ 0x1400B6A80 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z.c)
 *     MoveAndFlipDisplayingAllocation @ 0x1400BECE0 (MoveAndFlipDisplayingAllocation.c)
 *     EvictResources @ 0x1401172F8 (EvictResources.c)
 *     ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x14012A3F0 (-CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x14012A910 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAU_MDL@@_N@Z @ 0x14012B6B8 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAU_MDL@@_N@Z.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x140037958 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x140038F20 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?RecordVaPagingHistoryNotifyResidency2@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400AAE38 (-RecordVaPagingHistoryNotifyResidency2@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAUVI.c)
 *     ?VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z @ 0x1400CB2A0 (-VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEA_KPEAX@Z @ 0x1400D6590 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400D7AC4 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUI.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400D7C7C (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGB.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAUVIDMM_GLOBAL_ALLOC@@0I0PEBU_DXGK_ADL@@PEAE0@Z @ 0x1400D87F8 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAUVIDMM_GLOBAL_.c)
 *     ?MustFlushTlbOnValidTransition@VIDMM_GLOBAL@@QEAA_NI@Z @ 0x1400D8A54 (-MustFlushTlbOnValidTransition@VIDMM_GLOBAL@@QEAA_NI@Z.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400D8DB4 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400E78B8 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x140105B64 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyResidency2(
        VIDMM_GLOBAL *this,
        struct VIDMM_PHYSICAL_ADAPTER *a2,
        void ***a3,
        unsigned __int8 a4,
        bool a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        unsigned __int64 *a10)
{
  int v11; // r15d
  void **v12; // r14
  _DWORD *v13; // r8
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned int v17; // ecx
  int v18; // eax
  char v19; // al
  __int64 v20; // rdi
  int v21; // r12d
  unsigned __int64 LogicalAddress; // rax
  unsigned int v23; // edx
  unsigned __int64 v24; // rcx
  __int64 v25; // r8
  unsigned int v26; // edx
  unsigned __int64 v27; // r9
  __int64 v28; // rax
  unsigned int v29; // ebx
  unsigned __int64 v30; // r13
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdi
  struct VIDMM_GLOBAL_ALLOC *v34; // r8
  LARGE_INTEGER *v35; // r15
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // r12
  unsigned __int64 v38; // r13
  _QWORD *v39; // rax
  D3DGPU_VIRTUAL_ADDRESS v40; // rcx
  unsigned __int64 v41; // rax
  int v42; // ebx
  bool v43; // sf
  LARGE_INTEGER *v44; // rdx
  __int64 v45; // rcx
  LARGE_INTEGER **v46; // rax
  unsigned int v47; // [rsp+28h] [rbp-D8h]
  char v48; // [rsp+50h] [rbp-B0h]
  unsigned int v49; // [rsp+54h] [rbp-ACh]
  int v50; // [rsp+58h] [rbp-A8h]
  int v51; // [rsp+5Ch] [rbp-A4h]
  int v52; // [rsp+60h] [rbp-A0h]
  unsigned int v53; // [rsp+64h] [rbp-9Ch]
  _WORD *v54; // [rsp+68h] [rbp-98h]
  unsigned __int64 v55; // [rsp+70h] [rbp-90h] BYREF
  __int128 v56; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v57; // [rsp+88h] [rbp-78h]
  __int64 v58; // [rsp+90h] [rbp-70h]
  unsigned __int64 v59; // [rsp+98h] [rbp-68h]
  unsigned __int64 v60; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v61; // [rsp+A8h] [rbp-58h]
  __int64 v62; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v63; // [rsp+B8h] [rbp-48h]
  struct _DXGKARG_BUILDPAGINGBUFFER v64; // [rsp+C0h] [rbp-40h] BYREF
  UINT v65; // [rsp+240h] [rbp+140h] BYREF
  struct VIDMM_PHYSICAL_ADAPTER *v66; // [rsp+248h] [rbp+148h]

  v66 = a2;
  v11 = a4;
  if ( !*((_BYTE *)this + 41068) )
  {
    v12 = *a3;
    v13 = (*a3)[46];
    if ( (*v13 & 0x10000) != 0 )
    {
      v14 = *((_QWORD *)a2 + 219);
      v58 = a4;
      v15 = *(_QWORD *)(v14 + 8LL * a8);
      if ( (v13[1] & 0x10) == 0 )
        goto LABEL_8;
      v16 = v15 + 70;
      if ( !v15 )
        v16 = 62LL;
      v17 = *(unsigned __int8 *)v16;
      v18 = *((_DWORD *)a2 + (a4 ^ 1LL) + 32);
      if ( _bittest(&v18, v17) )
        v19 = 1;
      else
LABEL_8:
        v19 = 0;
      v20 = a7;
      v48 = v19;
      v56 = 0LL;
      if ( v19 )
      {
        v21 = 1 << a8;
        v50 = 1 << a8;
        if ( ((1 << a8) & *((_DWORD *)a2 + 24)) != 0 )
        {
          LogicalAddress = VidMmiGetLogicalAddress(v12[43], a6 << 12);
          VidMmiInitializeAdlForPfnArray((struct _DXGK_ADL *)&v56, a10, v20, LogicalAddress);
        }
        else
        {
          *((_QWORD *)&v56 + 1) = a9;
          *(_QWORD *)&v56 = a7 | 0x100000000LL;
        }
        v23 = *((_DWORD *)this + 10284);
      }
      else
      {
        v23 = -1;
        v21 = 1 << a8;
        v50 = 1 << a8;
      }
      v62 = v20;
      v24 = v20;
      v57 = v20;
      v25 = v20;
      v26 = ((v23 & 0xFFF) != 0) + (v23 >> 12);
      v53 = v26;
      if ( v20 )
      {
        v27 = v26;
        v52 = 2 * a5;
        v28 = v15 + 72;
        v63 = v26;
        if ( !v15 )
          v28 = 64LL;
        v51 = v11;
        v54 = (_WORD *)v28;
        while ( 1 )
        {
          v29 = v26;
          if ( v24 <= v27 )
            v29 = v24;
          v30 = v25 - v24;
          v49 = v29;
          v55 = v25 - v24;
          if ( g_IsInternalReleaseOrDbg )
          {
            v31 = WdLogNewEntry5_WdTrace();
            v32 = v58;
            *(_QWORD *)(v31 + 24) = v12;
            *(_QWORD *)(v31 + 32) = v32;
            WdLogGlobalForLineNumber = 14974;
          }
          v33 = (*((_DWORD *)*v12 + 13) >> 2) & 0x3F;
          memset(&v64, 0, sizeof(v64));
          VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, v33, v34, &v64);
          v35 = 0LL;
          if ( v48 )
          {
            v47 = (unsigned __int16)*v54;
            v60 = v30 << 12;
            v59 = (v30 + a6) << 12;
            LOBYTE(v65) = 0;
            v61 = v29 << 12;
            v35 = (LARGE_INTEGER *)VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                                     (VIDMM_GLOBAL *)((char *)this + 40512),
                                     v33,
                                     v61,
                                     (struct VIDMM_GLOBAL_ALLOC *)v12,
                                     v59,
                                     v47,
                                     v30 << 12,
                                     (const struct _DXGK_ADL *)&v56,
                                     (unsigned __int8 *)&v65,
                                     0LL);
            if ( !v35 )
            {
              v36 = v59;
              v37 = v60;
              v38 = v61;
              do
              {
                VIDMM_GLOBAL::FlushPagingBufferInternal(this, v33, 1u, 0LL, 0LL, 0, 0);
                VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, v33);
                LOBYTE(v65) = 0;
                v35 = (LARGE_INTEGER *)VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                                         (VIDMM_GLOBAL *)((char *)this + 40512),
                                         v33,
                                         v38,
                                         (struct VIDMM_GLOBAL_ALLOC *)v12,
                                         v36,
                                         (unsigned __int16)*v54,
                                         v37,
                                         (const struct _DXGK_ADL *)&v56,
                                         (unsigned __int8 *)&v65,
                                         0LL);
              }
              while ( !v35 );
              v21 = v50;
              v30 = v55;
              v29 = v49;
            }
            if ( VIDMM_GLOBAL::MustFlushTlbOnValidTransition(this, v33) )
              CVirtualAddressAllocator::FlushGpuVaTlb(
                *((CVirtualAddressAllocator **)this + v33 + 5068),
                v33,
                v35[13].QuadPart,
                v35[14].QuadPart);
          }
          v65 = v30 + a6;
          do
          {
            VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, v33, (struct VIDMM_GLOBAL_ALLOC *)v12, &v64);
            v39 = v12[46];
            v64.Operation = DXGK_OPERATION_SIGNAL_MONITORED_FENCE|DXGK_OPERATION_MAP_APERTURE_SEGMENT;
            v40 = v39[6];
            v64.Transfer.Source.SegmentId = v65;
            v64.UpdateContextAllocation.ContextAllocation = v40;
            v64.Transfer.Source.SegmentAddress.LowPart = v52 | v51 & 0xFFFFFFFD | v64.Transfer.Source.SegmentAddress.LowPart & 0xFFFFFFFC;
            LOWORD(v64.Reserved.Reserved[7]) = *v54;
            if ( v35 )
              v64.UnmapApertureSegment.DummyPage = v35[13];
            else
              v64.UnmapApertureSegment.DummyPage.QuadPart = 0LL;
            if ( (v21 & *((_DWORD *)v66 + 24)) != 0 )
            {
              v41 = VidMmiGetLogicalAddress(v12[43], (v30 + a6) << 12);
              VidMmiInitializeAdlForPfnArray(
                (struct _DXGK_ADL *)&v64.SpecialLockTransfer.TransferOffset,
                &a10[v30],
                v29,
                v41);
            }
            else
            {
              v64.Transfer.TransferSize = v30 + a9;
              v64.Fill.FillSize = v29 | 0x100000000LL;
            }
            v42 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v64);
            v55 = 0LL;
            VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
              this,
              v33,
              (struct VIDMM_GLOBAL_ALLOC *)v12,
              &v64,
              v42,
              0,
              &v55,
              0LL);
            v43 = v42 < 0;
            v29 = v49;
          }
          while ( v43 );
          VIDMM_GLOBAL::RecordVaPagingHistoryNotifyResidency2(this, &v64, (struct VIDMM_GLOBAL_ALLOC *)v12);
          if ( v35 )
          {
            v44 = v35 + 4;
            v45 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8 * v33) + 584LL;
            v46 = *(LARGE_INTEGER ***)(*(_QWORD *)(*((_QWORD *)this + 5040) + 8 * v33) + 592LL);
            if ( *v46 != (LARGE_INTEGER *)v45 )
              __fastfail(3u);
            v44->QuadPart = v45;
            v35[5].QuadPart = (LONGLONG)v46;
            *v46 = v44;
            *(_QWORD *)(v45 + 8) = v44;
            v35[6].QuadPart = (LONGLONG)v12[11];
          }
          v24 = v57 - v49;
          v57 = v24;
          if ( !v24 )
            break;
          v26 = v53;
          v25 = v62;
          v27 = v63;
        }
      }
    }
  }
}
