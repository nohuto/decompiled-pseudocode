/*
 * XREFs of ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x140299A80
 * Callers:
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEBD@Z @ 0x140298100 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEBD@Z.c)
 *     DxgkRender @ 0x14029AD60 (DxgkRender.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140439834 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x140011178 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0ppxppttqddddddddq_EtwWriteTransfer @ 0x1400135C8 (McTemplateK0ppxppttqddddddddq_EtwWriteTransfer.c)
 *     McTemplateK0ppqx_EtwWriteTransfer @ 0x1400138F8 (McTemplateK0ppqx_EtwWriteTransfer.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x140013CE4 (McTemplateK0pxq_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x140033220 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x140038650 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x14003D730 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?DisableDdiRenderAllocationList@DXGCONTEXT@@QEAAEXZ @ 0x14004AFAC (-DisableDdiRenderAllocationList@DXGCONTEXT@@QEAAEXZ.c)
 *     ?VidMmGetDmaPatchLocationList@VIDMM_EXPORT@@QEAAPEAU_D3DDDI_PATCHLOCATIONLIST@@PEAUVIDMM_DMA_BUFFER@@@Z @ 0x14004BB90 (-VidMmGetDmaPatchLocationList@VIDMM_EXPORT@@QEAAPEAU_D3DDDI_PATCHLOCATIONLIST@@PEAUVIDMM_DMA_BUF.c)
 *     ?VidMmEndDmaBufferCPUAccess@VIDMM_EXPORT@@QEAAXPEBUVIDMM_DMA_BUFFER@@@Z @ 0x14004D804 (-VidMmEndDmaBufferCPUAccess@VIDMM_EXPORT@@QEAAXPEBUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z @ 0x14005613C (-VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z.c)
 *     TraceDxgkPatchLocationList @ 0x140058B80 (TraceDxgkPatchLocationList.c)
 *     ?VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@_N@Z @ 0x14006D2B0 (-VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@_N@Z.c)
 *     ?VidSchFlushPendingCommand@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@H@Z @ 0x140080418 (-VidSchFlushPendingCommand@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@H@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1402970A4 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAUVIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x14029AA24 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAUVIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?CleanupSubmittedPrimaries@@YAXPEAVDXGCONTEXT@@PEAUVIDMM_PRIMARIES_REFERENCES@@@Z @ 0x14029ACB4 (-CleanupSubmittedPrimaries@@YAXPEAVDXGCONTEXT@@PEAUVIDMM_PRIMARIES_REFERENCES@@@Z.c)
 *     ?DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z @ 0x1402A4F2C (-DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z.c)
 *     ?DdiRender@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z @ 0x1402A71D8 (-DdiRender@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z.c)
 *     ?EnsureKmSubmissionProgressSyncObject@DXGHWQUEUE@@QEAAJXZ @ 0x1402F7CF0 (-EnsureKmSubmissionProgressSyncObject@DXGHWQUEUE@@QEAAJXZ.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140333368 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z @ 0x1403B38B0 (-SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z.c)
 *     ?DdiRenderKm@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z @ 0x1403D3C8C (-DdiRenderKm@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::Render(
        DXGCONTEXT *this,
        struct _D3DKMT_RENDER *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a4,
        struct DXGCONTEXT **a5,
        struct DXGALLOCATION **a6,
        struct DXGHWQUEUE **a7)
{
  struct COREDEVICEACCESS *v8; // r13
  int v10; // eax
  D3DKMT_RENDERFLAGS Flags; // eax
  ULONG v12; // r14d
  unsigned int v13; // r12d
  char *pNewCommandBuffer; // rcx
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rsi
  D3DKMT_RENDERFLAGS v21; // eax
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // r14
  char v25; // r13
  __int64 v26; // rax
  UINT AllocationCount; // r10d
  D3DDDI_ALLOCATIONLIST *pNewAllocationList; // rdx
  int v29; // eax
  __int64 v30; // r8
  struct DXGGLOBAL *Global; // rax
  unsigned int AllocationListSize; // ecx
  __int64 v33; // rsi
  struct DXGALLOCATION **v34; // rbx
  unsigned int v35; // r13d
  int v36; // eax
  int v37; // ecx
  __int64 v38; // rax
  _QWORD *v39; // r10
  __int64 v40; // rax
  UINT v41; // r9d
  __int64 v42; // r8
  __int64 v43; // r9
  int v44; // ecx
  _QWORD *v45; // rdx
  int v46; // r13d
  struct DXGCONTEXT **i; // rax
  __int64 result; // rax
  int v49; // eax
  struct DXGHWQUEUE **v50; // rcx
  DXGHWQUEUE **v51; // rdx
  int v52; // eax
  void *v53; // rdx
  int v54; // eax
  unsigned int v55; // ebx
  int v56; // r14d
  __int64 v57; // rbx
  __int64 v58; // rbx
  UINT64 PresentHistoryToken; // rax
  int v60; // eax
  __int64 v61; // rbx
  int v62; // eax
  size_t v63; // r8
  void *v64; // rcx
  struct _D3DDDI_PATCHLOCATIONLIST *DmaPatchLocationList; // rax
  int v66; // eax
  unsigned int v67; // ecx
  int v68; // eax
  unsigned int v69; // ecx
  __int64 v70; // rbx
  struct DXGCONTEXT **v71; // r13
  int v72[2]; // [rsp+20h] [rbp-100h]
  union _LARGE_INTEGER *v73; // [rsp+28h] [rbp-F8h]
  char v74; // [rsp+A0h] [rbp-80h]
  char v75; // [rsp+A1h] [rbp-7Fh]
  char v76; // [rsp+A2h] [rbp-7Eh]
  unsigned int v77; // [rsp+A4h] [rbp-7Ch]
  struct VIDMM_DMA_BUFFER *v78; // [rsp+A8h] [rbp-78h] BYREF
  UINT v79; // [rsp+B0h] [rbp-70h]
  int v80; // [rsp+B4h] [rbp-6Ch]
  struct VIDMM_PRIMARIES_REFERENCES *v81; // [rsp+B8h] [rbp-68h]
  UINT v82; // [rsp+C0h] [rbp-60h] BYREF
  struct DXGCONTEXT **v83; // [rsp+C8h] [rbp-58h]
  unsigned __int64 v84; // [rsp+D0h] [rbp-50h] BYREF
  void *v85; // [rsp+D8h] [rbp-48h] BYREF
  _QWORD v86[2]; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v87; // [rsp+F0h] [rbp-30h]
  DXGHWQUEUE **v88; // [rsp+F8h] [rbp-28h]
  _QWORD *v89; // [rsp+100h] [rbp-20h] BYREF
  struct COREDEVICEACCESS *v90; // [rsp+108h] [rbp-18h]
  struct _DXGKARG_RENDER Src; // [rsp+110h] [rbp-10h] BYREF
  LARGE_INTEGER v92; // [rsp+180h] [rbp+60h] BYREF
  struct DXGALLOCATION **v93; // [rsp+188h] [rbp+68h]
  struct DXGCONTEXT **v94; // [rsp+190h] [rbp+70h]
  struct _DXGKARG_RENDERGDI v95; // [rsp+1A0h] [rbp+80h] BYREF
  struct DXGADAPTERSTOPRESETLOCKSHARED *v96; // [rsp+1F0h] [rbp+D0h]
  struct _D3DKMT_PRESENTHISTORYTOKEN v97; // [rsp+200h] [rbp+E0h] BYREF

  v94 = a5;
  v8 = a3;
  v93 = a6;
  v10 = *((_DWORD *)this + 98);
  v96 = a4;
  v90 = a3;
  v88 = a7;
  if ( (v10 & 0x10) != 0 && !a7 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 494;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Hardware context render is not provided with hardware queue array",
      494LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225473LL;
  }
  if ( (v10 & 8) != 0 )
  {
    WdLogSingleEntry0(3LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 501;
    return result;
  }
  Flags = a2->Flags;
  v12 = a2->BroadcastContextCount + 1;
  v13 = ((*(_BYTE *)&Flags & 8) << 12) | 0x100;
  v75 = 1;
  v87 = v13;
  v77 = v12;
  if ( (*(_BYTE *)&Flags & 0x10) == 0
    || (LOBYTE(v13) = -96,
        LODWORD(v87) = ((*(_BYTE *)&Flags & 8) << 12) | 0x1A0,
        v54 = DXGCONTEXT::WaitForQueuedPresentLimit(this, 0, 1, a3),
        v55 = v54,
        v54 >= 0) )
  {
    if ( (*(_DWORD *)&a2->Flags & 0x20) != 0 )
      pNewCommandBuffer = (char *)a2->pNewCommandBuffer;
    else
      pNewCommandBuffer = (char *)*((_QWORD *)this + 7);
    Src.pCommand = &pNewCommandBuffer[a2->CommandOffset];
    Src.CommandLength = a2->CommandLength;
    memset(&Src.CommandLength + 1, 0, 100);
    v15 = v87;
    v85 = 0LL;
    v76 = 0;
    v74 = 1;
    while ( 2 )
    {
      v81 = 0LL;
      v78 = 0LL;
      v16 = DXGCONTEXT::AcquireDmaBuffer(this, &v78, v8, 0);
      LODWORD(v20) = v16;
      if ( v16 < 0 )
      {
        WdLogSingleEntry2(4LL, this, v16);
        WdLogGlobalForLineNumber = 570;
        v25 = 0;
        goto LABEL_91;
      }
      if ( bTracingEnabled )
      {
        v21 = a2->Flags;
        if ( (*(_BYTE *)&v21 & 0x10) != 0 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
            McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(v18, v17, v19, 0LL, v78);
        }
        else
        {
          if ( (*(_BYTE *)&v21 & 0x20) == 0 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
              goto LABEL_12;
            v53 = &EventRender;
            goto LABEL_84;
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          {
            v53 = &EventRenderKm;
LABEL_84:
            McTemplateK0p_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)v53);
          }
        }
      }
LABEL_12:
      v22 = *((_QWORD *)this + 2);
      v82 = 0;
      v92.QuadPart = 0LL;
      v84 = 0LL;
      v89 = 0LL;
      v86[1] = *(_QWORD *)(v22 + 16);
      v86[0] = 0LL;
      CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v86);
      v24 = v86[0];
      v25 = 0;
      if ( !v86[0] )
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 614;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate VidSchSubmitData",
          614LL,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v20) = -1073741801;
LABEL_63:
        CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v86);
LABEL_91:
        v56 = v77;
LABEL_92:
        if ( !v78 )
          return (unsigned int)v20;
        if ( v85 )
          VIDMM_EXPORT::VidMmEndDmaBufferCPUAccess(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
            v78);
        if ( v25 )
        {
          if ( v56 <= 0 )
            return (unsigned int)v20;
          v57 = (unsigned int)v56;
          do
          {
            VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(
              *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
              v78);
            --v57;
          }
          while ( v57 );
        }
        if ( v56 > 0 )
        {
          v58 = (unsigned int)v56;
          do
          {
            VIDMM_EXPORT::VidMmReleaseDmaBuffer(
              *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
              v78);
            --v58;
          }
          while ( v58 );
        }
        return (unsigned int)v20;
      }
      if ( (*((_DWORD *)this + 56) & 1) != 0
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 3072LL) & 2) != 0
        && (*(_DWORD *)&a2->Flags & 0x20) == 0 )
      {
        LODWORD(v20) = 0;
      }
      else
      {
        v26 = *((_QWORD *)this + 2);
        AllocationCount = a2->AllocationCount;
        v81 = (struct VIDMM_PRIMARIES_REFERENCES *)(v86[0] + 200LL);
        if ( (*(_DWORD *)&a2->Flags & 0x20) != 0 )
          pNewAllocationList = a2->pNewAllocationList;
        else
          pNewAllocationList = (D3DDDI_ALLOCATIONLIST *)*((_QWORD *)this + 11);
        LOBYTE(v23) = v75;
        v72[0] = v77;
        v29 = (*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *, D3DDDI_ALLOCATIONLIST *, _QWORD, __int64, int *, UINT *, LARGE_INTEGER *, unsigned __int64, _QWORD **, __int64, struct DXGALLOCATION **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 16) + 760LL) + 8LL) + 544LL))(
                v78,
                pNewAllocationList,
                AllocationCount,
                v23,
                *(int **)v72,
                &v82,
                &v92,
                (unsigned __int64)&v84 & -(__int64)(*((_BYTE *)this + 430) != 0),
                &v89,
                v86[0] + 200LL,
                v93);
        LODWORD(v20) = v29;
        if ( v29 < 0 )
        {
          WdLogSingleEntry2(3LL, this, v29);
          WdLogGlobalForLineNumber = 656;
          CleanupSubmittedPrimaries(this, (struct VIDMM_PRIMARIES_REFERENCES *)(v24 + 200));
          CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v86);
          v25 = 0;
          goto LABEL_91;
        }
        v25 = 1;
      }
      (*(void (__fastcall **)(struct VIDMM_DMA_BUFFER *, void **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                         + 760LL)
                                                                             + 8LL)
                                                                 + 488LL))(
        v78,
        &v85);
      Src.pDmaBuffer = v85;
      Src.DmaSize = (*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                 + 760LL)
                                                                                     + 8LL)
                                                                         + 504LL))(v78);
      Src.pDmaBufferPrivateData = (void *)(*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL)
                                                                                               + 536LL))(v78);
      Src.DmaBufferPrivateDataSize = *((_DWORD *)this + 52);
      if ( !v76 )
      {
LABEL_20:
        if ( !v74 )
          goto LABEL_40;
        if ( !DXGCONTEXT::DisableDdiRenderAllocationList(this) || (*(_DWORD *)&a2->Flags & 0x20) != 0 )
        {
          Src.pAllocationList = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL) + 528LL))(v78);
          Src.AllocationListSize = a2->AllocationCount;
          Src.pPatchLocationListIn = (D3DDDI_PATCHLOCATIONLIST *)*((_QWORD *)this + 15);
          Src.PatchLocationListInSize = a2->PatchLocationCount;
          Src.pPatchLocationListOut = (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL) + 520LL))(v78);
          Src.PatchLocationListOutSize = (*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL)
                                                                                              + 512LL))(v78);
          Global = DXGGLOBAL::GetGlobal();
          if ( (unsigned __int8)DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                                  (struct DXGGLOBAL *)((char *)Global + 1668),
                                  *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
          {
            memmove(*((void **)this + 8), Src.pCommand, *((_QWORD *)this + 6));
            v63 = *((_QWORD *)this + 14);
            v64 = (void *)*((_QWORD *)this + 16);
            Src.pCommand = (const void *)*((_QWORD *)this + 8);
            memmove(v64, Src.pPatchLocationListIn, v63);
            Src.pPatchLocationListIn = (D3DDDI_PATCHLOCATIONLIST *)*((_QWORD *)this + 16);
          }
          AllocationListSize = Src.AllocationListSize;
        }
        else
        {
          AllocationListSize = 0;
          Src.pAllocationList = 0LL;
          Src.AllocationListSize = 0;
          Src.pPatchLocationListIn = 0LL;
          Src.PatchLocationListInSize = 0;
          Src.pPatchLocationListOut = 0LL;
          Src.PatchLocationListOutSize = 0;
        }
        Src.DmaBufferSegmentId = v82;
        Src.DmaBufferPhysicalAddress = v92;
        if ( (*(_DWORD *)&a2->Flags & 0x20) != 0 )
        {
          if ( *((_BYTE *)this + 430) )
          {
            v95.pCommand = (char *)a2->pNewCommandBuffer + a2->CommandOffset;
            v95.CommandLength = a2->CommandLength;
            *(&v95.CommandLength + 1) = 0;
            v95.pDmaBuffer = Src.pDmaBuffer;
            *(&v95.DmaSize + 1) = 0;
            v95.DmaSize = Src.DmaSize;
            v95.pDmaBufferPrivateData = Src.pDmaBufferPrivateData;
            *(&v95.DmaBufferPrivateDataSize + 1) = 0;
            v95.DmaBufferPrivateDataSize = Src.DmaBufferPrivateDataSize;
            v95.pAllocationList = Src.pAllocationList;
            v95.MultipassOffset = Src.MultipassOffset;
            v95.DmaBufferGpuVirtualAddress = v84;
            v95.AllocationListSize = AllocationListSize;
            if ( bTracingEnabled )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              {
                LODWORD(v73) = AllocationListSize;
                McTemplateK0pxq_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &RenderGdi, v30, this, v84, v73);
                AllocationListSize = Src.AllocationListSize;
              }
              v33 = 0LL;
              if ( AllocationListSize )
              {
                v34 = v93;
                do
                {
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                  {
                    LODWORD(v73) = *(_DWORD *)&Src.pAllocationList[v33].8 & 1;
                    McTemplateK0ppqx_EtwWriteTransfer(
                      (REGHANDLE *)&DxgkControlGuid_Context,
                      (__int64)Src.pAllocationList,
                      3 * v33,
                      v34[v33],
                      Src.pAllocationList[v33].hDeviceSpecificAllocation,
                      v73,
                      Src.pAllocationList[v33].PhysicalAddress.QuadPart);
                    AllocationListSize = Src.AllocationListSize;
                  }
                  v33 = (unsigned int)(v33 + 1);
                }
                while ( (unsigned int)v33 < AllocationListSize );
                v15 = v87;
              }
            }
            LODWORD(v20) = ADAPTER_RENDER::DdiRenderGdi(
                             *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
                             *((void **)this + 23),
                             &v95);
            Src.pDmaBuffer = v95.pDmaBuffer;
            Src.pDmaBufferPrivateData = v95.pDmaBufferPrivateData;
            Src.MultipassOffset = v95.MultipassOffset;
            if ( (*((_DWORD *)this + 98) & 0x10) != 0 )
            {
              Src.DmaBufferPrivateDataSize = v95.DmaBufferPrivateDataSize;
              Src.DmaSize = v95.DmaSize;
            }
            goto LABEL_38;
          }
          v52 = ADAPTER_RENDER::DdiRenderKm(
                  *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
                  *((void **)this + 23),
                  &Src);
        }
        else
        {
          if ( (*((_DWORD *)this + 56) & 1) != 0
            && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 3072LL) & 4) != 0 )
          {
            LODWORD(v20) = 0;
LABEL_38:
            if ( (int)(v20 + 0x80000000) >= 0 && (_DWORD)v20 != -1071775743 )
            {
              WdLogSingleEntry2(3LL, this, (int)v20);
              WdLogGlobalForLineNumber = 817;
LABEL_73:
              CleanupSubmittedPrimaries(this, v81);
              goto LABEL_63;
            }
            v74 = (_DWORD)v20 == -1071775743;
            if ( (*((_DWORD *)this + 98) & 0x10) != 0 )
            {
              LODWORD(v20) = DXGHWQUEUE::EnsureKmSubmissionProgressSyncObject(*v88);
              if ( (int)v20 < 0 )
                goto LABEL_73;
              v50 = v88;
              ++*((_QWORD *)*v88 + 13);
              if ( !*((_BYTE *)this + 296) )
              {
                v20 = (int)DXGCONTEXT::SignalRenderKmMonitoredFence(&Src, this, *v50, v84);
                if ( (_DWORD)v20 == -1071775743 )
                {
                  v76 = 1;
                }
                else if ( (int)v20 < 0 )
                {
                  WdLogSingleEntry2(3LL, this, v20);
                  WdLogGlobalForLineNumber = 850;
                  goto LABEL_73;
                }
              }
            }
LABEL_40:
            v35 = 0;
            v36 = (*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                               + 760LL)
                                                                                   + 8LL)
                                                                       + 536LL))(v78);
            v37 = LODWORD(Src.pDmaBufferPrivateData) - v36;
            v80 = LODWORD(Src.pDmaBuffer) - (_DWORD)v85;
            v38 = *((_QWORD *)this + 2);
            LODWORD(v83) = v37;
            (*(void (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v38 + 16) + 760LL)
                                                                          + 8LL)
                                                              + 496LL))(v78);
            v85 = 0LL;
            if ( DXGCONTEXT::DisableDdiRenderAllocationList(this) )
            {
              v41 = (unsigned int)v39;
            }
            else
            {
              v40 = (*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                 + 760LL)
                                                                                     + 8LL)
                                                                         + 520LL))(v78);
              v41 = a2->AllocationCount;
              v35 = -1431655765 * (((__int64)Src.pPatchLocationListOut - v40) >> 3);
              v79 = v41;
              if ( (qword_1401664C0 & 0x10) != 0 )
              {
                DmaPatchLocationList = VIDMM_EXPORT::VidMmGetDmaPatchLocationList(
                                         *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                                         v78);
                TraceDxgkPatchLocationList((int)this, (char)v78, v35, (__int64)DmaPatchLocationList);
                v41 = v79;
              }
              v39 = 0LL;
            }
            *(_QWORD *)v24 = v15;
            if ( *((_BYTE *)this + 430) != (_BYTE)v39 )
            {
              *(_DWORD *)v24 |= 0x8000000u;
              *(_QWORD *)(v24 + 40) = v84;
            }
            if ( (v13 & 0x20) != 0 )
            {
              if ( v74 != (_BYTE)v39 || (v66 = (int)v39, v76 != (_BYTE)v39) )
                v66 = 64;
              v42 = v77;
              v67 = v66 | *(_DWORD *)v24 & 0xFFFFFFBF;
              v68 = 2048;
              v69 = v67 & 0xFFFFFBFF;
              if ( (int)v77 > 1 )
                v68 = 3072;
              *(_DWORD *)v24 = v68 | v69;
              if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 16LL) )
                *(_DWORD *)(v24 + 116) = (_DWORD)v39;
            }
            else
            {
              v42 = v77;
            }
            *(_QWORD *)(v24 + 8) = v78;
            *(_DWORD *)(v24 + 52) = v80;
            *(_DWORD *)(v24 + 76) = (_DWORD)v83;
            *(_DWORD *)(v24 + 60) = v41;
            v43 = v24;
            *(_DWORD *)(v24 + 48) = (_DWORD)v39;
            *(_DWORD *)(v24 + 56) = (_DWORD)v39;
            *(_DWORD *)(v24 + 68) = v35;
            *(_DWORD *)(v24 + 64) = (_DWORD)v39;
            *(_DWORD *)(v24 + 72) = (_DWORD)v39;
            if ( v89 == v39 )
            {
              v44 = (int)v39;
              v45 = v39;
            }
            else
            {
              v44 = 1;
              v45 = &v89;
            }
            *(_QWORD *)(v24 + 344) = v45;
            v46 = (int)v39;
            *(_DWORD *)(v24 + 352) = v44;
            for ( i = v94; ; i = v83 + 1 )
            {
              v83 = i;
              v79 = v46;
              if ( v46 >= (int)v42 )
                break;
              if ( *((struct _KTHREAD **)*i + 56) != KeGetCurrentThread() )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 955;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"pBroadcastContext[i]->GetContextLock()->IsExclusiveOwner()",
                  955LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                LODWORD(v39) = 0;
              }
              if ( (*((_DWORD *)*v83 + 98) & 0x10) != 0 )
              {
                v51 = v88;
                *(_QWORD *)(v24 + 496) = *((_QWORD *)*v88 + 13);
                *(_DWORD *)(v24 + 504) = (_DWORD)v39;
                *(_QWORD *)(v24 + 520) = *(_QWORD *)(*((_QWORD *)*v51 + 12) + 64LL);
                *(_QWORD *)(v24 + 512) = *(_QWORD *)(*((_QWORD *)*v51 + 12) + 48LL);
                v49 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL)
                                                                                               + 8LL)
                                                                                   + 456LL))(
                        *((_QWORD *)*v51 + 6),
                        v24,
                        v42,
                        v43);
              }
              else
              {
                v49 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL)
                                                                                               + 8LL)
                                                                                   + 448LL))(
                        *((_QWORD *)*v83 + 32),
                        v24,
                        v42,
                        v43);
              }
              LODWORD(v39) = 0;
              v80 = v49;
              if ( v49 < 0 )
              {
                if ( (*((_DWORD *)this + 98) & 0x10) == 0 )
                {
                  v70 = v46;
                  if ( v46 >= 0 )
                  {
                    v71 = v94;
                    do
                      VIDSCH_EXPORT::VidSchFlushPendingCommand(
                        *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
                        *((struct _VIDSCH_CONTEXT **)v71[v70--] + 32));
                    while ( v70 >= 0 );
                    v46 = v79;
                  }
                }
                v56 = v77;
                v61 = v77 - v46;
                do
                {
                  VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(
                    *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                    v78);
                  VIDMM_EXPORT::VidMmReleaseDmaBuffer(
                    *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                    v78);
                  --v61;
                }
                while ( v61 );
                v25 = 0;
                v78 = 0LL;
                WdLogSingleEntry2(3LL, this, v80);
                WdLogGlobalForLineNumber = 1018;
                CleanupSubmittedPrimaries(this, v81);
                CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v86);
                goto LABEL_92;
              }
              *(_DWORD *)v24 &= ~0x800u;
              ++v46;
              v42 = v77;
            }
            v78 = 0LL;
            v75 = 0;
            CleanupSubmittedPrimaries(this, 0LL);
            CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v86);
            v8 = v90;
            if ( v76 || v74 )
              continue;
            if ( (*(_DWORD *)&a2->Flags & 0x10) != 0 )
            {
              memset(&v97, 0, sizeof(v97));
              PresentHistoryToken = a2->PresentHistoryToken;
              v97.Model = D3DKMT_PM_REDIRECTED_VISTABLT;
              v97.Token.Flip.FenceValue = PresentHistoryToken;
              v60 = SubmitPresentHistoryToken(&v97, v90, v96, 0LL, 0, 0LL, 0LL, 0LL, this, 0LL, 0LL);
              LODWORD(v20) = v60;
              if ( (int)(v60 + 0x80000000) >= 0 && v60 != -1073741130 )
              {
                WdLogSingleEntry2(3LL, this, v60);
                WdLogGlobalForLineNumber = 1074;
                LODWORD(v20) = 0;
              }
            }
            return (unsigned int)v20;
          }
          v52 = ADAPTER_RENDER::DdiRender(
                  *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
                  *((void **)this + 23),
                  &Src);
        }
        LODWORD(v20) = v52;
        goto LABEL_38;
      }
      break;
    }
    v62 = DXGCONTEXT::SignalRenderKmMonitoredFence(&Src, this, *v88, v84);
    v20 = v62;
    if ( v62 == -1071775743 )
    {
      WdLogSingleEntry5(0LL, 275LL, 40LL, this, 0LL, 0LL);
      WdLogGlobalForLineNumber = 690;
    }
    else if ( v62 >= 0 )
    {
      v76 = 0;
      goto LABEL_20;
    }
    WdLogSingleEntry2(3LL, this, v20);
    WdLogGlobalForLineNumber = 697;
    goto LABEL_73;
  }
  WdLogSingleEntry2(4LL, this, v54);
  result = v55;
  WdLogGlobalForLineNumber = 533;
  return result;
}
