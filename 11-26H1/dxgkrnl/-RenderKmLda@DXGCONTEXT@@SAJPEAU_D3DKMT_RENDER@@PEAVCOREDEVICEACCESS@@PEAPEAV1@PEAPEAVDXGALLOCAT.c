/*
 * XREFs of ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x140297258
 * Callers:
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEBD@Z @ 0x140298100 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEBD@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x140011178 (McTemplateK0p_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z @ 0x140033350 (--0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x14003D730 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?VidSchSubmitCommand@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x14003D9D4 (-VidSchSubmitCommand@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z.c)
 *     ?VidSchSubmitCommandToHwQueue@VIDSCH_EXPORT@@QEAAJPEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1400416EC (-VidSchSubmitCommandToHwQueue@VIDSCH_EXPORT@@QEAAJPEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@.c)
 *     ?VidMmReferenceDmaBuffer@VIDMM_EXPORT@@QEAAJPEAUVIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAIPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAUVIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x14004A1B8 (-VidMmReferenceDmaBuffer@VIDMM_EXPORT@@QEAAJPEAUVIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IE.c)
 *     ?VidMmGetDmaPrivateData@VIDMM_EXPORT@@QEAAPEAXPEAUVIDMM_DMA_BUFFER@@@Z @ 0x14004B3F0 (-VidMmGetDmaPrivateData@VIDMM_EXPORT@@QEAAPEAXPEAUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?VidMmGetDmaBufferLength@VIDMM_EXPORT@@QEAAIPEBUVIDMM_DMA_BUFFER@@@Z @ 0x14004B414 (-VidMmGetDmaBufferLength@VIDMM_EXPORT@@QEAAIPEBUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?VidMmGetDmaAllocationList@VIDMM_EXPORT@@QEAAPEAU_DXGK_ALLOCATIONLIST@@PEAUVIDMM_DMA_BUFFER@@@Z @ 0x14004C24C (-VidMmGetDmaAllocationList@VIDMM_EXPORT@@QEAAPEAU_DXGK_ALLOCATIONLIST@@PEAUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?VidMmBeginDmaBufferCPUAccess@VIDMM_EXPORT@@QEAAXPEBUVIDMM_DMA_BUFFER@@PEAPEAX@Z @ 0x14004D5F4 (-VidMmBeginDmaBufferCPUAccess@VIDMM_EXPORT@@QEAAXPEBUVIDMM_DMA_BUFFER@@PEAPEAX@Z.c)
 *     ?VidMmEndDmaBufferCPUAccess@VIDMM_EXPORT@@QEAAXPEBUVIDMM_DMA_BUFFER@@@Z @ 0x14004D804 (-VidMmEndDmaBufferCPUAccess@VIDMM_EXPORT@@QEAAXPEBUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z @ 0x14005613C (-VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@_N@Z @ 0x14006D2B0 (-VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@_N@Z.c)
 *     Feature_3472570682__private_IsEnabledDeviceUsageNoInline @ 0x140074858 (Feature_3472570682__private_IsEnabledDeviceUsageNoInline.c)
 *     ?VidSchFlushPendingCommand@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@H@Z @ 0x140080418 (-VidSchFlushPendingCommand@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@H@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAUVIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x14029AA24 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAUVIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?CleanupSubmittedPrimaries@@YAXPEAVDXGCONTEXT@@PEAUVIDMM_PRIMARIES_REFERENCES@@@Z @ 0x14029ACB4 (-CleanupSubmittedPrimaries@@YAXPEAVDXGCONTEXT@@PEAUVIDMM_PRIMARIES_REFERENCES@@@Z.c)
 *     ?DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z @ 0x1402A4F2C (-DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?EnsureKmSubmissionProgressSyncObject@DXGHWQUEUE@@QEAAJXZ @ 0x1402F7CF0 (-EnsureKmSubmissionProgressSyncObject@DXGHWQUEUE@@QEAAJXZ.c)
 *     ?SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z @ 0x1403B38B0 (-SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z.c)
 */

