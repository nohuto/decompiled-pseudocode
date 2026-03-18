/*
 * XREFs of ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_NPEAUVIDMM_LOCAL_ALLOC@@1@Z @ 0x14012C3C4
 * Callers:
 *     ?SaveResourceCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z @ 0x1400B73F0 (-SaveResourceCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z.c)
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N11PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x14012B100 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N11PEAUVIDMM_LOCAL_.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEBAJXZ @ 0x1400378B4 (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEBAJXZ.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x140037CA4 (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x14003B2E8 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     ??0VIDMM_PROCESS_AUTOATTACH@@QEAA@PEAVVIDMM_PROCESS@@_N@Z @ 0x14003B56C (--0VIDMM_PROCESS_AUTOATTACH@@QEAA@PEAVVIDMM_PROCESS@@_N@Z.c)
 *     ??1VIDMM_PROCESS_AUTOATTACH@@QEAA@XZ @ 0x14003BA5C (--1VIDMM_PROCESS_AUTOATTACH@@QEAA@XZ.c)
 *     McTemplateK0pqqt_EtwWriteTransfer @ 0x14003EF0C (McTemplateK0pqqt_EtwWriteTransfer.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1400472B4 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     McTemplateK0qqqxxp_EtwWriteTransfer @ 0x14004FA90 (McTemplateK0qqqxxp_EtwWriteTransfer.c)
 *     ?QueueWorkItem@DXG_DEFERRED_WORK_QUEUE@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z @ 0x140050EF8 (-QueueWorkItem@DXG_DEFERRED_WORK_QUEUE@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memmove @ 0x14005B8C0 (memmove.c)
 *     Use64KbPagesForTransfer @ 0x14009BE14 (Use64KbPagesForTransfer.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@2U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400A0274 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@2U_D.c)
 *     ?VidMmReleaseTemporaryResourcesForLegacyAllocation@@YAXPEAUVIDMM_PHYSICAL_ADAPTER_LEGACY@@PEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N@Z @ 0x1400B37E4 (-VidMmReleaseTemporaryResourcesForLegacyAllocation@@YAXPEAUVIDMM_PHYSICAL_ADAPTER_LEGACY@@PEAUVI.c)
 *     ?CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1400B5F20 (-CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1400D1900 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400D1928 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1G1@Z @ 0x1400D80D8 (-DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1G1@Z.c)
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z @ 0x1400E58B8 (-FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E71D0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1400ECB3C (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1400ECCA4 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400ECEC4 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z @ 0x1400F90C8 (-DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x140103BD0 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_RESET_BACKING_STORE_REASON@@@Z @ 0x14010FE30 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_RESET_BACKING_STORE_REASON.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z @ 0x1401119B4 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAPEAX@Z @ 0x14011BB3C (-VidMmMapViewOfAllocation@@YAPEAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAPEAX@Z.c)
 *     ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@T_LARGE_INTEGER@@PEA_N3@Z @ 0x14011BD74 (-TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@W4_DXGK_MEMORY_TRANS.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAUVIDMM_GLOBAL_ALLOC@@PEAX@Z @ 0x14011EAA4 (-VidMmUnmapViewOfAllocation@@YAXPEAUVIDMM_GLOBAL_ALLOC@@PEAX@Z.c)
 *     ?VidMmRotateLegacyAllocation@@YAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PHYSICAL_ALLOC@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@P6AJ33PEAX@Z4TVIDMM_ROTATE_FLAGS@@@Z @ 0x140122398 (-VidMmRotateLegacyAllocation@@YAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PHYSICAL_ALLOC@@W4_MM_ROTATE_DIRECT.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1401226BC (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 *     ?MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z @ 0x1401231F0 (-MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_MEMORY_SEGMENT::TransferToSystem(
        VIDMM_MEMORY_SEGMENT *this,
        struct VIDMM_PHYSICAL_ALLOC_LEGACY *a2,
        char a3,
        struct VIDMM_LOCAL_ALLOC *a4,
        bool a5)
{
  __int64 v9; // r14
  VIDMM_GLOBAL **v10; // rbx
  unsigned __int16 v11; // ax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  int v15; // ecx
  _DWORD *v16; // rdx
  char v17; // di
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned int v23; // ebx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdi
  int v27; // eax
  unsigned __int16 v28; // ax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // r8d
  bool v33; // al
  int v34; // r8d
  unsigned __int64 v35; // rdx
  __int64 v36; // r9
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  __int64 v39; // rbx
  unsigned int v40; // eax
  unsigned __int64 v41; // rdi
  __int64 LogicalAddress; // rax
  SIZE_T *v43; // r10
  void *v44; // rcx
  char v45; // bl
  VIDMM_MEMORY_SEGMENT *v46; // rdi
  unsigned __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned __int64 v49; // rax
  __int64 v50; // rcx
  SIZE_T v51; // rcx
  __int64 v52; // rbx
  _QWORD *v53; // rax
  void *v54; // rdi
  void (*v55)(void *); // r8
  void *v56; // r9
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rdx
  __int64 v60; // r8
  bool v61; // [rsp+50h] [rbp-158h] BYREF
  _BYTE v62[7]; // [rsp+51h] [rbp-157h] BYREF
  __int64 (__fastcall *v63)(struct _MDL *, struct _MDL *, char *); // [rsp+58h] [rbp-150h] BYREF
  int v64; // [rsp+60h] [rbp-148h]
  size_t Size; // [rsp+68h] [rbp-140h]
  unsigned int v66; // [rsp+70h] [rbp-138h]
  int v67; // [rsp+74h] [rbp-134h]
  void *v68; // [rsp+78h] [rbp-130h] BYREF
  VIDMM_MEMORY_SEGMENT *v69; // [rsp+80h] [rbp-128h]
  __int128 v70; // [rsp+90h] [rbp-118h] BYREF
  struct VIDMM_GLOBAL_ALLOC *v71; // [rsp+A0h] [rbp-108h]
  VIDMM_MEMORY_SEGMENT *v72; // [rsp+A8h] [rbp-100h]
  __int128 v73; // [rsp+B0h] [rbp-F8h] BYREF
  struct _DXGKARG_SETVIDEOPROTECTEDREGION v74; // [rsp+C0h] [rbp-E8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+F0h] [rbp-B8h] BYREF
  _QWORD v76[4]; // [rsp+120h] [rbp-88h] BYREF
  __int128 v77; // [rsp+140h] [rbp-68h]

  Size = (size_t)a4;
  v72 = this;
  v69 = this;
  *(_QWORD *)&v73 = a2;
  v9 = *(_QWORD *)a2;
  v71 = (struct VIDMM_GLOBAL_ALLOC *)v9;
  memset(&ApcState, 0, sizeof(ApcState));
  v61 = 0;
  v10 = (VIDMM_GLOBAL **)((char *)this + 8);
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(*((VIDMM_GLOBAL **)this + 1), (struct VIDMM_GLOBAL_ALLOC *)v9, 0);
  if ( *((_QWORD *)*v10 + 5150) )
  {
    v11 = VIDMM_SEGMENT::DriverId(this);
    VIDMM_GLOBAL::RecordPageMappingHistory(v14, v11, v12, v13, 4, v9);
  }
  v15 = *(_DWORD *)(v9 + 24);
  if ( (v15 & 4) != 0 || (*(_DWORD *)(v9 + 28) & 2) != 0 || (v15 & 0x40) != 0 )
    a3 = 0;
  v63 = (__int64 (__fastcall *)(struct _MDL *, struct _MDL *, char *))(v9 + 368);
  v16 = *(_DWORD **)(v9 + 368);
  if ( (*v16 & 0x20000) != 0 && (*((_DWORD *)this + 16) & 0x40000) == 0 )
    *(_DWORD *)(v9 + 24) = v15 | 0x10000;
  if ( (*v16 & 0x20000000) == 0
    && (unsigned __int8)PsIsProcessCommitRelinquished(*(_QWORD *)(*((_QWORD *)a4 + 1) + 16LL)) )
  {
    *(_DWORD *)(v9 + 24) |= 0x10000u;
  }
  v17 = 0;
  if ( (*(_DWORD *)(v9 + 24) & 0x10000) == 0 )
    v17 = a3;
  if ( VIDMM_GLOBAL::IsTdrPending(*v10) )
  {
    WdLogSingleEntry1(4LL, v9);
    WdLogGlobalForLineNumber = 1628;
    v17 = 0;
  }
  if ( (VIDMM_GLOBAL::_Config & 8) == 0 && (*(_DWORD *)(v9 + 32) & 8) != 0 )
    *(_BYTE *)(v9 + 43) = 1;
  if ( v17 && (*(_DWORD *)(v9 + 32) & 8) != 0 && !*(_BYTE *)(v9 + 43) && Size )
  {
    VIDMM_PROCESS_AUTOATTACH::VIDMM_PROCESS_AUTOATTACH(
      (VIDMM_PROCESS_AUTOATTACH *)v76,
      *(struct VIDMM_PROCESS **)(Size + 8),
      1);
    v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(v9 + 216) + 40LL))(
            *(_QWORD *)(v9 + 216),
            *(_QWORD *)(v9 + 224),
            *(_QWORD *)(*(_QWORD *)(v9 + 48) + 16LL),
            *((_QWORD *)a2 + 2));
    VIDMM_PROCESS_AUTOATTACH::~VIDMM_PROCESS_AUTOATTACH((VIDMM_PROCESS_AUTOATTACH *)v76);
    if ( v18 < 0 )
    {
      *(_BYTE *)(v9 + 43) = 1;
      v21 = *((_QWORD *)this + 1) + 7392LL;
    }
    else
    {
      v21 = *((_QWORD *)this + 1) + 7376LL;
    }
    v22 = *((_QWORD *)a2 + 2);
    _InterlockedAdd((volatile signed __int32 *)v21, 1u);
    _InterlockedAdd64((volatile signed __int64 *)(v21 + 8), v22);
    if ( (byte_14008A201 & 1) != 0 )
      McTemplateK0pqqt_EtwWriteTransfer(v21, v19, v20, v9);
  }
  LOBYTE(v23) = *(_BYTE *)(v9 + 43) != 0 ? v17 : 0;
  v24 = *(unsigned int *)(v9 + 32);
  if ( (v24 & 8) != 0
    || (*(_DWORD *)(v9 + 28) & 0x100) == 0
    || (*(_BYTE *)(v9 + 36) & 1) != 0
    || (v24 & 2) != 0
    || *((_QWORD *)a2 + 27) )
  {
    v26 = (__int64)this + 8;
  }
  else
  {
    if ( (*(_DWORD *)(v9 + 24) & 0x400000) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1716;
      DxgkLogInternalTriageEvent(v25, 0x40000LL);
    }
    v26 = (__int64)this + 8;
    if ( !(_BYTE)v23 )
    {
LABEL_47:
      if ( (*(_BYTE *)(v9 + 36) & 1) == 0 )
        goto LABEL_61;
      goto LABEL_48;
    }
    VIDMM_GLOBAL::ResetBackingStore(*(_QWORD *)v26, (__int64 *)v9, 0);
  }
  if ( !(_BYTE)v23 || (**(_DWORD **)v63 & 0x8000000) == 0 )
    goto LABEL_47;
  if ( (*(_BYTE *)(v9 + 36) & 1) == 0 )
  {
    if ( (*(_DWORD *)(v9 + 32) & 2) == 0
      && (int)VIDMM_GLOBAL::ChargePinnedBackingStore(*(VIDMM_GLOBAL **)v26, *((_QWORD *)a2 + 2)) >= 0 )
    {
      if ( (int)VIDMM_SEGMENT::LockAllocationBackingStore(this, (struct VIDMM_GLOBAL_ALLOC *)v9) < 0 )
        VIDMM_GLOBAL::ReturnPinnedBackingStore(*(VIDMM_GLOBAL **)v26, *((_QWORD *)a2 + 2));
      else
        *(_DWORD *)(v9 + 32) |= 2u;
    }
    goto LABEL_47;
  }
LABEL_48:
  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(v24);
    WdLogGlobalForLineNumber = 1771;
  }
  memset(&v74, 0, 40);
  v63 = 0LL;
  v26 = 3LL;
  if ( (_BYTE)v23 )
  {
    (*(void (__fastcall **)(_QWORD, struct VIDMM_PHYSICAL_ALLOC_LEGACY *))(**((_QWORD **)this + 2) + 216LL))(
      *((_QWORD *)this + 2),
      a2);
    *(_QWORD *)&v74.PhysicalAdapterIndex = v9;
    *(_QWORD *)&v74.VprIndex = this;
    v74.CurrentStartOffset = *((_QWORD *)a2 + 9);
    LODWORD(v74.CurrentSize) = 0;
    v63 = VIDMM_MEMORY_SEGMENT::RotateCopyCallback;
    v23 = 2;
  }
  else
  {
    v23 = 3;
  }
  KeStackAttachProcess(*(PRKPROCESS *)(*(_QWORD *)(Size + 8) + 16LL), &ApcState);
  if ( !a5 || !*(_BYTE *)(v9 + 40) )
    v26 = 1LL;
  v27 = VidMmRotateLegacyAllocation(*((_QWORD *)this + 1), a2, v23, 0LL, (__int64)v63, (__int64)&v74, v26);
  if ( v27 == -1073741558 )
  {
    *(_DWORD *)(v9 + 24) |= 0x10000u;
LABEL_58:
    *(_BYTE *)(v9 + 36) &= ~1u;
    KeUnstackDetachProcess(&ApcState);
    goto LABEL_114;
  }
  if ( v27 >= 0 )
    goto LABEL_58;
  g_DxgMmsBugcheckExportIndex = 1;
  WdLogSingleEntry5(0LL, 270LL, 4LL, v23, v27, 0LL);
  WdLogGlobalForLineNumber = 213;
LABEL_61:
  if ( (_BYTE)v23 )
  {
    if ( (int)VIDMM_MEMORY_SEGMENT::TransferMemory(
                (struct VIDMM_PHYSICAL_ADAPTER_LEGACY **)this,
                a2,
                DXGK_MEMORY_TRANSFER_LOCAL_TO_SYSTEM,
                *(union _LARGE_INTEGER *)((char *)a2 + 72),
                &v61,
                0LL) < 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v30);
        WdLogGlobalForLineNumber = 1887;
      }
      if ( (byte_14008A201 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v30, &EventPerformanceWarning, v31, 2);
      v32 = 0;
      v64 = 0;
      if ( (**(_DWORD **)v63 & 8) == 0 && Size )
      {
        KeStackAttachProcess(*(PRKPROCESS *)(*(_QWORD *)(Size + 8) + 16LL), &ApcState);
        v32 = 1;
        v64 = 1;
      }
      v67 = v32;
      v33 = Use64KbPagesForTransfer((__int64)a2, *((_QWORD *)a2 + 8));
      v35 = *((_QWORD *)a2 + 2);
      v36 = v33 ? 0x10000LL : 4096LL;
      Size = v36;
      v37 = v35 >> 12;
      v38 = v35 >> 16;
      if ( !v33 )
        v38 = (unsigned int)v37;
      *(_QWORD *)&v70 = v38;
      v39 = *((_QWORD *)a2 + 9);
      v40 = 0;
      while ( 1 )
      {
        v66 = v40;
        if ( v40 >= (unsigned int)v38 )
          break;
        v41 = v36 * v40;
        v76[1] = 0LL;
        v77 = 0LL;
        *(_QWORD *)&v74.PhysicalAdapterIndex = 0LL;
        v74.CurrentStartOffset = 0LL;
        v74.CurrentSize = 0LL;
        v76[0] = v39;
        v76[2] = (char *)this + 8;
        v76[3] = v41;
        LogicalAddress = SysMmGetLogicalAddress(*(void *const *)(*((_QWORD *)this + 1) + 45288LL));
        v43 = (SIZE_T *)*((_QWORD *)this + 1);
        v74.NewStartOffset = v43[5660];
        v74.NewSize = v74.NewStartOffset + 48;
        *(_QWORD *)&v74.VprIndex = LogicalAddress;
        VIDMM_GLOBAL::MemoryTransfer(
          (VIDMM_GLOBAL *)v43,
          (struct VIDMM_GLOBAL_ALLOC *)v9,
          Size,
          v41,
          (struct VIDMM_TRANSFER_PARAMETER *)v76,
          (struct VIDMM_TRANSFER_PARAMETER *)&v74,
          0);
        VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), (struct VIDMM_GLOBAL_ALLOC *)v9);
        v68 = 0LL;
        v44 = (void *)VidMmMapViewOfAllocation((struct VIDMM_GLOBAL_ALLOC *)v9, v41, Size, &v68);
        if ( v44 )
        {
          memmove(v44, *(const void **)(*((_QWORD *)this + 1) + 45272LL), Size);
          VidMmUnmapViewOfAllocation((struct VIDMM_GLOBAL_ALLOC *)v9, v68);
        }
        else
        {
          *(_DWORD *)(v9 + 24) |= 0x10000u;
        }
        v40 = v66 + 1;
        v34 = v64;
        LODWORD(v38) = v70;
        v36 = Size;
      }
      if ( v34 )
        KeUnstackDetachProcess(&ApcState);
    }
  }
  else
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v24);
      WdLogGlobalForLineNumber = 1841;
    }
    if ( (*(_DWORD *)(v9 + 24) & 4) == 0 )
    {
      v28 = VIDMM_SEGMENT::DriverId(*((VIDMM_SEGMENT **)a2 + 8));
      VIDMM_GLOBAL::DiscardAllocation(
        *(VIDMM_GLOBAL **)v26,
        (struct VIDMM_GLOBAL_ALLOC *)v9,
        0LL,
        *((_QWORD *)a2 + 2),
        v28,
        *((_QWORD *)a2 + 9) + *(_QWORD *)(v29 + 24));
    }
  }
  if ( (**(_DWORD **)v63 & 0x20000) != 0 && *((_QWORD *)a2 + 17) )
  {
    memset(&v74, 0, sizeof(v74));
    v74.PhysicalAdapterIndex = *((unsigned __int16 *)this + 34);
    v74.SegmentIndex = VIDMM_SEGMENT::DriverId(this);
    v45 = 1;
    if ( *((_DWORD *)this + 105) )
    {
      v45 = 0;
      v63 = 0LL;
      v62[0] = 0;
      *(_QWORD *)&v70 = VIDMM_SEGMENT::CheckLowestAddress;
      DWORD2(v70) = 0;
      v73 = v70;
      v46 = v69;
      if ( (unsigned int)VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
                           *((_QWORD *)this + 32),
                           *((_QWORD *)this + 53),
                           *((_QWORD *)v69 + 54),
                           0,
                           (__int64)&v73,
                           (__int64)this,
                           (__int64)&v63,
                           &v70,
                           (__int64)v62) == -1073741823
        && v63 == *((__int64 (__fastcall **)(struct _MDL *, struct _MDL *, char *))a2 + 9) )
      {
        v47 = *((_QWORD *)v46 + 54);
        v48 = *((_QWORD *)a2 + 17);
        v49 = *(_QWORD *)v48 + *(_QWORD *)(v48 + 8);
        if ( v49 >= v47 )
        {
LABEL_94:
          v49 = *((_QWORD *)v46 + 54);
        }
        else
        {
          while ( 1 )
          {
            v50 = *(_QWORD *)(v48 + 40);
            if ( v50 == *((_QWORD *)this + 32) + 80LL )
              break;
            v48 = v50 - 40;
            if ( *(_BYTE *)(v48 + 56) != 2 )
              break;
            v49 = *(_QWORD *)v48 + *(_QWORD *)(v48 + 8);
            if ( v49 >= v47 )
              goto LABEL_94;
          }
        }
        v51 = v49 & ~*((_QWORD *)this + 51);
        v63 = (__int64 (__fastcall *)(struct _MDL *, struct _MDL *, char *))v51;
        if ( v51 > *((_QWORD *)this + 53) )
        {
          v74.CurrentStartOffset = *((_QWORD *)this + 53);
          v74.CurrentSize = *((_QWORD *)v46 + 55);
          v74.NewStartOffset = v51;
          v74.NewSize = v47 - v51;
          *((_QWORD *)v46 + 55) = v47 - v51;
          *((_QWORD *)this + 53) = v51;
          v45 = 1;
        }
      }
    }
    else
    {
      v74.CurrentStartOffset = *((_QWORD *)a2 + 9);
      v74.CurrentSize = ~*((_QWORD *)this + 51) & (*((_QWORD *)this + 51) + *((_QWORD *)a2 + 2));
    }
    if ( v45 )
    {
      v52 = operator new(104LL, 0x31356956u, 256LL);
      v53 = (_QWORD *)operator new(48LL, 0x38356956u, 256LL);
      v54 = v53;
      if ( v52 )
      {
        if ( v53 )
        {
          *(_QWORD *)(v52 + 16) = DeferredSetVprCallback;
          *(_QWORD *)(v52 + 32) = DeferredSetVprCompletionCallback;
          *(struct _DXGKARG_SETVIDEOPROTECTEDREGION *)(v52 + 56) = v74;
          *(_QWORD *)(v52 + 40) = *((_QWORD *)this + 1);
          *(_QWORD *)(v52 + 48) = v53;
          v53[2] = this;
          v53[3] = *((_QWORD *)a2 + 17);
          v53[4] = *((_QWORD *)a2 + 2);
          v53[5] = **(_QWORD **)(v9 + 328);
          *(_QWORD *)(v52 + 24) = v52;
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 200LL))(*((_QWORD *)this + 2));
          VIDMM_GLOBAL::FlushPagingBuffer(*((VIDMM_GLOBAL **)this + 1), 0, v55, v56);
          VIDMM_LINEAR_POOL::MarkBlockAsAllocatedScrubPending(
            *((VIDMM_LINEAR_POOL **)this + 32),
            *((unsigned __int64 **)a2 + 17),
            v74.CurrentStartOffset,
            v74.NewStartOffset);
          DXG_DEFERRED_WORK_QUEUE::QueueWorkItem(
            (DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1) + 41280LL),
            (struct DXG_DEFERRED_QUEUE_WORK_ITEM *)v52);
          *((_QWORD *)a2 + 17) = 0LL;
          if ( *(_DWORD *)(v9 + 72) != 1 )
          {
            VIDMM_SEGMENT::DecrementBytesCommitted(this, **(struct VIDMM_PARTITION ***)(v9 + 328), *((_QWORD *)a2 + 2));
            --*((_DWORD *)v69 + 88);
          }
          goto LABEL_114;
        }
        operator delete((void *)v52);
      }
      if ( v54 )
        operator delete(v54);
      if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1)
                                                                                            + 41280LL)) )
      {
        if ( (byte_14008A201 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v57, &EventPerformanceWarning, v58, 24);
        KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41328LL), Executive, 0, 0, 0LL);
      }
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 200LL))(*((_QWORD *)this + 2));
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((unsigned __int16 *)this + 34));
      VIDMM_SEGMENT::CheckFreeVPRReserve(this, &v74);
      if ( (int)ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                  *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 3168LL),
                  &v74) < 0
        && g_IsInternalRelease )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
        WdLogGlobalForLineNumber = 213;
      }
      if ( (byte_14008A201 & 1) != 0 )
        McTemplateK0qqqxxp_EtwWriteTransfer(
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
          v59,
          v60,
          v74.PhysicalAdapterIndex,
          v74.SegmentIndex,
          v74.VprIndex,
          v74.NewStartOffset,
          v74.NewSize,
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
    }
  }
LABEL_114:
  *(_DWORD *)(v9 + 24) &= ~0x400000u;
  if ( v61 )
    VidMmReleaseTemporaryResourcesForLegacyAllocation(*((struct VIDMM_PHYSICAL_ADAPTER_LEGACY **)this + 2), a2, 0);
}
