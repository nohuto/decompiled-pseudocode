/*
 * XREFs of ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@21U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1400A0BA8
 * Callers:
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@2U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400A0378 (-MemoryTransferInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAME.c)
 *     ?MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@2U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400A09F4 (-MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARA.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x140037958 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x140038F20 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z @ 0x14003957C (-GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z.c)
 *     McTemplateK0pppxxq_EtwWriteTransfer @ 0x140041EA0 (McTemplateK0pppxxq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z @ 0x1400CB2A0 (-VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEA_KPEAX@Z @ 0x1400D6590 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400D7AC4 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUI.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400D7C7C (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGB.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAUVIDMM_GLOBAL_ALLOC@@0I0PEBU_DXGK_ADL@@PEAE0@Z @ 0x1400D87F8 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAUVIDMM_GLOBAL_.c)
 *     ?MustFlushTlbOnValidTransition@VIDMM_GLOBAL@@QEAA_NI@Z @ 0x1400D8A54 (-MustFlushTlbOnValidTransition@VIDMM_GLOBAL@@QEAA_NI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400E78B8 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x140105B64 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z @ 0x140116424 (-GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z.c)
 *     ?VidMmRecordTransfer@@YAXPEAUVIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1401195CC (-VidMmRecordTransfer@@YAXPEAUVIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     ?ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z @ 0x14011A6F8 (-ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z.c)
 *     ?RecordVaPagingHistoryVirtualTransfer@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14011BC74 (-RecordVaPagingHistoryVirtualTransfer@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAUVID.c)
 */

