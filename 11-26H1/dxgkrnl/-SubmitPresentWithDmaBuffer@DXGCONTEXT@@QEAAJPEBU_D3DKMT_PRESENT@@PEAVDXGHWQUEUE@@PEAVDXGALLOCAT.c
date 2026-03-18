/*
 * XREFs of ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402F6600
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402F4EA0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x140037230 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmGetDmaPatchLocationList@VIDMM_EXPORT@@QEAAPEAU_D3DDDI_PATCHLOCATIONLIST@@PEAUVIDMM_DMA_BUFFER@@@Z @ 0x14004BB90 (-VidMmGetDmaPatchLocationList@VIDMM_EXPORT@@QEAAPEAU_D3DDDI_PATCHLOCATIONLIST@@PEAUVIDMM_DMA_BUF.c)
 *     ?VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@PEAI@Z @ 0x14004C210 (-VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MUL.c)
 *     ?VidMmGetDmaAllocationList@VIDMM_EXPORT@@QEAAPEAU_DXGK_ALLOCATIONLIST@@PEAUVIDMM_DMA_BUFFER@@@Z @ 0x14004C24C (-VidMmGetDmaAllocationList@VIDMM_EXPORT@@QEAAPEAU_DXGK_ALLOCATIONLIST@@PEAUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?VidMmEndDmaBufferCPUAccess@VIDMM_EXPORT@@QEAAXPEBUVIDMM_DMA_BUFFER@@@Z @ 0x14004D804 (-VidMmEndDmaBufferCPUAccess@VIDMM_EXPORT@@QEAAXPEBUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z @ 0x14005613C (-VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAIPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x1400584EC (-VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@.c)
 *     TraceDxgkPatchLocationList @ 0x140058B80 (TraceDxgkPatchLocationList.c)
 *     ?VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@_N@Z @ 0x14006D2B0 (-VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@_N@Z.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_NPEAI@Z @ 0x14007C7B8 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_NPEAI.c)
 *     ?VidSchFlushPendingCommand@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@H@Z @ 0x140080418 (-VidSchFlushPendingCommand@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@H@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAUVIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x14029AA24 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAUVIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?DdiSignalMonitoredFence@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z @ 0x1402A4BA4 (-DdiSignalMonitoredFence@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z.c)
 *     ?DdiPresentToHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1402A6AE8 (-DdiPresentToHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1402F4940 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?EnsureKmSubmissionProgressSyncObject@DXGHWQUEUE@@QEAAJXZ @ 0x1402F7CF0 (-EnsureKmSubmissionProgressSyncObject@DXGHWQUEUE@@QEAAJXZ.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresentWithDmaBuffer(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT *a2,
        struct DXGHWQUEUE *a3,
        struct DXGALLOCATION *a4,
        struct DXGALLOCATION *a5,
        struct _DXGKARG_PRESENT *a6,
        struct VIDMM_DMA_BUFFER *a7,
        struct VIDSCH_SUBMIT_DATA_BASE *a8,
        struct COREDEVICEACCESS *a9)
{
  struct DXGALLOCATION *v10; // rdx
  char v11; // si
  struct VIDMM_DMA_BUFFER *v12; // rbx
  struct COREDEVICEACCESS *v13; // r10
  bool v14; // cf
  struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF Value; // eax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // r11
  int v21; // eax
  unsigned int v22; // ebx
  __int64 v23; // r12
  struct VIDMM_DMA_BUFFER *v24; // rcx
  void *v25; // rdx
  UINT v26; // ecx
  DXGHWQUEUE *v27; // rsi
  UINT v28; // eax
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rdx
  struct DXGALLOCATION *v32; // r9
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rax
  bool v36; // zf
  __int64 v37; // r8
  UINT v38; // eax
  __int64 v39; // r9
  __int64 v40; // r8
  ADAPTER_RENDER *v41; // rcx
  bool v42; // bl
  __int64 v43; // rcx
  int v44; // eax
  unsigned int v45; // ebx
  __int64 v46; // rax
  int v47; // ecx
  __int64 v48; // rax
  unsigned __int64 v49; // rbx
  unsigned int v50; // esi
  int v51; // ecx
  int v52; // edx
  __int64 v53; // rcx
  int v54; // eax
  char *v55; // rbx
  char *v56; // rsi
  struct VIDMM_ALLOC **v57; // rax
  int v58; // eax
  int v59; // ebx
  void *v61; // rdx
  ADAPTER_RENDER *v62; // rcx
  __int64 v63; // rax
  const wchar_t *v64; // r9
  DXGHWQUEUE *v65; // rsi
  UINT64 v66; // rdx
  void *pDmaBufferPrivateData; // rax
  __int64 v68; // rcx
  void *v69; // rax
  __int64 v70; // rcx
  void *v71; // rax
  void *v72; // rdx
  int v73; // eax
  DXGHWQUEUE *v74; // r8
  __int64 v75; // rax
  const wchar_t *v76; // r9
  char v77; // si
  __int64 v78; // rdx
  unsigned int *v79; // rsi
  struct VIDMM_ALLOC *v80; // r9
  struct VIDMM_DMA_BUFFER *v81; // rdi
  VIDMM_EXPORT *v82; // rsi
  __int64 v83; // rbx
  D3DDDI_PATCHLOCATIONLIST *pPatchLocationListOut; // rbx
  struct _D3DDDI_PATCHLOCATIONLIST *v85; // rax
  DXGK_ALLOCATIONLIST *DmaAllocationList; // rax
  struct VIDMM_DMA_BUFFER *v87; // rdx
  D3DDDI_PATCHLOCATIONLIST *DmaPatchLocationList; // rax
  struct VIDMM_DMA_BUFFER *v89; // rcx
  __int64 v90; // rcx
  void *v91; // rdx
  void *v92; // rax
  __int64 v93; // rcx
  int v94; // eax
  __int64 v95; // rax
  __int64 v96; // r8
  __int64 v97; // rbx
  struct VIDMM_ALLOC **v98; // r9
  __int64 v99; // rax
  union _LARGE_INTEGER *v100; // rcx
  struct DXGALLOCATION *v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rcx
  char *v104; // rcx
  char *v105; // rcx
  bool v106; // [rsp+20h] [rbp-E0h]
  char v107; // [rsp+60h] [rbp-A0h]
  bool v108; // [rsp+61h] [rbp-9Fh]
  char v109; // [rsp+62h] [rbp-9Eh]
  struct VIDMM_DMA_BUFFER *v110; // [rsp+68h] [rbp-98h] BYREF
  struct DXGALLOCATION *v111; // [rsp+70h] [rbp-90h]
  unsigned int v112; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v113; // [rsp+7Ch] [rbp-84h] BYREF
  char *v114; // [rsp+80h] [rbp-80h] BYREF
  UINT v115; // [rsp+88h] [rbp-78h]
  struct VIDMM_ALLOC **v116; // [rsp+90h] [rbp-70h]
  struct DXGALLOCATION *v117; // [rsp+98h] [rbp-68h]
  D3DGPU_VIRTUAL_ADDRESS v118; // [rsp+A0h] [rbp-60h]
  DXGHWQUEUE *v119; // [rsp+A8h] [rbp-58h]
  unsigned int *v120; // [rsp+B0h] [rbp-50h]
  _DXGKARG_SIGNALMONITOREDFENCE v121; // [rsp+C0h] [rbp-40h] BYREF
  LARGE_INTEGER v122; // [rsp+110h] [rbp+10h]
  struct COREDEVICEACCESS *v123; // [rsp+118h] [rbp+18h]
  __int64 v124; // [rsp+120h] [rbp+20h]
  int v125; // [rsp+128h] [rbp+28h] BYREF
  int v126; // [rsp+12Ch] [rbp+2Ch]
  int v127; // [rsp+130h] [rbp+30h]
  int v128; // [rsp+134h] [rbp+34h]
  int v129; // [rsp+138h] [rbp+38h]
  __int64 v130; // [rsp+13Ch] [rbp+3Ch]
  int v131; // [rsp+144h] [rbp+44h]
  struct DXGALLOCATION *v132; // [rsp+148h] [rbp+48h]
  struct DXGALLOCATION *v133; // [rsp+150h] [rbp+50h]
  _QWORD v134[12]; // [rsp+160h] [rbp+60h] BYREF

  v10 = a5;
  v11 = 1;
  v12 = a7;
  v13 = a9;
  v14 = *((_BYTE *)a8 + 356) != 0;
  v111 = a4;
  v119 = a3;
  v117 = a5;
  v120 = (unsigned int *)(((unsigned __int64)a8 + 616) & -(__int64)v14);
  Value = (struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF)a6->Flags.Value;
  v110 = a7;
  v123 = a9;
  v107 = 0;
  v114 = 0LL;
  v109 = 0;
  v108 = 1;
  a6->MultipassOffset = 0;
  if ( (*(_BYTE *)&Value & 4) != 0 && !a4 )
  {
    WdLogSingleEntry0(2LL);
    v75 = 9048LL;
    v76 = L"Source allocation cannot be NULL for Flip present";
    goto LABEL_76;
  }
  if ( (*((_DWORD *)this + 98) & 0x10) != 0 && !a3 )
  {
    WdLogSingleEntry0(2LL);
    v75 = 9058LL;
    v76 = L"Hardware context present is not provided with hardware queue array";
LABEL_76:
    WdLogGlobalForLineNumber = v75;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v76, v75, 0LL, 0LL, 0LL, 0LL);
    LODWORD(v23) = -1073741823;
    goto LABEL_77;
  }
  while ( 1 )
  {
    if ( !v12 )
    {
      v22 = 0;
      LODWORD(v23) = DXGCONTEXT::AcquireDmaBuffer(this, &v110, v13, 0);
      if ( (int)v23 < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 9073;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to acquire DMA buffer for Present. Context: 0x%I64x",
          (__int64)this,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_161:
        v77 = 0;
        v107 = 0;
        goto LABEL_79;
      }
      v12 = v110;
      if ( !v110 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 9078;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pVidMmDmaBuffer", 9078LL, 0LL, 0LL, 0LL, 0LL);
        v12 = v110;
      }
      v10 = v117;
      a4 = v111;
    }
    v126 &= 2u;
    v125 = 0;
    if ( a4 )
      v16 = *((_DWORD *)a4 + 4);
    else
      v16 = 0;
    v128 &= 2u;
    v127 = v16;
    if ( v10 )
      v17 = *((_DWORD *)v10 + 4);
    else
      v17 = 0;
    v129 = v17;
    v131 = 0;
    v132 = a4;
    v130 = v130 & 2 | 1;
    v18 = *((_QWORD *)this + 2);
    v133 = v10;
    v115 = 0;
    v122.QuadPart = 0LL;
    v118 = 0LL;
    v124 = 0LL;
    DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v18 + 16) + 16LL));
    LOBYTE(v19) = v11;
    v106 = 1;
    v21 = (*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *, int *, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(v20 + 760) + 8LL)
                                                                                        + 544LL))(
            v12,
            &v125,
            3LL,
            v19);
    v22 = 0;
    LODWORD(v23) = v21;
    if ( v21 < 0 )
    {
      WdLogSingleEntry2(3LL, this, v21);
      WdLogGlobalForLineNumber = 9132;
      goto LABEL_161;
    }
    v107 = 1;
    (*(void (__fastcall **)(struct VIDMM_DMA_BUFFER *, char **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                       + 760LL)
                                                                           + 8LL)
                                                               + 488LL))(
      v110,
      &v114);
    v24 = v110;
    a6->pDmaBuffer = v114;
    a6->DmaSize = (*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                               + 760LL)
                                                                                   + 8LL)
                                                                       + 504LL))(v24);
    v25 = (void *)(*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                               + 760LL)
                                                                                   + 8LL)
                                                                       + 536LL))(v110);
    v26 = v115;
    v27 = v119;
    a6->pDmaBufferPrivateData = v25;
    v28 = *((_DWORD *)this + 52);
    a6->DmaBufferSegmentId = v26;
    a6->DmaBufferPhysicalAddress = v122;
    a6->DmaBufferPrivateDataSize = v28;
    if ( v109 )
    {
      v90 = *((_QWORD *)v27 + 12);
      v121.DmaBufferPrivateDataSize = v28;
      v121.DmaSize = a6->DmaSize;
      v121.MultipassOffset = a6->MultipassOffset;
      v121.pDmaBuffer = a6->pDmaBuffer;
      v121.DmaBufferGpuVirtualAddress = v118;
      v121.pDmaBufferPrivateData = v25;
      v91 = (void *)*((_QWORD *)this + 23);
      *((_DWORD *)&v121.KernelSubmissionType + 1) = 0;
      *(&v121.DmaSize + 1) = 0;
      v121.MonitoredFenceGpuVa = *(_QWORD *)(v90 + 48);
      v92 = *(void **)(v90 + 64);
      v93 = *((_QWORD *)this + 2);
      v121.MonitoredFenceCpuVa = v92;
      v121.MonitoredFenceValue = *((_QWORD *)v27 + 13);
      v121.hHwQueue = (HANDLE)*((_QWORD *)v27 + 4);
      v121.KernelSubmissionType = DXGK_KERNEL_SUBMISSION_PRESENTBLT;
      v94 = ADAPTER_RENDER::DdiSignalMonitoredFence(*(ADAPTER_RENDER **)(v93 + 16), v91, &v121);
      v23 = v94;
      a6->DmaBufferPrivateDataSize = v121.DmaBufferPrivateDataSize;
      a6->DmaSize = v121.DmaSize;
      a6->MultipassOffset = v121.MultipassOffset;
      a6->pDmaBuffer = v121.pDmaBuffer;
      a6->pDmaBufferPrivateData = v121.pDmaBufferPrivateData;
      if ( v94 == -1071775743 )
      {
        WdLogSingleEntry5(0LL, 275LL, 40LL, this, 0LL, 0LL);
        WdLogGlobalForLineNumber = 9193;
LABEL_163:
        WdLogSingleEntry2(3LL, this, v23);
        WdLogGlobalForLineNumber = 9200;
        goto LABEL_78;
      }
      if ( v94 < 0 )
        goto LABEL_163;
      v109 = 0;
    }
    *(_DWORD *)a8 ^= (*(_DWORD *)a8 ^ (*((unsigned __int8 *)this + 430) << 27)) & 0x8000000;
    if ( v108 )
    {
      v29 = *((_QWORD *)this + 2);
      if ( *((_BYTE *)this + 430) )
      {
        memset(v134, 0, sizeof(v134));
        v30 = (*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 16)
                                                                                           + 760LL)
                                                                               + 8LL)
                                                                   + 528LL))(v110);
        v32 = v111;
        v33 = v30;
        v134[4] = *(_QWORD *)(v30 + 24);
        if ( v111 )
        {
          LOBYTE(v31) = *((_BYTE *)this + 431) != 0;
          v34 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                           + 760LL)
                                                                               + 8LL)
                                                                   + 232LL))(
                  *((_QWORD *)v111 + 3),
                  v31,
                  *((unsigned int *)this + 97));
          v32 = v111;
          v134[5] = v34;
        }
        if ( (a6->Flags.Value & 4) != 0 )
        {
          v95 = *((_QWORD *)this + 2);
          v96 = *((_QWORD *)v32 + 6);
          v112 = 0;
          VIDMM_EXPORT::VidMmGetPinnedAllocationInfo(
            *(VIDMM_EXPORT **)(*(_QWORD *)(v95 + 16) + 760LL),
            *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v95 + 16) + 768LL),
            *(struct VIDMM_MULTI_GLOBAL_ALLOC **)(v96 + 8),
            &v112,
            (union _LARGE_INTEGER *)&v134[6],
            0LL);
          LOWORD(v134[7]) = v112;
        }
        else if ( v117 )
        {
          v35 = *(_QWORD *)(v33 + 48);
          v22 = 0;
          v36 = *((_BYTE *)this + 431) == 0;
          v37 = *((unsigned int *)this + 97);
          v134[8] = v35;
          LOBYTE(v31) = !v36;
          v134[9] = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 760LL)
                                                                                    + 8LL)
                                                                        + 232LL))(
                      *((_QWORD *)v117 + 3),
                      v31,
                      v37);
          if ( !v134[9] )
          {
            LODWORD(v23) = -1073741811;
            WdLogSingleEntry2(2LL, this, -1073741811LL);
            WdLogGlobalForLineNumber = 9274;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"0x%I64x Rejecting Present because the virtual address is not assigned to the destination allocati"
                        "on, ntStatus 0x%I64x",
              (__int64)this,
              -1073741811LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_78;
          }
        }
        a6->DmaBufferGpuVirtualAddress = v118;
        a6->pAllocationList = (DXGK_ALLOCATIONLIST *)v134;
        v38 = 0;
        a6->pPatchLocationListOut = 0LL;
      }
      else
      {
        DmaAllocationList = VIDMM_EXPORT::VidMmGetDmaAllocationList(
                              *(VIDMM_EXPORT **)(*(_QWORD *)(v29 + 16) + 760LL),
                              v110);
        v87 = v110;
        a6->pAllocationList = DmaAllocationList;
        DmaPatchLocationList = VIDMM_EXPORT::VidMmGetDmaPatchLocationList(
                                 *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                                 v87);
        v89 = v110;
        a6->pPatchLocationListOut = DmaPatchLocationList;
        v38 = (*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                           + 760LL)
                                                                               + 8LL)
                                                                   + 512LL))(v89);
      }
      a6->PatchLocationListOutSize = v38;
      v39 = *((_QWORD *)this + 2);
      v40 = v39;
      if ( (*((_DWORD *)this + 98) & 0x10) != 0
        && (v41 = *(ADAPTER_RENDER **)(v39 + 16),
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v41 + 2) + 216LL) + 64LL) + 40LL) + 28LL) >= 0xA002u) )
      {
        LODWORD(v23) = ADAPTER_RENDER::DdiPresentToHwQueue(v41, *((void **)v27 + 4), a6);
        if ( (_DWORD)v23 != -1073741822 )
        {
LABEL_21:
          if ( *((_BYTE *)this + 430) && (a6->pPatchLocationListOut || a6->PatchLocationListOutSize) )
          {
            WdLogSingleEntry5(0LL, 275LL, 9LL, a6, 0LL, 0LL);
            WdLogGlobalForLineNumber = 9361;
          }
          if ( (_DWORD)v23 != -1071775743 )
          {
            if ( (int)v23 >= 0 )
              goto LABEL_26;
            v97 = (int)v23;
            if ( (_DWORD)v23 == -1071775736 )
            {
              WdLogSingleEntry2(4LL, this, -1071775736LL);
              WdLogGlobalForLineNumber = 9382;
              goto LABEL_77;
            }
LABEL_124:
            WdLogSingleEntry2(2LL, this, v97);
            WdLogGlobalForLineNumber = 9386;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"0x%I64x Driver failed Present 0x%I64x",
              (__int64)this,
              v97,
              0LL,
              0LL,
              0LL);
            goto LABEL_77;
          }
          if ( (a6->Flags.Value & 4) != 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 9371;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"0x%I64x Driver must not return STATUS_GRAPHICS_INSUFFICIENT_DMA_BUFFER for Flip",
              (__int64)this,
              0LL,
              0LL,
              0LL,
              0LL);
            v97 = -1073741823LL;
            LODWORD(v23) = -1073741823;
            goto LABEL_124;
          }
LABEL_26:
          if ( *((_BYTE *)this + 430) )
          {
            if ( a6->pAllocationList == (DXGK_ALLOCATIONLIST *)v134 )
              goto LABEL_28;
            WdLogSingleEntry0(1LL);
            v63 = 9397LL;
            v64 = L"pPresentDdiArg->pAllocationInfo == AllocationInfo";
LABEL_67:
            WdLogGlobalForLineNumber = v63;
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)v64, v63, 0LL, 0LL, 0LL, 0LL);
          }
          else if ( a6->pAllocationList != (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL) + 528LL))(v110) )
          {
            WdLogSingleEntry0(1LL);
            v63 = 9401LL;
            v64 = L"pPresentDdiArg->pAllocationList == GetVidMmExport()->VidMmGetDmaAllocationList(pVidMmDmaBuffer)";
            goto LABEL_67;
          }
LABEL_28:
          v42 = (_DWORD)v23 == -1071775743;
          v108 = v42;
          if ( (*((_DWORD *)this + 98) & 0x10) != 0 )
          {
            v65 = v119;
            LODWORD(v23) = DXGHWQUEUE::EnsureKmSubmissionProgressSyncObject(v119);
            if ( (int)v23 < 0 )
              goto LABEL_77;
            v66 = *((_QWORD *)v65 + 13) + 1LL;
            *((_QWORD *)v65 + 13) = v66;
            if ( !*((_BYTE *)this + 296) )
            {
              v121.DmaBufferPrivateDataSize = a6->DmaBufferPrivateDataSize;
              v121.DmaSize = a6->DmaSize;
              v121.MultipassOffset = a6->MultipassOffset;
              v121.pDmaBuffer = a6->pDmaBuffer;
              pDmaBufferPrivateData = a6->pDmaBufferPrivateData;
              *((_DWORD *)&v121.KernelSubmissionType + 1) = 0;
              *(&v121.DmaSize + 1) = 0;
              v68 = *((_QWORD *)v65 + 12);
              v121.pDmaBufferPrivateData = pDmaBufferPrivateData;
              v121.DmaBufferGpuVirtualAddress = v118;
              v121.MonitoredFenceGpuVa = *(_QWORD *)(v68 + 48);
              v69 = *(void **)(v68 + 64);
              v70 = *((_QWORD *)this + 2);
              v121.MonitoredFenceCpuVa = v69;
              v71 = (void *)*((_QWORD *)v65 + 4);
              v121.MonitoredFenceValue = v66;
              v72 = (void *)*((_QWORD *)this + 23);
              v121.hHwQueue = v71;
              v121.KernelSubmissionType = DXGK_KERNEL_SUBMISSION_PRESENTBLT;
              v73 = ADAPTER_RENDER::DdiSignalMonitoredFence(*(ADAPTER_RENDER **)(v70 + 16), v72, &v121);
              LODWORD(v23) = v73;
              a6->DmaBufferPrivateDataSize = v121.DmaBufferPrivateDataSize;
              a6->DmaSize = v121.DmaSize;
              a6->MultipassOffset = v121.MultipassOffset;
              v108 = v42;
              v22 = 0;
              a6->pDmaBuffer = v121.pDmaBuffer;
              a6->pDmaBufferPrivateData = v121.pDmaBufferPrivateData;
              if ( v73 == -1071775743 )
              {
                v109 = 1;
              }
              else if ( v73 < 0 )
              {
                WdLogSingleEntry2(3LL, this, v73);
                WdLogGlobalForLineNumber = 9458;
                goto LABEL_78;
              }
            }
          }
          else
          {
            v108 = (_DWORD)v23 == -1071775743;
          }
          goto LABEL_30;
        }
        v61 = (void *)*((_QWORD *)this + 23);
        v62 = *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL);
      }
      else
      {
        v61 = 0LL;
        if ( (a6->Flags.Value & 1) != 0
          || (v40 = *((_QWORD *)this + 2), !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v39 + 16) + 16LL) + 3097LL)) )
        {
          v61 = (void *)*((_QWORD *)this + 23);
          v39 = v40;
        }
        v62 = *(ADAPTER_RENDER **)(v39 + 16);
      }
      LODWORD(v23) = ADAPTER_RENDER::DdiPresent(v62, v61, a6);
      goto LABEL_21;
    }
LABEL_30:
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 736LL)
                                                                + 8LL)
                                                    + 592LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 744LL))
      && a6->pDmaBuffer <= v114 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9476;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"GetVidSchExport()->VidSchIsTDRPending(GetRenderCore()->GetVidSchGlobal()) || static_cast<BYTE*>(pPresen"
                  "tDdiArg->pDmaBuffer) > static_cast<BYTE*>(pDmaBuffer)",
        9476LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v43 = (*(unsigned int (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                            + 760LL)
                                                                                + 8LL)
                                                                    + 504LL))(v110);
    v44 = (int)v114;
    if ( a6->pDmaBuffer > &v114[v43] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9477;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"static_cast<BYTE*>(pPresentDdiArg->pDmaBuffer) <= static_cast<BYTE*>(pDmaBuffer)+GetVidMmExport()->VidM"
                  "mGetDmaBufferLength(pVidMmDmaBuffer)",
        9477LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v44 = (int)v114;
    }
    v45 = LODWORD(a6->pDmaBuffer) - v44;
    v46 = *((_QWORD *)this + 2);
    v112 = v45;
    v47 = LODWORD(a6->pDmaBufferPrivateData)
        - (*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v46 + 16) + 760LL)
                                                                           + 8LL)
                                                               + 536LL))(v110);
    v48 = *((_QWORD *)this + 2);
    LODWORD(v116) = v47;
    if ( (*(unsigned int (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v48 + 16)
                                                                                           + 760LL)
                                                                               + 8LL)
                                                                   + 504LL))(v110) < v45 )
    {
      WdLogSingleEntry0(1LL);
      LODWORD(v49) = 0;
      WdLogGlobalForLineNumber = 9484;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"GetVidMmExport()->VidMmGetDmaBufferLength(pVidMmDmaBuffer) >= DMABufferLength",
        9484LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      LODWORD(v49) = 0;
    }
    (*(void (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                              + 760LL)
                                                                  + 8LL)
                                                      + 496LL))(v110);
    v114 = 0LL;
    if ( !*((_BYTE *)this + 430) )
    {
      if ( a6->pPatchLocationListOut < VIDMM_EXPORT::VidMmGetDmaPatchLocationList(
                                         *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                                         v110) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 9499;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pPresentDdiArg->pPatchLocationListOut >= GetVidMmExport()->VidMmGetDmaPatchLocationList(pVidMmDmaBuffer)",
          9499LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v81 = v110;
      v82 = *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL);
      v83 = (*(unsigned int (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*((_QWORD *)v82 + 1) + 512LL))(v110);
      if ( a6->pPatchLocationListOut > &VIDMM_EXPORT::VidMmGetDmaPatchLocationList(v82, v81)[v83] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 9500;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pPresentDdiArg->pPatchLocationListOut <= GetVidMmExport()->VidMmGetDmaPatchLocationList(pVidMmDmaBuff"
                    "er) + GetVidMmExport()->VidMmGetDmaPatchLocationListLength(pVidMmDmaBuffer)",
          9500LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      pPatchLocationListOut = a6->pPatchLocationListOut;
      v49 = 0xAAAAAAAAAAAAAAABuLL
          * (((char *)pPatchLocationListOut
            - (char *)VIDMM_EXPORT::VidMmGetDmaPatchLocationList(
                        *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                        v110)) >> 3);
      if ( (*(unsigned int (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 760LL)
                                                                                 + 8LL)
                                                                     + 512LL))(v110) < (unsigned int)v49 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 9510;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"GetVidMmExport()->VidMmGetDmaPatchLocationListLength(pVidMmDmaBuffer) >= PatchLocationTableLength",
          9510LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (qword_1401664C0 & 0x10) != 0 )
      {
        v85 = VIDMM_EXPORT::VidMmGetDmaPatchLocationList(
                *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                v110);
        TraceDxgkPatchLocationList((int)this, (char)v110, v49, (__int64)v85);
      }
    }
    v50 = v112;
    if ( !v112
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 736LL)
                                                                + 8LL)
                                                    + 592LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 744LL)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9525;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"DMABufferLength > 0 || GetVidSchExport()->VidSchIsTDRPending(GetRenderCore()->GetVidSchGlobal())",
        9525LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v51 = *(_DWORD *)a8;
    if ( (*(_DWORD *)a8 & 0x20) != 0 )
    {
      v52 = v108 || v109;
      v53 = (v52 << 6) | v51 & 0xFFFFFFBF;
      *(_DWORD *)a8 = v53;
      if ( v52 && bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v53, (__int64)&EventPerformanceWarning);
    }
    else
    {
      *(_DWORD *)a8 = v51 & 0xFFFFFFBF;
    }
    *((_QWORD *)a8 + 1) = v110;
    v54 = (int)v116;
    *((_DWORD *)a8 + 19) = (_DWORD)v116;
    *((_DWORD *)a8 + 13) = v50;
    *((_DWORD *)a8 + 12) = 0;
    *((_DWORD *)a8 + 15) = 3;
    *((_DWORD *)a8 + 14) = 0;
    *((_DWORD *)a8 + 17) = v49;
    *((_DWORD *)a8 + 16) = 0;
    *((_DWORD *)a8 + 18) = 0;
    if ( *((_BYTE *)this + 430) )
    {
      *((_DWORD *)a8 + 20) = v54;
      *((_DWORD *)a8 + 19) = a6->DmaBufferPrivateDataSize;
    }
    v55 = (char *)a8 + 600;
    if ( *((_BYTE *)a8 + 356) )
    {
      v56 = (char *)a8 + 600;
      v57 = (struct VIDMM_ALLOC **)&v55[8 * *((_DWORD *)a8 + 151) * (*((_DWORD *)a8 + 152) + 28) + 56];
    }
    else
    {
      v57 = (struct VIDMM_ALLOC **)((char *)a8 + 504);
      v56 = (char *)a8 + 496;
    }
    v36 = *((_DWORD *)a8 + 30) == 4;
    v116 = v57;
    if ( v36 )
    {
      if ( !v111 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 9563;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pSrcAllocation", 9563LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( (*(_DWORD *)a8 & 0x40) != 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 9564;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pVidSchSubmitData->SubmitFlags.SplitedPresent == FALSE",
          9564LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v98 = v116;
      *(_DWORD *)v56 = *(_DWORD *)v56 & 0xFFFFFC00 | 1;
      if ( (int)VIDMM_EXPORT::VidMmReferencePrimaryAllocationForSubmission(
                  *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                  *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 792LL),
                  *((struct VIDMM_MULTI_ALLOC **)v111 + 3),
                  v98,
                  v120) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 9584;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(RefStatus)", 9584LL, 0LL, 0LL, 0LL, 0LL);
      }
      v36 = *((_BYTE *)a8 + 356) == 0;
      v99 = *((_QWORD *)this + 2);
      v113 = 0;
      if ( v36 )
        v100 = (union _LARGE_INTEGER *)((char *)a8 + 520);
      else
        v100 = (union _LARGE_INTEGER *)&v55[8 * *((_DWORD *)a8 + 151) * (*((_DWORD *)a8 + 152) + 28) + 48];
      VIDMM_EXPORT::VidMmGetPinnedAllocationInfo(
        *(VIDMM_EXPORT **)(*(_QWORD *)(v99 + 16) + 760LL),
        *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v99 + 16) + 768LL),
        *(struct VIDMM_MULTI_GLOBAL_ALLOC **)(*((_QWORD *)v111 + 6) + 8LL),
        &v113,
        v100,
        0LL);
      if ( *((_BYTE *)a8 + 356) )
        *(_WORD *)((char *)a8 + (unsigned int)(8 * *((_DWORD *)a8 + 151) * (*((_DWORD *)a8 + 152) + 28)) + 640) = v113;
      else
        *((_DWORD *)a8 + 139) ^= (*((_DWORD *)a8 + 139) ^ (v113 << 17)) & 0x3E0000;
      v101 = v111;
      v102 = *((_QWORD *)v111 + 5);
      if ( v102 && (*(_DWORD *)(v102 + 4) & 8) != 0 )
        v103 = *(_QWORD *)(*(_QWORD *)(v102 + 56) + 184LL);
      else
        v103 = 0LL;
      if ( *((_BYTE *)a8 + 356) )
        *(_QWORD *)((char *)a8 + (unsigned int)(8 * *((_DWORD *)a8 + 151) * (*((_DWORD *)a8 + 152) + 28)) + 664) = v103;
      else
        *((_QWORD *)a8 + 72) = v103;
      if ( *((_BYTE *)a8 + 356) )
        v104 = &v55[8 * *((_DWORD *)a8 + 151) * (*((_DWORD *)a8 + 152) + 28) + 32];
      else
        v104 = (char *)a8 + 512;
      *(_QWORD *)v104 = *(_QWORD *)(*((_QWORD *)v101 + 6) + 16LL);
      if ( *((_BYTE *)a8 + 356) )
        v105 = &v55[8 * *((_DWORD *)a8 + 151) * (*((_DWORD *)a8 + 152) + 28) + 24];
      else
        v105 = (char *)a8 + 568;
      *(_QWORD *)v105 = *((_QWORD *)this + 23);
      if ( *((_BYTE *)a8 + 356) )
        *((_DWORD *)a8 + 162) = -1;
    }
    else if ( (*(_DWORD *)v56 & 0x3FF) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9623;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pVidSchFlipMultiplaneOverlay->ToLayers == 0",
        9623LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *((struct _KTHREAD **)this + 56) != KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9626;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"GetContextLock()->IsExclusiveOwner()",
        9626LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*((_DWORD *)this + 98) & 0x10) != 0 )
    {
      v74 = v119;
      *((_QWORD *)a8 + 62) = *((_QWORD *)v119 + 13);
      *((_DWORD *)a8 + 126) = 0;
      *((_QWORD *)a8 + 65) = *(_QWORD *)(*((_QWORD *)v74 + 12) + 64LL);
      *((_QWORD *)a8 + 64) = *(_QWORD *)(*((_QWORD *)v74 + 12) + 48LL);
      v58 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL)
                                                                                            + 8LL)
                                                                                + 456LL))(
              *((_QWORD *)v74 + 6),
              a8);
    }
    else
    {
      v58 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL)
                                                                                            + 8LL)
                                                                                + 448LL))(
              *((_QWORD *)this + 32),
              a8);
    }
    v59 = v58;
    if ( v58 < 0 )
      break;
    a4 = v111;
    v12 = 0LL;
    v10 = v117;
    v11 = 0;
    v13 = v123;
    v110 = 0LL;
    if ( !v109 && !v108 )
      return (unsigned int)v23;
  }
  VIDSCH_EXPORT::VidSchFlushPendingCommand(
    *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
    *((struct _VIDSCH_CONTEXT **)this + 32));
  if ( (*(_DWORD *)v56 & 0x3FF) != 0 && *v116 )
    VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
      *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
      *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
      *((_DWORD *)a8 + 34),
      *v116,
      v106,
      v120);
  LODWORD(v23) = v59;
LABEL_77:
  v22 = 0;
LABEL_78:
  v77 = v107;
LABEL_79:
  if ( v110 )
  {
    if ( v114 )
    {
      VIDMM_EXPORT::VidMmEndDmaBufferCPUAccess(
        *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
        v110);
      if ( (*((_DWORD *)this + 98) & 0x10) == 0 )
        VIDSCH_EXPORT::VidSchFlushPendingCommand(
          *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
          *((struct _VIDSCH_CONTEXT **)this + 32));
    }
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
      && *((_DWORD *)a8 + 50) )
    {
      v79 = v120;
      do
      {
        v80 = (struct VIDMM_ALLOC *)*((_QWORD *)a8 + v22 + 26);
        if ( v80 )
        {
          VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
            *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
            0,
            v80,
            v106,
            v79);
          *((_QWORD *)a8 + v22 + 26) = 0LL;
        }
        ++v22;
      }
      while ( v22 < *((_DWORD *)a8 + 50) );
      v78 = *((_QWORD *)this + 2);
      v77 = v107;
    }
    if ( v77 )
      VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(*(VIDMM_EXPORT **)(*(_QWORD *)(v78 + 16) + 760LL), v110);
    VIDMM_EXPORT::VidMmReleaseDmaBuffer(*(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL), v110);
  }
  return (unsigned int)v23;
}