__int64 __fastcall DXGCONTEXT::RenderKmLda(
        struct _D3DKMT_RENDER *a1,
        struct COREDEVICEACCESS *a2,
        struct DXGCONTEXT **a3,
        struct DXGALLOCATION **a4,
        struct DXGHWQUEUE **a5)
{
  struct _D3DKMT_RENDER *v5; // r12
  struct DXGCONTEXT *v7; // rax
  __int64 v8; // r9
  struct DXGPROCESS *Current; // rax
  struct _D3DDDI_ALLOCATIONLIST *Pool2; // rcx
  unsigned __int64 AllocationCount; // rbx
  char v12; // r13
  int v13; // edi
  unsigned __int64 v14; // rbx
  _BYTE *v15; // rsi
  struct DXGPROCESS *v17; // r14
  char *v18; // rdi
  struct DXGHWQUEUE **v19; // rbx
  __int64 v20; // r15
  UINT v21; // eax
  __int64 v22; // rdi
  D3DKMT_HANDLE hAllocation; // ebx
  unsigned int v24; // eax
  int v25; // r8d
  __int64 v26; // rcx
  struct _EX_RUNDOWN_REF *v27; // rdx
  ULONG_PTR Count; // rbx
  __int64 v29; // rcx
  __int64 v30; // rbx
  int v31; // eax
  void *v32; // rdx
  struct VIDSCH_SUBMIT_DATA_BASE *v33; // r12
  struct VIDMM_PRIMARIES_REFERENCES *v34; // rdi
  struct _D3DKMT_RENDER *v35; // rsi
  int v36; // eax
  void *DmaPrivateData; // r8
  UINT DmaBufferPrivateDataSize; // r9d
  int v39; // eax
  UINT AllocationListSize; // edx
  void *pDmaBuffer; // rcx
  int v42; // eax
  struct DXGHWQUEUE **v43; // rsi
  int v44; // eax
  int v45; // eax
  int v46; // esi
  int v47; // edi
  int v48; // ecx
  struct VIDMM_ALLOC **v49; // rdx
  struct DXGHWQUEUE **v50; // rdx
  VIDSCH_EXPORT *v51; // rcx
  int v52; // eax
  int v53; // edi
  struct DXGPROCESS *v54; // rdi
  PVOID v55; // rcx
  bool v56; // zf
  int v57; // esi
  VIDSCH_EXPORT *v58; // r15
  struct DXGCONTEXT **v59; // rbx
  struct VIDMM_DMA_BUFFER *v60; // rdx
  VIDMM_EXPORT *v61; // rbx
  struct DXGALLOCATION **v62; // [rsp+58h] [rbp-A8h]
  bool v63; // [rsp+60h] [rbp-A0h]
  char v64; // [rsp+61h] [rbp-9Fh]
  struct VIDMM_DMA_BUFFER *v65; // [rsp+68h] [rbp-98h] BYREF
  void *v66; // [rsp+70h] [rbp-90h] BYREF
  VIDMM_EXPORT *v67; // [rsp+78h] [rbp-88h]
  int v68; // [rsp+80h] [rbp-80h]
  UINT v69; // [rsp+84h] [rbp-7Ch]
  _BYTE *v70; // [rsp+88h] [rbp-78h]
  UINT v71; // [rsp+90h] [rbp-70h]
  unsigned int v72; // [rsp+94h] [rbp-6Ch] BYREF
  unsigned __int64 v73; // [rsp+98h] [rbp-68h] BYREF
  struct DXGHWQUEUE **v74; // [rsp+A0h] [rbp-60h]
  struct _EX_RUNDOWN_REF *v75; // [rsp+A8h] [rbp-58h] BYREF
  struct DXGPROCESS *v76; // [rsp+B0h] [rbp-50h]
  struct _D3DKMT_RENDER *v77; // [rsp+B8h] [rbp-48h]
  __int64 v78; // [rsp+C0h] [rbp-40h]
  struct VIDSCH_SUBMIT_DATA_BASE *v79[2]; // [rsp+C8h] [rbp-38h] BYREF
  struct VIDMM_ALLOC *v80; // [rsp+D8h] [rbp-28h] BYREF
  VIDSCH_EXPORT *v81; // [rsp+E0h] [rbp-20h]
  int IsEnabledDeviceUsageNoInline; // [rsp+E8h] [rbp-18h]
  struct _D3DDDI_ALLOCATIONLIST *v83; // [rsp+F0h] [rbp-10h]
  struct DXGHWQUEUE **v84; // [rsp+F8h] [rbp-8h]
  union _LARGE_INTEGER v85; // [rsp+100h] [rbp+0h] BYREF
  struct ADAPTER_RENDER *v86; // [rsp+108h] [rbp+8h]
  struct DXGPROCESS *v87; // [rsp+110h] [rbp+10h]
  _DXGKARG_RENDERGDI v88; // [rsp+120h] [rbp+20h] BYREF
  struct DXGALLOCATION **v89; // [rsp+170h] [rbp+70h]
  struct COREDEVICEACCESS *v90; // [rsp+178h] [rbp+78h]
  __int64 v91; // [rsp+180h] [rbp+80h]
  char *v92; // [rsp+188h] [rbp+88h]
  struct DXGCONTEXT **v93; // [rsp+190h] [rbp+90h]
  __int64 v94; // [rsp+198h] [rbp+98h]
  _DXGKARG_RENDER v95; // [rsp+1A0h] [rbp+A0h] BYREF
  PVOID v96; // [rsp+210h] [rbp+110h]
  _BYTE v97[128]; // [rsp+218h] [rbp+118h] BYREF
  int v98; // [rsp+298h] [rbp+198h]
  _BYTE v99[32]; // [rsp+2A0h] [rbp+1A0h] BYREF
  PVOID P; // [rsp+2C0h] [rbp+1C0h]
  _BYTE v101[128]; // [rsp+2C8h] [rbp+1C8h] BYREF
  int v102; // [rsp+348h] [rbp+248h]

