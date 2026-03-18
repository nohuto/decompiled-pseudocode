/*
 * XREFs of ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAU_MDL@@_N@Z @ 0x14012B6B8
 * Callers:
 *     ?RestoreResourceCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z @ 0x1400B7280 (-RestoreResourceCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x14012AEC0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEBAJXZ @ 0x1400378B4 (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEBAJXZ.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x140037CA4 (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x14003B2E8 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1400472B4 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     Feature_NotifyResidency2__private_ReportDeviceUsage @ 0x14004F254 (Feature_NotifyResidency2__private_ReportDeviceUsage.c)
 *     McTemplateK0qqqxxp_EtwWriteTransfer @ 0x14004FA90 (McTemplateK0qqqxxp_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memmove @ 0x14005B8C0 (memmove.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14009A53C (-SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     Use64KbPagesForTransfer @ 0x14009BE14 (Use64KbPagesForTransfer.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@2U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400A0274 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@2U_D.c)
 *     ?NotifyResidency2@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@_N2III_KPEB_K@Z @ 0x1400A1848 (-NotifyResidency2@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@_N2II.c)
 *     ?VidMmReleaseTemporaryResourcesForLegacyAllocation@@YAXPEAUVIDMM_PHYSICAL_ADAPTER_LEGACY@@PEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N@Z @ 0x1400B37E4 (-VidMmReleaseTemporaryResourcesForLegacyAllocation@@YAXPEAUVIDMM_PHYSICAL_ADAPTER_LEGACY@@PEAUVI.c)
 *     ReclaimAllocationForVPRCallback @ 0x1400B6F20 (ReclaimAllocationForVPRCallback.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1400D1900 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400D1928 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FillAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1IPEBUVIDMM_SEGMENT_BASE@@1@Z @ 0x1400D8AA0 (-FillAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1IPEBUVIDMM_SEGMENT_BASE@@1@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z @ 0x1400D941C (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E71D0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1400ECCA4 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x140103BD0 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x14010B890 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVI.c)
 *     ?VidMmiRemoveProbeAndLockReference@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010BB30 (-VidMmiRemoveProbeAndLockReference@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1_N2@Z @ 0x14010BB78 (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1_N2@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_RESET_BACKING_STORE_REASON@@@Z @ 0x14010FE30 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_RESET_BACKING_STORE_REASON.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z @ 0x1401119B4 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAPEAX@Z @ 0x14011BB3C (-VidMmMapViewOfAllocation@@YAPEAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAPEAX@Z.c)
 *     ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@T_LARGE_INTEGER@@PEA_N3@Z @ 0x14011BD74 (-TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@W4_DXGK_MEMORY_TRANS.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAUVIDMM_GLOBAL_ALLOC@@PEAX@Z @ 0x14011EAA4 (-VidMmUnmapViewOfAllocation@@YAXPEAUVIDMM_GLOBAL_ALLOC@@PEAX@Z.c)
 *     ?VidMmRotateLegacyAllocation@@YAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PHYSICAL_ALLOC@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@P6AJ33PEAX@Z4TVIDMM_ROTATE_FLAGS@@@Z @ 0x140122398 (-VidMmRotateLegacyAllocation@@YAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PHYSICAL_ALLOC@@W4_MM_ROTATE_DIRECT.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_MEMORY_SEGMENT::TransferToSegment(
        VIDMM_MEMORY_SEGMENT *this,
        struct VIDMM_GLOBAL_ALLOC **a2,
        struct _MDL *a3,
        bool a4)
{
  union _LARGE_INTEGER *v4; // rbx
  struct VIDMM_GLOBAL_ALLOC *v6; // r14
  VIDMM_GLOBAL **v7; // r12
  VIDMM_GLOBAL ***v8; // rcx
  __int64 v9; // r12
  _QWORD *p_QuadPart; // rdi
  __int64 *v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  bool v15; // al
  union _LARGE_INTEGER v16; // r8
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r8
  union _LARGE_INTEGER v20; // rbx
  __int64 v21; // rax
  const void *v22; // rax
  __int64 LogicalAddress; // rax
  SIZE_T *v24; // r10
  struct _MDL *v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r8
  struct VIDMM_GLOBAL_ALLOC **v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // r12
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // r8
  unsigned __int64 *v42; // rax
  unsigned __int64 v43; // r9
  SIZE_T v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // r8
  _QWORD *v47; // rax
  VIDMM_SEGMENT *v48; // rcx
  int v49; // eax
  VIDMM_GLOBAL *v50; // r10
  unsigned __int16 v51; // ax
  ADAPTER_RENDER **v52; // r10
  unsigned __int16 v53; // ax
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // r10
  bool v58; // [rsp+50h] [rbp-168h] BYREF
  bool v59; // [rsp+51h] [rbp-167h] BYREF
  struct VIDMM_GLOBAL_ALLOC **v60; // [rsp+58h] [rbp-160h]
  size_t Size; // [rsp+60h] [rbp-158h]
  struct _MDL *v62; // [rsp+68h] [rbp-150h]
  int v63; // [rsp+70h] [rbp-148h]
  struct VIDMM_SEGMENT_BASE *v64; // [rsp+78h] [rbp-140h]
  struct VIDMM_GLOBAL_ALLOC **v65; // [rsp+80h] [rbp-138h]
  VIDMM_MEMORY_SEGMENT *v66; // [rsp+88h] [rbp-130h]
  int v67; // [rsp+90h] [rbp-128h]
  int v68; // [rsp+98h] [rbp-120h]
  SIZE_T QuadPart; // [rsp+A0h] [rbp-118h]
  __int64 v70; // [rsp+A8h] [rbp-110h]
  struct VIDMM_GLOBAL_ALLOC **v71; // [rsp+B0h] [rbp-108h]
  void *v72; // [rsp+B8h] [rbp-100h] BYREF
  unsigned __int64 v73; // [rsp+C0h] [rbp-F8h]
  struct VIDMM_GLOBAL_ALLOC **v74; // [rsp+C8h] [rbp-F0h]
  VIDMM_MEMORY_SEGMENT *v75; // [rsp+D0h] [rbp-E8h]
  size_t *v76; // [rsp+D8h] [rbp-E0h]
  _QWORD v77[4]; // [rsp+E0h] [rbp-D8h] BYREF
  __int128 v78; // [rsp+100h] [rbp-B8h]
  struct _KAPC_STATE ApcState; // [rsp+110h] [rbp-A8h] BYREF
  struct _DXGKARG_SETVIDEOPROTECTEDREGION v80; // [rsp+140h] [rbp-78h] BYREF

  v58 = a4;
  v62 = a3;
  v4 = (union _LARGE_INTEGER *)a2;
  v65 = a2;
  v75 = this;
  v66 = this;
  v71 = a2;
  v74 = a2;
  v60 = a2;
  v76 = (size_t *)*a2;
  v6 = (struct VIDMM_GLOBAL_ALLOC *)v76;
  v67 = 0;
  v59 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  Size = v76[6];
  v7 = (VIDMM_GLOBAL **)((char *)this + 8);
  v64 = (VIDMM_MEMORY_SEGMENT *)((char *)this + 8);
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(*((VIDMM_GLOBAL **)this + 1), (struct VIDMM_GLOBAL_ALLOC *)v76, 1);
  if ( !VIDMM_GLOBAL::IsTdrPending(*v7) )
  {
    LODWORD(v9) = -1073741823;
    if ( *((_BYTE *)v76 + 40) )
    {
      if ( *((int *)v76 + 47) <= 0 )
      {
        v11 = (__int64 *)v64;
      }
      else
      {
        VIDMM_GLOBAL::UnlockAllocation(v8, (struct VIDMM_LOCAL_ALLOC *)Size, 0LL, v4[2].QuadPart, 0, 0);
        v11 = (__int64 *)v64;
        VIDMM_GLOBAL::ReturnPinnedBackingStore(*(VIDMM_GLOBAL **)v64, v4[2].QuadPart);
        *((_DWORD *)v76 + 8) &= ~2u;
        VidMmiRemoveProbeAndLockReference(v6);
      }
      *(SIZE_T *)((char *)&v80.CurrentSize + 4) = 0LL;
      HIDWORD(v80.NewStartOffset) = 0;
      *(_QWORD *)&v80.VprIndex = this;
      p_QuadPart = &v4->QuadPart;
      v80.CurrentStartOffset = v4[15].QuadPart;
      *(_QWORD *)&v80.PhysicalAdapterIndex = v6;
      LODWORD(v80.CurrentSize) = 0;
      KeStackAttachProcess(*(PRKPROCESS *)(*(_QWORD *)(Size + 8) + 16LL), &ApcState);
      (*(void (__fastcall **)(_QWORD, union _LARGE_INTEGER *))(**((_QWORD **)this + 2) + 216LL))(
        *((_QWORD *)this + 2),
        v4);
      v9 = (int)VidMmRotateLegacyAllocation(
                  *v11,
                  v4,
                  0,
                  (__int64)v62,
                  (__int64)VIDMM_MEMORY_SEGMENT::RotateFrameBufferCopyCallback,
                  (__int64)&v80,
                  2 * (unsigned int)v58);
      KeUnstackDetachProcess(&ApcState);
      if ( v58 )
      {
        if ( (int)v9 >= 0 )
          goto LABEL_17;
        *((_DWORD *)v6 + 6) |= 0x10000u;
        VIDMM_GLOBAL::FillAllocation(
          *(VIDMM_GLOBAL **)v64,
          v6,
          0LL,
          v4[2].QuadPart,
          *(_DWORD *)(*(_QWORD *)v64 + 7032LL),
          (const struct VIDMM_SEGMENT_BASE *)((v4[16].QuadPart + 8) & -(__int64)(v4[16].QuadPart != 0)),
          v4[15].QuadPart);
LABEL_16:
        if ( (int)v9 < 0 )
        {
LABEL_18:
          *((_BYTE *)v6 + 43) = 1;
          v59 = 1;
          goto LABEL_85;
        }
LABEL_17:
        *((_BYTE *)v6 + 36) |= 1u;
        goto LABEL_18;
      }
      if ( (int)v9 >= 0 )
      {
        LODWORD(v9) = 0;
        goto LABEL_16;
      }
      WdLogSingleEntry1(1LL, v9);
      WdLogGlobalForLineNumber = 896;
LABEL_14:
      DxgkLogInternalTriageEvent(v12, 0x40000LL);
      return (unsigned int)v9;
    }
    if ( !*((_BYTE *)v76 + 42) )
    {
      if ( v76[28] )
        (*(void (__fastcall **)(size_t))(*(_QWORD *)v76[27] + 96LL))(v76[27]);
      if ( (v76[3] & 4) == 0 && (*((_DWORD *)v76 + 7) & 4) == 0 )
        VIDMM_GLOBAL::FillAllocation(
          *((VIDMM_GLOBAL **)this + 1),
          (struct VIDMM_GLOBAL_ALLOC *)v76,
          0LL,
          v4[2].QuadPart,
          *(_DWORD *)(*((_QWORD *)this + 1) + 7032LL),
          v64,
          v4[15].QuadPart);
      LODWORD(v9) = 0;
      v59 = 1;
    }
    if ( (int)v9 < 0 )
    {
      v58 = 0;
      LODWORD(v9) = VIDMM_MEMORY_SEGMENT::TransferMemory(
                      (struct VIDMM_PHYSICAL_ADAPTER_LEGACY **)this,
                      (struct VIDMM_PHYSICAL_ALLOC_LEGACY *)v4,
                      DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL,
                      v4[15],
                      &v58,
                      &v59);
      if ( v58 )
        VidMmReleaseTemporaryResourcesForLegacyAllocation(
          *((struct VIDMM_PHYSICAL_ADAPTER_LEGACY **)this + 2),
          (struct VIDMM_PHYSICAL_ALLOC_LEGACY *)v4,
          1);
      if ( (int)v9 < 0 )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(v13);
          WdLogGlobalForLineNumber = 1002;
        }
        LODWORD(v9) = 0;
        if ( (byte_14008A201 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v13, &EventPerformanceWarning, v14, 2);
        if ( (**((_DWORD **)v6 + 46) & 8) == 0 )
          KeStackAttachProcess(*(PRKPROCESS *)(*(_QWORD *)(Size + 8) + 16LL), &ApcState);
        v15 = Use64KbPagesForTransfer((__int64)v4, v4[16].QuadPart);
        v16 = v4[2];
        v17 = v15 ? 0x10000LL : 4096LL;
        Size = v17;
        v18 = (unsigned __int64)v16.QuadPart >> 12;
        v19 = (unsigned __int64)v16.QuadPart >> 16;
        if ( !v15 )
          v19 = (unsigned int)v18;
        v62 = (struct _MDL *)v19;
        v68 = v19;
        v20 = v4[15];
        QuadPart = v20.QuadPart;
        v21 = 0LL;
        while ( 1 )
        {
          v63 = v21;
          if ( (unsigned int)v21 >= (unsigned int)v19 )
            break;
          v72 = 0LL;
          v73 = v17 * v21;
          v70 = v17 * v21;
          v22 = (const void *)VidMmMapViewOfAllocation(v6, v17 * v21, v17, &v72);
          if ( v22 )
          {
            memmove(*(void **)(*((_QWORD *)this + 1) + 45272LL), v22, Size);
            VidMmUnmapViewOfAllocation(v6, v72);
          }
          else
          {
            *((_DWORD *)v6 + 6) |= 0x10000u;
          }
          *(_QWORD *)&v80.PhysicalAdapterIndex = 0LL;
          v80.CurrentStartOffset = 0LL;
          v80.CurrentSize = 0LL;
          v77[1] = 0LL;
          v78 = 0LL;
          LogicalAddress = SysMmGetLogicalAddress(*(void *const *)(*((_QWORD *)this + 1) + 45288LL));
          v24 = (SIZE_T *)*((_QWORD *)this + 1);
          v80.NewStartOffset = v24[5660];
          v80.NewSize = v80.NewStartOffset + 48;
          *(_QWORD *)&v80.VprIndex = LogicalAddress;
          v77[0] = v20.QuadPart;
          v77[2] = v64;
          v77[3] = v73;
          VIDMM_GLOBAL::MemoryTransfer(
            (VIDMM_GLOBAL *)v24,
            v6,
            Size,
            v73,
            (struct VIDMM_TRANSFER_PARAMETER *)&v80,
            (struct VIDMM_TRANSFER_PARAMETER *)v77,
            0);
          VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), v6);
          v21 = (unsigned int)(v63 + 1);
          v17 = Size;
          LODWORD(v19) = (_DWORD)v62;
        }
        v59 = 1;
        if ( (**((_DWORD **)v6 + 46) & 8) == 0 )
          KeUnstackDetachProcess(&ApcState);
        v4 = (union _LARGE_INTEGER *)v65;
      }
    }
    if ( (**((_DWORD **)v6 + 46) & 0x20000) != 0 )
    {
      v25 = (struct _MDL *)v4[2].QuadPart;
      v62 = v25;
      memset(&v80, 0, sizeof(v80));
      v80.PhysicalAdapterIndex = *((unsigned __int16 *)this + 34);
      v80.SegmentIndex = VIDMM_SEGMENT::DriverId(this);
      if ( *((_DWORD *)this + 105) )
      {
        v30 = v60;
        QuadPart = (unsigned __int64)v60[15] & ~*((_QWORD *)this + 51);
        if ( QuadPart < *((_QWORD *)this + 53) )
        {
          if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1)
                                                                                                + 41280LL)) )
          {
            if ( (byte_14008A201 & 1) != 0 )
              McTemplateK0q_EtwWriteTransfer(v31, &EventPerformanceWarning, v32, 24);
            KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41328LL), Executive, 0, 0, 0LL);
          }
          VIDMM_MEMORY_SEGMENT::SuspendPurgeForVPRGrow(this, v6);
          v33 = *((_QWORD *)this + 51);
          v34 = *((_QWORD *)this + 53);
          v70 = v34;
          v35 = v34 - (~v33 & (v33 + v4[2].QuadPart));
          v36 = *((_QWORD *)this + 32);
          v37 = *(_QWORD *)(v36 + 88);
          v38 = v36 + 80;
          if ( v37 != v38 )
          {
            v39 = v38;
            do
            {
              v40 = v37;
              v41 = v37;
              v42 = (unsigned __int64 *)(v37 - 40);
              v37 = *(_QWORD *)(v37 + 8);
              v43 = *v42;
              if ( *v42 >= v34 || v43 + *(_QWORD *)(v41 - 32) <= v35 )
              {
                if ( v43 + *(_QWORD *)(v41 - 32) <= v35 )
                  break;
              }
              else if ( *(_BYTE *)(v40 + 16) == 4 )
              {
                if ( !ReclaimAllocationForVPRCallback(0LL, *(_QWORD **)(v40 - 24)) )
                  break;
                v34 = v70;
              }
            }
            while ( v37 != v39 );
            v4 = (union _LARGE_INTEGER *)v65;
          }
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 200LL))(*((_QWORD *)this + 2));
          VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((unsigned __int16 *)this + 34));
          v80.CurrentStartOffset = *((_QWORD *)this + 53);
          v80.CurrentSize = *((_QWORD *)v66 + 55);
          v44 = QuadPart;
          v80.NewStartOffset = QuadPart;
          v80.NewSize = *((_QWORD *)v66 + 54) - QuadPart;
          *((_QWORD *)v66 + 55) = v80.NewSize;
          *((_QWORD *)this + 53) = v44;
          LODWORD(v9) = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                          *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 3168LL),
                          &v80);
          if ( (int)v9 < 0 && g_IsInternalRelease )
          {
            g_DxgMmsBugcheckExportIndex = 1;
            WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
            WdLogGlobalForLineNumber = 213;
          }
          if ( (byte_14008A201 & 1) != 0 )
            McTemplateK0qqqxxp_EtwWriteTransfer(
              *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
              v45,
              v46,
              v80.PhysicalAdapterIndex,
              v80.SegmentIndex,
              v80.VprIndex,
              v80.NewStartOffset,
              v80.NewSize,
              *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
          v25 = v62;
        }
        if ( (int)v9 < 0 )
          goto LABEL_83;
        *((_DWORD *)v6 + 7) |= 1u;
        *((_QWORD *)v66 + 56) += v25;
        if ( g_IsInternalReleaseOrDbg )
        {
          v47 = (_QWORD *)WdLogNewEntry5_WdTrace(v30);
          v47[3] = v25;
          v47[4] = *((_QWORD *)v66 + 56);
          v47[5] = v6;
          WdLogGlobalForLineNumber = 1247;
        }
      }
      else
      {
        if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1)
                                                                                              + 41280LL)) )
        {
          if ( (byte_14008A201 & 1) != 0 )
            McTemplateK0q_EtwWriteTransfer(v26, &EventPerformanceWarning, v27, 24);
          KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41328LL), Executive, 0, 0, 0LL);
        }
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 200LL))(*((_QWORD *)this + 2));
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((unsigned __int16 *)this + 34));
        v80.NewStartOffset = (SIZE_T)v60[15];
        v80.NewSize = (SIZE_T)v25;
        LODWORD(v9) = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                        *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 3168LL),
                        &v80);
        if ( (int)v9 < 0 && g_IsInternalRelease )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
          WdLogGlobalForLineNumber = 213;
        }
        if ( (byte_14008A201 & 1) != 0 )
          McTemplateK0qqqxxp_EtwWriteTransfer(
            *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
            v28,
            v29,
            v80.PhysicalAdapterIndex,
            v80.SegmentIndex,
            v80.VprIndex,
            v80.NewStartOffset,
            v80.NewSize,
            *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
      }
      if ( (int)v9 < 0 )
      {
LABEL_83:
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1253;
        goto LABEL_14;
      }
    }
    p_QuadPart = v60;
    goto LABEL_85;
  }
  LODWORD(v9) = -1073741130;
  if ( !v58 )
  {
    WdLogSingleEntry1(4LL, v76);
    WdLogGlobalForLineNumber = 775;
    return (unsigned int)v9;
  }
  p_QuadPart = &v4->QuadPart;
LABEL_85:
  v48 = (VIDMM_SEGMENT *)p_QuadPart[16];
  v4[8].QuadPart = (LONGLONG)v48;
  v4[9] = (union _LARGE_INTEGER)p_QuadPart[15];
  *(_WORD *)(*((_QWORD *)v6 + 46) + 10LL) = VIDMM_SEGMENT::DriverId(v48);
  *(_QWORD *)(*((_QWORD *)v6 + 46) + 40LL) = v4[9].QuadPart + *(_QWORD *)(v4[8].QuadPart + 24);
  p_QuadPart[16] = 0LL;
  v49 = *((_DWORD *)v6 + 8);
  if ( (v49 & 2) != 0 )
  {
    VIDMM_SEGMENT::UnlockAllocationBackingStore(*((struct VIDMM_GLOBAL **)this + 1), v6, 0LL);
    VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), v4[2].QuadPart);
    *((_DWORD *)v6 + 8) &= ~2u;
    v49 = *((_DWORD *)v6 + 8);
  }
  if ( v59 && (v49 & 8) == 0 && !p_QuadPart[27] )
    VIDMM_GLOBAL::ResetBackingStore(*((_QWORD *)this + 1), (__int64 *)v6, 0);
  if ( (**((_DWORD **)v6 + 46) & 0x10000) != 0 )
  {
    Feature_NotifyResidency2__private_ReportDeviceUsage();
    v50 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
    if ( *(_QWORD *)(*((_QWORD *)v50 + 3) + 1776LL) )
    {
      VIDMM_GLOBAL::NotifyResidency2(
        v50,
        *((struct VIDMM_PHYSICAL_ADAPTER **)this + 2),
        (void ***)v4,
        1u,
        1,
        0,
        ((unsigned __int64)v4[2].QuadPart >> 12) + ((v4[2].QuadPart & 0xFFF) != 0),
        *((unsigned __int16 *)v66 + 35),
        ((__int64)v74[9] >> 12) + (((unsigned __int64)v74[9] & 0xFFF) != 0),
        0LL);
    }
    else
    {
      v51 = VIDMM_SEGMENT::DriverId(this);
      VIDMM_GLOBAL::NotifyResidency(v52, v6, 1u, v51, (SIZE_T)v74[9]);
    }
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 1) + 41200LL) )
  {
    v53 = VIDMM_SEGMENT::DriverId(this);
    VIDMM_GLOBAL::RecordPageMappingHistory(v56, v53, v54, v55, 3, (__int64)v6);
  }
  return (unsigned int)v9;
}