void __fastcall VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct VIDMM_GLOBAL_ALLOC *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        struct VIDMM_TRANSFER_PARAMETER *a6,
        struct VIDMM_TRANSFER_PARAMETER *a7,
        unsigned __int64 a8,
        struct _DXGK_TRANSFERFLAGS a9,
        unsigned __int64 a10)
{
  struct VIDMM_TRANSFER_PARAMETER *v11; // r12
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rax
  unsigned int v15; // ecx
  bool v16; // r10
  __int64 v17; // r13
  __int64 v18; // r8
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rbx
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  unsigned __int64 v25; // r11
  unsigned int v26; // ecx
  unsigned __int64 v27; // r13
  unsigned int v28; // r15d
  unsigned __int64 v29; // r10
  unsigned __int64 v30; // rsi
  struct VIDMM_GLOBAL_ALLOC *v31; // r14
  unsigned int v32; // ebx
  const unsigned __int64 *v33; // rdx
  struct VIDMM_TRANSFER_PARAMETER *v34; // r15
  unsigned int i; // r12d
  const unsigned __int64 *v36; // rdx
  __int64 v37; // r13
  bool MustFlushTlbOnValidTransition; // al
  __int64 v39; // r10
  unsigned __int64 v40; // r9
  unsigned __int64 v41; // r8
  struct VIDMM_GLOBAL_ALLOC *v42; // r8
  LARGE_INTEGER *v43; // r14
  struct VIDMM_GLOBAL_ALLOC *v44; // rbx
  D3DGPU_VIRTUAL_ADDRESS v45; // rax
  ADAPTER_RENDER *v46; // rcx
  unsigned int v47; // edx
  __int64 v48; // r10
  CVirtualAddressAllocator *v49; // rbx
  unsigned int VirtualAddressOfPageTable; // eax
  int v51; // eax
  __int64 v52; // rcx
  int v53; // ebx
  __int64 v54; // rdx
  __int64 v55; // rax
  unsigned int v56; // r13d
  __int64 v57; // rbx
  HANDLE CurrentProcessId; // rax
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // r10
  struct VIDMM_MAPPED_VA_RANGE *v64; // r9
  unsigned __int64 v65; // rsi
  unsigned __int64 v66; // r14
  __int64 v67; // rcx
  __int64 *v68; // rdx
  __int64 **v69; // rax
  struct VIDMM_MAPPED_VA_RANGE *v70; // r8
  __int64 *v71; // rdx
  __int64 v72; // rcx
  __int64 **v73; // rax
  struct VIDMM_GLOBAL_ALLOC *v74; // rcx
  __int64 v75; // rdx
  unsigned __int8 *v76; // [rsp+40h] [rbp-C0h]
  char v77; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v78; // [rsp+51h] [rbp-AFh] BYREF
  unsigned __int8 v79[2]; // [rsp+52h] [rbp-AEh] BYREF
  unsigned int v80; // [rsp+54h] [rbp-ACh]
  struct VIDMM_GLOBAL_ALLOC *v81; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v82; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v83; // [rsp+68h] [rbp-98h]
  unsigned __int64 v84; // [rsp+70h] [rbp-90h]
  unsigned int v85; // [rsp+78h] [rbp-88h]
  unsigned int v86; // [rsp+7Ch] [rbp-84h]
  unsigned __int64 v87; // [rsp+80h] [rbp-80h]
  unsigned __int64 v88; // [rsp+88h] [rbp-78h]
  int v89; // [rsp+90h] [rbp-70h]
  unsigned int v90; // [rsp+94h] [rbp-6Ch]
  unsigned __int64 v91; // [rsp+98h] [rbp-68h]
  unsigned __int64 v92; // [rsp+A0h] [rbp-60h]
  __int64 v93; // [rsp+A8h] [rbp-58h]
  struct VIDMM_MAPPED_VA_RANGE *v94; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v95; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v96; // [rsp+C0h] [rbp-40h]
  struct VIDMM_MAPPED_VA_RANGE *v97; // [rsp+C8h] [rbp-38h]
  __int128 v98; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v99; // [rsp+E0h] [rbp-20h] BYREF
  struct VIDMM_TRANSFER_PARAMETER *v100; // [rsp+F0h] [rbp-10h]
  struct VIDMM_TRANSFER_PARAMETER *v101; // [rsp+F8h] [rbp-8h]
  __int64 v102; // [rsp+100h] [rbp+0h]
  struct _DXGKARG_BUILDPAGINGBUFFER v103; // [rsp+110h] [rbp+10h] BYREF
  __int128 v104; // [rsp+250h] [rbp+150h] BYREF
  unsigned __int64 v105; // [rsp+260h] [rbp+160h]

  v11 = a6;
  v95 = a10;
  v12 = *(_QWORD *)a7;
  v13 = *(_QWORD *)a6;
  v14 = *((unsigned int *)this + 10284);
  v15 = *((_DWORD *)this + 1759);
  v16 = *(_QWORD *)a7 < *(_QWORD *)a6;
  v17 = a2;
  v84 = a4;
  v81 = a3;
  v80 = a2;
  v100 = a7;
  v101 = a6;
  v87 = v13;
  v88 = v12;
  v77 = v16;
  if ( v15 && (unsigned int)v14 >= v15 )
    v14 = v15;
  v18 = *((_QWORD *)a7 + 2);
  v19 = *((_QWORD *)a6 + 2);
  if ( v19 != v18 )
  {
    v91 = (unsigned int)v14;
    v77 = 1;
LABEL_14:
    v21 = a8;
    v83 = a8;
    goto LABEL_15;
  }
  if ( v13 == v12 )
    return;
  if ( v13 <= v12 )
    v20 = v12 - v13;
  else
    v20 = v13 - v12;
  if ( v20 <= v14 )
    v14 = v20;
  v91 = v14;
  if ( v12 < v13 )
    goto LABEL_14;
  v21 = a8;
  v13 += a4;
  v12 += a4;
  v87 = v13;
  v88 = v12;
  v77 = v16;
  v91 = v14;
  v83 = a4 + a8;
LABEL_15:
  if ( v19 )
    v85 = *(unsigned __int16 *)(v19 + 64);
  else
    v85 = 0;
  if ( v18 )
    v86 = *(unsigned __int16 *)(v18 + 64);
  else
    v86 = 0;
  v79[0] = 0;
  v78 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = v81;
    WdLogGlobalForLineNumber = 14132;
    v22 = (_QWORD *)WdLogNewEntry5_WdTrace();
    v22[3] = v84;
    v22[4] = a5;
    v22[5] = v21;
    WdLogGlobalForLineNumber = 14134;
    v23 = (_QWORD *)WdLogNewEntry5_WdTrace();
    v23[3] = *((_QWORD *)a6 + 2);
    v23[4] = *(_QWORD *)a6;
    v23[5] = *((_QWORD *)a6 + 5);
    v23[6] = *((_QWORD *)a6 + 3);
    WdLogGlobalForLineNumber = 14136;
    v24 = (_QWORD *)WdLogNewEntry5_WdTrace();
    v24[3] = *((_QWORD *)a7 + 2);
    v24[4] = *(_QWORD *)a7;
    v24[5] = *((_QWORD *)a7 + 5);
    v24[6] = *((_QWORD *)a7 + 3);
    WdLogGlobalForLineNumber = 14138;
    a4 = v84;
  }
  v25 = a5;
  if ( a4 )
  {
    v102 = v17;
    while ( 1 )
    {
      v26 = v91;
      v27 = v83;
      if ( a4 <= v91 )
        v26 = a4;
      v82 = v26;
      v90 = v26;
      if ( v77 )
      {
        v93 = v13;
        v96 = v12;
      }
      else
      {
        v93 = v13 - v26;
        v96 = v12 - v26;
        v27 = v83 - v26;
      }
      v28 = v80;
      v29 = v83 + v25;
      v30 = v82;
      v31 = v81;
      v92 = v83 + v25;
      v32 = v26 >> 12;
      while ( 1 )
      {
        v33 = (const unsigned __int64 *)*((_QWORD *)v11 + 5);
        v98 = 0LL;
        if ( v33 )
        {
          VidMmiInitializeAdlForPfnArray((struct _DXGK_ADL *)&v98, v33, v32, *((_QWORD *)v11 + 1));
        }
        else
        {
          *((_QWORD *)&v98 + 1) = (*(_QWORD *)v11 + *((_QWORD *)v11 + 3)) >> 12;
          *(_QWORD *)&v98 = v32 | 0x100000000LL;
        }
        v94 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                (VIDMM_GLOBAL *)((char *)this + 40512),
                v28,
                v30,
                v31,
                v29,
                v85,
                v27,
                (const struct _DXGK_ADL *)&v98,
                v79,
                v95);
        if ( v94 )
          break;
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, v28, 1u, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, v28);
        v29 = v92;
      }
      v34 = v100;
      for ( i = v80; ; VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, i) )
      {
        v36 = (const unsigned __int64 *)*((_QWORD *)v34 + 5);
        v99 = 0LL;
        if ( v36 )
        {
          VidMmiInitializeAdlForPfnArray((struct _DXGK_ADL *)&v99, v36, v32, *((_QWORD *)v34 + 1));
        }
        else
        {
          *((_QWORD *)&v99 + 1) = (*(_QWORD *)v34 + *((_QWORD *)v34 + 3)) >> 12;
          *(_QWORD *)&v99 = v32 | 0x100000000LL;
        }
        v97 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                (VIDMM_GLOBAL *)((char *)this + 40512),
                i,
                v30,
                v31,
                v92,
                v86,
                v27,
                (const struct _DXGK_ADL *)&v99,
                &v78,
                v95);
        if ( v97 )
          break;
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, i, 1u, 0LL, 0LL, 0, 0);
      }
      v37 = i;
      MustFlushTlbOnValidTransition = VIDMM_GLOBAL::MustFlushTlbOnValidTransition(this, i);
      v11 = v101;
      if ( MustFlushTlbOnValidTransition )
      {
        v40 = *((_QWORD *)v94 + 14);
        v41 = *((_QWORD *)v94 + 13);
        if ( v40 <= *(_QWORD *)(v39 + 112) )
          v40 = *(_QWORD *)(v39 + 112);
        if ( v41 >= *(_QWORD *)(v39 + 104) )
          v41 = *(_QWORD *)(v39 + 104);
        CVirtualAddressAllocator::FlushGpuVaTlb(*((CVirtualAddressAllocator **)this + v37 + 5068), v37, v41, v40);
      }
      memset(&v103, 0, sizeof(v103));
      VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, v37, v42, &v103);
      if ( *((_QWORD *)v11 + 5) )
      {
        v103.Transfer.Destination.SegmentAddress.LowPart = 1;
      }
      else
      {
        v103.Transfer.Destination.SegmentAddress.LowPart = 0;
        if ( !*((_QWORD *)v34 + 5) )
          v103.Transfer.Destination.SegmentAddress.LowPart = 2;
      }
      v43 = (LARGE_INTEGER *)v97;
      do
      {
        v44 = v81;
        VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, v37, v81, &v103);
        if ( v44 )
          v45 = *(_QWORD *)(*((_QWORD *)v44 + 46) + 48LL);
        else
          v45 = 0LL;
        v46 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        v103.UpdateContextAllocation.ContextAllocation = v45;
        v103.Operation = DXGK_OPERATION_VIRTUAL_TRANSFER;
        v103.Fill.FillSize = v92;
        v103.Transfer.TransferSize = v30;
        v103.MapApertureSegment.OffsetInPages = *((_QWORD *)v94 + 13);
        v103.Transfer.Source.SegmentAddress = v43[13];
        if ( (*((_DWORD *)ADAPTER_RENDER::GetGpuMmuCaps(v46, v37) + 5) & 1) != 0 )
        {
          v49 = (CVirtualAddressAllocator *)*((_QWORD *)this + (unsigned int)v37 + 5068);
          v103.UnmapApertureSegment.DummyPage.QuadPart = (unsigned int)CVirtualAddressAllocator::GetVirtualAddressOfPageTable(
                                                                         v49,
                                                                         v47,
                                                                         *(_QWORD *)(v48 + 104),
                                                                         v79[0]);
          VirtualAddressOfPageTable = CVirtualAddressAllocator::GetVirtualAddressOfPageTable(
                                        v49,
                                        v37,
                                        v43[13].QuadPart,
                                        v78);
          v44 = v81;
          v103.TransferVirtual.DestinationPageTable = VirtualAddressOfPageTable;
          v103.Transfer.Destination.SegmentAddress.HighPart = v103.Transfer.Destination.SegmentAddress.HighPart & 0xFFFFFFFC | v79[0] & 1 | (2 * (v78 & 1));
        }
        VIDMM_GLOBAL::RecordVaPagingHistoryVirtualTransfer(this, &v103, v44);
        v51 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v103);
        v52 = *((_QWORD *)this + 870);
        v53 = v51;
        v89 = v51;
        if ( v52 )
        {
          v54 = *((_QWORD *)v34 + 2);
          if ( !v54 || *(_DWORD *)(v54 + 100) != 1 )
            VIDMM_PROCESS::ChargeEvictionTransfer(
              *(VIDMM_PROCESS **)(v52 + 8),
              *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
              v30);
        }
        _InterlockedAdd64((volatile signed __int64 *)this + 981, v30);
        LOBYTE(v82) = byte_14008A201 & 0x10;
        if ( (byte_14008A201 & 0x10) != 0 )
        {
          v55 = *((_QWORD *)v11 + 2);
          if ( !v55 || (v56 = 2, *(_DWORD *)(v55 + 100) != 1) )
            v56 = 1;
          v57 = *((_QWORD *)this + v80 + 144);
          CurrentProcessId = PsGetCurrentProcessId();
          LODWORD(v76) = v56;
          McTemplateK0pppxxq_EtwWriteTransfer((__int64)v81, v59, v60, CurrentProcessId, v81, v57, v93, v30, v76);
          VidMmRecordTransfer((VIDMM_GLOBAL *)((char *)this + 7136), v30, v56);
          LODWORD(v37) = v80;
          v53 = v89;
        }
        v105 = 0LL;
        v61 = *((_QWORD *)v11 + 2);
        v104 = 0LL;
        if ( v61 )
          LODWORD(v104) = (unsigned __int16)(*(_WORD *)(v61 + 62) + 1);
        *((_QWORD *)&v104 + 1) = v93;
        v62 = *((_QWORD *)v34 + 2);
        if ( v62 )
          DWORD1(v104) = (unsigned __int16)(*(_WORD *)(v62 + 62) + 1);
        else
          DWORD1(v104) = 0;
        v105 = v96;
        v82 = 0LL;
        VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(this, v37, v81, &v103, v53, 0, &v82, &v104);
      }
      while ( v53 < 0 );
      v63 = v102;
      v64 = v94;
      v65 = v87;
      v66 = v88;
      v67 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8 * v102) + 584LL;
      v68 = (__int64 *)((char *)v94 + 32);
      v69 = *(__int64 ***)(*(_QWORD *)(*((_QWORD *)this + 5040) + 8 * v102) + 592LL);
      if ( *v69 != (__int64 *)v67 )
        goto LABEL_80;
      v70 = v97;
      *v68 = v67;
      v68[1] = (__int64)v69;
      *v69 = v68;
      *(_QWORD *)(v67 + 8) = v68;
      v71 = (__int64 *)((char *)v70 + 32);
      v72 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8 * v63) + 584LL;
      v73 = *(__int64 ***)(*(_QWORD *)(*((_QWORD *)this + 5040) + 8 * v63) + 592LL);
      if ( *v73 != (__int64 *)v72 )
LABEL_80:
        __fastfail(3u);
      *v71 = v72;
      *((_QWORD *)v70 + 5) = v73;
      *v73 = v71;
      *(_QWORD *)(v72 + 8) = v71;
      v74 = v81;
      v75 = v90;
      *((_QWORD *)v64 + 6) = *((_QWORD *)v81 + 11);
      a4 = v84 - v75;
      *((_QWORD *)v70 + 6) = *((_QWORD *)v74 + 11);
      v84 = a4;
      if ( v77 )
      {
        v13 = (unsigned int)v75 + v65;
        v12 = v75 + v66;
        v83 += v75;
      }
      else
      {
        v13 = v65 - (unsigned int)v75;
        v12 = v66 - v75;
        v83 -= v75;
      }
      v88 = v12;
      v87 = v13;
      if ( !a4 )
        break;
      v25 = a5;
    }
  }
}