  v5 = a1;
  v84 = a5;
  v7 = *a3;
  v89 = a4;
  v77 = a1;
  v93 = a3;
  v8 = *((_QWORD *)v7 + 2);
  v90 = a2;
  v86 = *(struct ADAPTER_RENDER **)(v8 + 16);
  v67 = (VIDMM_EXPORT *)*((_QWORD *)v86 + 95);
  v81 = (VIDSCH_EXPORT *)*((_QWORD *)v86 + 92);
  Current = DXGPROCESS::GetCurrent();
  Pool2 = 0LL;
  AllocationCount = v5->AllocationCount;
  v12 = 1;
  v13 = v5->BroadcastContextCount + 1;
  v87 = Current;
  P = 0LL;
  v102 = 0;
  if ( (unsigned int)AllocationCount <= 0x10 )
  {
    Pool2 = (struct _D3DDDI_ALLOCATIONLIST *)v101;
    P = v101;
    if ( (_DWORD)AllocationCount )
    {
      memset(v101, 0, 8 * AllocationCount);
      Pool2 = (struct _D3DDDI_ALLOCATIONLIST *)P;
    }
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / AllocationCount < 8 )
      goto LABEL_7;
    Pool2 = (struct _D3DDDI_ALLOCATIONLIST *)ExAllocatePool2(256LL, 8 * AllocationCount, 1265072196LL);
    P = Pool2;
  }
  v102 = AllocationCount;
LABEL_7:
  v83 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  v14 = v5->AllocationCount;
  v15 = 0LL;
  v70 = 0LL;
  v96 = 0LL;
  v98 = 0;
  if ( (unsigned int)v14 > 0x10 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v14 < 8 )
      goto LABEL_15;
    v15 = (_BYTE *)ExAllocatePool2(256LL, 8 * v14, 1265072196LL);
    v96 = v15;
    goto LABEL_13;
  }
  v15 = v97;
  v70 = v97;
  v96 = v97;
  if ( (_DWORD)v14 )
  {
    memset(v97, 0, 8 * v14);
    v15 = v96;
LABEL_13:
    Pool2 = (struct _D3DDDI_ALLOCATIONLIST *)P;
    v70 = v15;
  }
  v98 = v14;
LABEL_15:
  if ( !v15 )
  {
    v96 = 0LL;
    v98 = 0;
    if ( Pool2 != (struct _D3DDDI_ALLOCATIONLIST *)v101 )
    {
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
    }
    return 3221225495LL;
  }
  v17 = 0LL;
  IsEnabledDeviceUsageNoInline = Feature_3472570682__private_IsEnabledDeviceUsageNoInline();
  v68 = 0;
  if ( v13 <= 0 )
  {
LABEL_137:
    if ( v96 != v97 && v96 )
      ExFreePoolWithTag(v96, 0);
    v96 = 0LL;
    v98 = 0;
LABEL_136:
    v55 = P;
    v56 = P == v101;
    goto LABEL_99;
  }
  v91 = v13;
  v18 = (char *)((char *)a3 - (char *)v84);
  v76 = 0LL;
  v92 = (char *)((char *)a3 - (char *)v84);
  v19 = v84;
  v74 = v84;
LABEL_22:
  v78 = ((*(_DWORD *)&v5->Flags & 8u) << 12) | 0x100LL;
  v95.pCommand = (char *)v5->pNewCommandBuffer + v5->CommandOffset;
  v95.CommandLength = v5->CommandLength;
  memset(&v95.CommandLength + 1, 0, 100);
  v20 = *(_QWORD *)&v18[(_QWORD)v19];
  v94 = v20;
  if ( (*(_DWORD *)(v20 + 392) & 0x10) != 0 && !v84 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1235;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Hardware context LDA render is not provided with hardware queue array",
      1235LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( v96 != v97 && v96 )
      ExFreePoolWithTag(v96, 0);
    v96 = 0LL;
    v98 = 0;
    if ( P != v101 && P )
      ExFreePoolWithTag(P, 0);
    return 3221225473LL;
  }
  v69 = *(_DWORD *)(v20 + 388);
  v21 = 0;
  v71 = 0;
  if ( !v5->AllocationCount )
  {
LABEL_45:
    v30 = v78;
    v66 = 0LL;
    v64 = 0;
    v63 = 1;
    v65 = 0LL;
    while ( 1 )
    {
      v31 = DXGCONTEXT::AcquireDmaBuffer((DXGCONTEXT *)v20, &v65, v90, 0);
      LODWORD(v17) = v31;
      if ( v31 < 0 )
      {
        WdLogSingleEntry2(4LL, v20, v31);
        WdLogGlobalForLineNumber = 1319;
        goto LABEL_125;
      }
      if ( bTracingEnabled )
      {
        if ( (*(_DWORD *)&v5->Flags & 0x20) != 0 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
            goto LABEL_54;
          v32 = &EventRenderKm;
        }
        else
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
            goto LABEL_54;
          v32 = &EventRender;
        }
        McTemplateK0p_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)v32);
      }
LABEL_54:
      v72 = 0;
      v85.QuadPart = 0LL;
      v73 = 0LL;
      v80 = 0LL;
      CVidSchSubmitData::CVidSchSubmitData((CVidSchSubmitData *)v79, v86, 1);
      v33 = v79[0];
      if ( !v79[0] )
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 1344;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate VidSchSubmitData",
          1344LL,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v17) = -1073741801;
        CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v79);
LABEL_125:
        v12 = 0;
        goto LABEL_126;
      }
      v34 = (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)v79[0] + 200);
      v62 = (struct DXGALLOCATION **)v15;
      v35 = v77;
      v36 = VIDMM_EXPORT::VidMmReferenceDmaBuffer(
              v67,
              v65,
              v83,
              v77->AllocationCount,
              1,
              1,
              &v72,
              &v85,
              &v73,
              &v80,
              (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)v79[0] + 200),
              v62);
      LODWORD(v17) = v36;
      if ( v36 < 0 )
      {
        WdLogSingleEntry2(3LL, v20, v36);
        WdLogGlobalForLineNumber = 1380;
        if ( v66 )
          CleanupSubmittedPrimaries((struct DXGCONTEXT *)v20, v34);
        CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v79);
        goto LABEL_125;
      }
      VIDMM_EXPORT::VidMmBeginDmaBufferCPUAccess(v67, v65, &v66);
      v78 = (__int64)v66;
      v95.pDmaBuffer = v66;
      v95.DmaSize = VIDMM_EXPORT::VidMmGetDmaBufferLength(v67, v65);
      v95.pAllocationList = VIDMM_EXPORT::VidMmGetDmaAllocationList(v67, v65);
      v69 = v35->AllocationCount;
      v95.AllocationListSize = v69;
      DmaPrivateData = (void *)VIDMM_EXPORT::VidMmGetDmaPrivateData(v67, v65);
      DmaBufferPrivateDataSize = *(_DWORD *)(v20 + 208);
      v95.DmaBufferSegmentId = v72;
      v95.DmaBufferPhysicalAddress = v85;
      v95.pDmaBufferPrivateData = DmaPrivateData;
      v95.DmaBufferPrivateDataSize = DmaBufferPrivateDataSize;
      if ( v64 )
      {
        v39 = DXGCONTEXT::SignalRenderKmMonitoredFence(&v95, (struct DXGCONTEXT *)v20, *v74, v73);
        v17 = (struct DXGPROCESS *)v39;
        if ( v39 == -1071775743 )
        {
          WdLogSingleEntry5(0LL, 275LL, 40LL, v20, 0LL, 0LL);
          WdLogGlobalForLineNumber = 1417;
LABEL_104:
          WdLogSingleEntry2(3LL, v20, v17);
          WdLogGlobalForLineNumber = 1424;
          if ( v66 )
            CleanupSubmittedPrimaries((struct DXGCONTEXT *)v20, v34);
          goto LABEL_106;
        }
        if ( v39 < 0 )
          goto LABEL_104;
        AllocationListSize = v95.AllocationListSize;
        DmaBufferPrivateDataSize = v95.DmaBufferPrivateDataSize;
        DmaPrivateData = v95.pDmaBufferPrivateData;
        pDmaBuffer = v95.pDmaBuffer;
        v64 = 0;
      }
      else
      {
        pDmaBuffer = (void *)v78;
        AllocationListSize = v69;
      }
      if ( v63 )
      {
        v88.pCommand = (char *)v35->pNewCommandBuffer + v35->CommandOffset;
        v88.CommandLength = v35->CommandLength;
        *(&v88.CommandLength + 1) = 0;
        v88.DmaBufferGpuVirtualAddress = v73;
        *(&v88.DmaSize + 1) = 0;
        v88.DmaSize = v95.DmaSize;
        *(&v88.DmaBufferPrivateDataSize + 1) = 0;
        v88.pAllocationList = v95.pAllocationList;
        v88.pDmaBuffer = pDmaBuffer;
        v88.pDmaBufferPrivateData = DmaPrivateData;
        v88.MultipassOffset = v95.MultipassOffset;
        v88.DmaBufferPrivateDataSize = DmaBufferPrivateDataSize;
        v88.AllocationListSize = AllocationListSize;
        v42 = ADAPTER_RENDER::DdiRenderGdi(v86, *(void **)(v20 + 184), &v88);
        LODWORD(v17) = v42;
        if ( (int)(v42 + 0x80000000) >= 0 && v42 != -1071775743 )
        {
          WdLogSingleEntry2(3LL, v20, v42);
          WdLogGlobalForLineNumber = 1457;
          goto LABEL_108;
        }
        v63 = v42 == -1071775743;
        v95.pDmaBuffer = v88.pDmaBuffer;
        v95.pDmaBufferPrivateData = v88.pDmaBufferPrivateData;
        v95.MultipassOffset = v88.MultipassOffset;
        if ( (*(_DWORD *)(v20 + 392) & 0x10) != 0 )
        {
          v43 = v74;
          v95.DmaBufferPrivateDataSize = v88.DmaBufferPrivateDataSize;
          v95.DmaSize = v88.DmaSize;
          LODWORD(v17) = DXGHWQUEUE::EnsureKmSubmissionProgressSyncObject(*v74);
          if ( (int)v17 < 0 )
            goto LABEL_108;
          ++*((_QWORD *)*v43 + 13);
          if ( !*(_BYTE *)(v20 + 296) )
          {
            v44 = DXGCONTEXT::SignalRenderKmMonitoredFence(&v95, (struct DXGCONTEXT *)v20, *v43, v73);
            LODWORD(v17) = v44;
            if ( v44 == -1071775743 )
            {
              v64 = 1;
            }
            else if ( v44 < 0 )
            {
              WdLogSingleEntry2(3LL, v20, v44);
              WdLogGlobalForLineNumber = 1497;
              goto LABEL_108;
            }
          }
        }
      }
      v45 = VIDMM_EXPORT::VidMmGetDmaPrivateData(v67, v65);
      v46 = LODWORD(v95.pDmaBufferPrivateData) - v45;
      v47 = LODWORD(v95.pDmaBuffer) - (_DWORD)v66;
      VIDMM_EXPORT::VidMmEndDmaBufferCPUAccess(v67, v65);
      v66 = 0LL;
      *(_QWORD *)v33 = v30;
      *(_DWORD *)v33 |= 0x8000000u;
      *((_QWORD *)v33 + 5) = v73;
      *((_QWORD *)v33 + 1) = v65;
      *((_DWORD *)v33 + 13) = v47;
      *((_DWORD *)v33 + 12) = 0;
      *((_QWORD *)v33 + 7) = 0LL;
      *((_QWORD *)v33 + 8) = 0LL;
      *((_DWORD *)v33 + 19) = v46;
      *((_DWORD *)v33 + 18) = 0;
      if ( v80 )
      {
        v48 = 1;
        v49 = &v80;
      }
      else
      {
        v48 = 0;
        v49 = 0LL;
      }
      *((_QWORD *)v33 + 43) = v49;
      *((_DWORD *)v33 + 88) = v48;
      if ( (*(_DWORD *)(v20 + 392) & 0x10) != 0 )
      {
        v50 = v74;
        *((_QWORD *)v33 + 62) = *((_QWORD *)*v74 + 13);
        *((_DWORD *)v33 + 126) = 0;
        *((_QWORD *)v33 + 65) = *(_QWORD *)(*((_QWORD *)*v50 + 12) + 64LL);
        v51 = v81;
        *((_QWORD *)v33 + 64) = *(_QWORD *)(*((_QWORD *)*v50 + 12) + 48LL);
        v52 = VIDSCH_EXPORT::VidSchSubmitCommandToHwQueue(v51, *((struct VIDSCH_HW_QUEUE **)*v50 + 6), v33);
      }
      else
      {
        v52 = VIDSCH_EXPORT::VidSchSubmitCommand(v81, *(struct _VIDSCH_CONTEXT **)(v20 + 256), v33);
      }
      v53 = v52;
      if ( v52 < 0 )
      {
        v57 = v68;
        if ( v68 >= 0 )
        {
          v58 = v81;
          v59 = &v93[v68];
          do
          {
            if ( (*((_DWORD *)*v59 + 98) & 0x10) == 0 )
              VIDSCH_EXPORT::VidSchFlushPendingCommand(v58, *((struct _VIDSCH_CONTEXT **)*v59 + 32));
            --v59;
            --v57;
          }
          while ( v57 >= 0 );
          v20 = v94;
        }
        WdLogSingleEntry2(3LL, v20, v53);
        WdLogGlobalForLineNumber = 1598;
        LODWORD(v17) = v53;
LABEL_108:
        if ( v66 )
          CleanupSubmittedPrimaries((struct DXGCONTEXT *)v20, (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)v33 + 200));
LABEL_106:
        CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v79);
LABEL_126:
        v60 = v65;
        if ( v65 )
        {
          v61 = v67;
          if ( v66 )
          {
            VIDMM_EXPORT::VidMmEndDmaBufferCPUAccess(v67, v65);
            v60 = v65;
          }
          if ( v12 )
          {
            VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(v61, v60);
            v60 = v65;
          }
          VIDMM_EXPORT::VidMmReleaseDmaBuffer(v61, v60);
        }
        if ( v96 != v97 && v96 )
          ExFreePoolWithTag(v96, 0);
        v96 = 0LL;
        v98 = 0;
        goto LABEL_136;
      }
      v65 = 0LL;
      if ( v66 )
        CleanupSubmittedPrimaries((struct DXGCONTEXT *)v20, (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)v33 + 200));
      CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v79);
      v15 = v70;
      v5 = v77;
      if ( !v64 && !v63 )
      {
        v54 = (struct DXGPROCESS *)((char *)v76 + 1);
        ++v68;
        v19 = v74 + 1;
        v76 = v54;
        ++v74;
        if ( (__int64)v54 >= v91 )
          goto LABEL_137;
        v17 = v54;
        v18 = v92;
        goto LABEL_22;
      }
    }
  }
  while ( 1 )
  {
    v22 = v21;
    v83[v21] = v5->pNewAllocationList[v21];
    *(_QWORD *)&v15[8 * v21] = v89[v21];
    if ( !v17 )
      goto LABEL_44;
    v17 = v87;
    hAllocation = v5->pNewAllocationList[v21].hAllocation;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v87 + 248));
    v24 = (hAllocation >> 6) & 0xFFFFFF;
    if ( v24 < *((_DWORD *)v17 + 74) )
    {
      v25 = *(_DWORD *)(*((_QWORD *)v17 + 35) + 16LL * v24 + 8);
      if ( ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)v17 + 35) + 16LL * v24 + 8) & 0x60)
        && (v25 & 0x2000) == 0
        && (v25 & 0x1F) != 0 )
      {
        v26 = *((_QWORD *)v17 + 35);
        if ( (*(_BYTE *)(v26 + 16LL * v24 + 8) & 0x1F) == 5 )
        {
          v27 = *(struct _EX_RUNDOWN_REF **)(v26 + 16LL * v24);
          goto LABEL_34;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v27 = 0LL;
LABEL_34:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v75, v27);
    _InterlockedDecrement((volatile signed __int32 *)v17 + 66);
    ExReleasePushLockSharedEx((char *)v17 + 248, 0LL);
    KeLeaveCriticalRegion();
    LODWORD(v17) = -1073741811;
    if ( !v75 )
      break;
    if ( *(_QWORD *)(*(_QWORD *)(v75[1].Count + 16) + 16LL) != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL)
                                                                         + 16LL) )
    {
      WdLogSingleEntry3(2LL, *(_QWORD *)(v20 + 16), v75, -1073741811LL);
      WdLogGlobalForLineNumber = 1267;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
        *(_QWORD *)(v20 + 16),
        (__int64)v75,
        -1073741811LL,
        0LL,
        0LL);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v75);
      if ( v96 != v97 && v96 )
        ExFreePoolWithTag(v96, 0);
      v55 = P;
      v56 = P == v101;
      goto LABEL_98;
    }
    Count = v75[5].Count;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v99, (struct DXGFASTMUTEX *const)(Count + 80), 0);
    if ( IsEnabledDeviceUsageNoInline )
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v99);
    v29 = *(_QWORD *)(Count + 24);
    if ( v29 )
    {
      while ( ((*(_DWORD *)(v29 + 72) >> 12) & 0x3F) != v69 )
      {
        v29 = *(_QWORD *)(v29 + 64);
        if ( !v29 )
          goto LABEL_43;
      }
      v83[v22].hAllocation = *(_DWORD *)(v29 + 16);
      *(_QWORD *)&v15[8 * v22] = v29;
    }
LABEL_43:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v99);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v75);
    v17 = v76;
LABEL_44:
    v21 = v71 + 1;
    v71 = v21;
    if ( v21 >= v5->AllocationCount )
      goto LABEL_45;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 1258;
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"The allocation handle is invalid", 1258LL, 0LL, 0LL, 0LL, 0LL);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v75);
  if ( v96 != v97 && v96 )
    ExFreePoolWithTag(v96, 0);
  v55 = P;
  v56 = P == v101;
LABEL_98:
  v98 = 0;
  v96 = 0LL;
LABEL_99:
  if ( !v56 && v55 )
    ExFreePoolWithTag(v55, 0);
  return (unsigned int)v17;
}
