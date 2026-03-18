/*
 * XREFs of ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400D51C0
 * Callers:
 *     ?CloseFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@UEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1400A4F90 (-CloseFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@UEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENC.c)
 *     ?OpenFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@UEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1400A5A70 (-OpenFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@UEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1400D4590 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?DestroyAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1400D51A8 (-DestroyAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKW4_DXGK_PAGESIZE@@5KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAUVIDMM_CONTEXT_ALLOC@@@Z @ 0x1400DD45C (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     RemoveDmaBufferFromPool @ 0x1400EB6EC (RemoveDmaBufferFromPool.c)
 *     AddDmaBufferToPool @ 0x1400ED250 (AddDmaBufferToPool.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x140105120 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_CONTEXT_ALLOC@@@Z @ 0x140116600 (-DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_CONTEXT_ALLOC@@@Z.c)
 * Callees:
 *     ?FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14000328C (-FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC.c)
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z @ 0x140039504 (-ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z.c)
 *     ??_GVIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x1400399A8 (--_GVIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 *     Feature_SystemCommitMdlLeakInstrumentation__private_IsEnabledDeviceUsageNoInline @ 0x14003F2CC (Feature_SystemCommitMdlLeakInstrumentation__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0puu_EtwWriteTransfer @ 0x140041008 (McTemplateK0puu_EtwWriteTransfer.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtphtp_EtwWriteTransfer @ 0x14004224C (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtphtp_EtwWriteTransfer.c)
 *     ?VidSchiValidateAllocationNotDisplayed@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC_NONPAGED@@@Z @ 0x140042F98 (-VidSchiValidateAllocationNotDisplayed@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC_NONPAGED@@.c)
 *     ?VidMmSynchronizeWithWorkerThreadRun@@YAXPEBUVIDMM_WORKER_THREAD@@@Z @ 0x1400463A0 (-VidMmSynchronizeWithWorkerThreadRun@@YAXPEBUVIDMM_WORKER_THREAD@@@Z.c)
 *     ?SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x14004CB04 (-SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x14005B03C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@_NU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400D4C18 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@_NU_D3DDDICB_D.c)
 *     ?VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1400D71A4 (-VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z.c)
 *     ?VidMmGetAllocationHint@@YAPEBU_DXGK_ALLOCATIONUSAGEHINT@@PEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400D7230 (-VidMmGetAllocationHint@@YAPEBU_DXGK_ALLOCATIONUSAGEHINT@@PEBUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400D7254 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     VidSchDestroySyncObject @ 0x1400E15C0 (VidSchDestroySyncObject.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400E68D8 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E71D0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1400ECCA4 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x14010B890 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVI.c)
 *     ?RemoveAllocationFromOfferList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010DAD4 (-RemoveAllocationFromOfferList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x140119940 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_A.c)
 *     ?DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_CROSSADAPTER_ALLOC@@@Z @ 0x140122BB0 (-DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_CROSSADAPTER_ALLOC@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::DestroyOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct VIDMM_GLOBAL_ALLOC *a3,
        char a4)
{
  __int64 v4; // r14
  __int64 v9; // rax
  bool v10; // bl
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  KSPIN_LOCK *v14; // rdx
  __int64 v15; // rdx
  const struct _DXGK_ALLOCATIONUSAGEHINT *AllocationHint; // rax
  int *v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  char *v20; // rax
  struct VIDMM_GLOBAL_ALLOC_NONPAGED *v21; // rdx
  int *v22; // rcx
  void *v23; // rdx
  __int64 v24; // rcx
  struct VIDMM_GLOBAL_ALLOC *v25; // rbx
  int v26; // eax
  bool v27; // r8
  __int64 v28; // r15
  __int64 v29; // rax
  __int64 v30; // rbx
  int v31; // r15d
  char v32; // r12
  int v33; // r13d
  HANDLE CurrentProcessId; // rax
  __int64 v35; // r8
  __int64 i; // rbx
  void *v37; // rcx
  int *v38; // r9
  __int64 v39; // rcx
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v40[2]; // [rsp+20h] [rbp-170h]
  struct _KEVENT **v41; // [rsp+28h] [rbp-168h]
  int v42; // [rsp+48h] [rbp-148h]
  int v43; // [rsp+60h] [rbp-130h]
  int v44; // [rsp+88h] [rbp-108h]
  UINT SlicePitch; // [rsp+110h] [rbp-80h]
  UINT Depth; // [rsp+114h] [rbp-7Ch]
  UINT Pitch; // [rsp+118h] [rbp-78h]
  UINT Height; // [rsp+11Ch] [rbp-74h]
  UINT Width; // [rsp+120h] [rbp-70h]
  UINT ByteOffset; // [rsp+124h] [rbp-6Ch]
  UINT SwizzledFormat; // [rsp+128h] [rbp-68h]
  D3DDDIFORMAT Format; // [rsp+12Ch] [rbp-64h]
  UINT Value; // [rsp+130h] [rbp-60h]
  UINT Version; // [rsp+134h] [rbp-5Ch]
  int v55; // [rsp+138h] [rbp-58h]
  int v56; // [rsp+13Ch] [rbp-54h]
  int v57; // [rsp+140h] [rbp-50h]
  int v58; // [rsp+144h] [rbp-4Ch]
  int v59; // [rsp+148h] [rbp-48h]
  int v60; // [rsp+14Ch] [rbp-44h]
  __int64 v62; // [rsp+158h] [rbp-38h]
  __int64 v63; // [rsp+160h] [rbp-30h]
  __int64 v64; // [rsp+168h] [rbp-28h]
  __int64 v65; // [rsp+170h] [rbp-20h]
  _QWORD v66[12]; // [rsp+180h] [rbp-10h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1E0h] [rbp+50h] BYREF

  v4 = *(_QWORD *)a3;
  if ( g_IsInternalReleaseOrDbg )
  {
    v9 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v9 + 24) = a3;
    *(_QWORD *)(v9 + 32) = a2;
    WdLogGlobalForLineNumber = 4151;
  }
  v10 = 0;
  if ( (*((_DWORD *)a3 + 6) & 4) == 0 )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)&ApcState,
      (struct _KTHREAD **)this + 5031);
    if ( *((_QWORD *)a3 + 32) )
      VIDMM_GLOBAL::RemoveAllocationFromOfferList(this, a3);
    if ( *((_QWORD *)a3 + 34) )
      VIDMM_GLOBAL::RemoveAllocationFromDecommitList(
        *(VIDMM_GLOBAL **)(*((_QWORD *)a3 + 6) + 8LL),
        a3,
        *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 6) + 8LL) + 32LL)
                                              + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL)));
    v25 = (struct VIDMM_GLOBAL_ALLOC *)*((_QWORD *)this + 5654);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&ApcState);
    v10 = v25 == a3;
  }
  if ( (*((_DWORD *)a3 + 8) & 4) != 0 )
  {
    if ( (*(_DWORD *)(v4 + 56) & 0x40) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    if ( (*(_DWORD *)(v4 + 56) & 0x41) != 0 )
    {
      memset(v66, 0, 0x58uLL);
      v26 = (*(_DWORD *)(v4 + 52) >> 2) & 0x3F;
      LODWORD(v66[0]) = 112;
      HIDWORD(v66[0]) = v26;
      v66[5] = a3;
      LODWORD(v66[6]) = 0;
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v66, v27);
      v10 = 0;
    }
    else
    {
      v10 = 1;
    }
    v28 = *(_QWORD *)(*((_QWORD *)a3 + 6) + 32LL);
    if ( (*((_DWORD *)a3 + 8) & 2) != 0 )
    {
      VIDMM_SEGMENT::UnlockAllocationBackingStore(this, a3, 0LL);
      VIDMM_GLOBAL::ReturnPinnedBackingStore(this, *(_QWORD *)(v4 + 16));
      *((_DWORD *)a3 + 8) &= ~2u;
    }
    v29 = *((_QWORD *)a3 + 6);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*(PRKPROCESS *)(*(_QWORD *)(v29 + 8) + 16LL), &ApcState);
    VIDMM_GLOBAL::CloseOneAllocation(this, (struct VIDMM_ALLOC *)(v28 - 40), 0LL, 0, 0, 0LL);
    KeUnstackDetachProcess(&ApcState);
    *((_QWORD *)a3 + 6) = 0LL;
  }
  if ( v10 )
    VidMmSynchronizeWithWorkerThreadRun(*(const struct VIDMM_WORKER_THREAD **)this);
  if ( a4 )
    VIDMM_GLOBAL::WaitForAllPagingEngines(this, a3);
  if ( (unsigned int)Feature_SystemCommitMdlLeakInstrumentation__private_IsEnabledDeviceUsageNoInline() )
  {
    v11 = *((_QWORD *)a3 + 7);
    if ( v11 )
    {
      LOBYTE(v41) = 5;
      DxgCreateLiveDumpWithWdLogs(403LL, 2083LL, this, a3, v11, (_DWORD)v41);
    }
  }
  if ( (*((_DWORD *)a3 + 8) & 0x20) != 0 )
    VIDMM_GLOBAL::UncommitGlobalBackingStore(this, a3, 1);
  VidMmiClosePartition(**((struct VIDMM_PARTITION ***)a3 + 41));
  v14 = (KSPIN_LOCK *)*((_QWORD *)a3 + 42);
  if ( v14 )
  {
    VIDMM_GLOBAL::FreeCrossAdapterDataDpc((VIDMM_GLOBAL *)v12, v14, a3);
    v12 = (unsigned int)_InterlockedDecrement(*((volatile signed __int32 **)a3 + 42));
    if ( (_DWORD)v12 )
    {
      if ( (int)v12 < 0 )
      {
        v38 = (int *)*((_QWORD *)a3 + 42);
        v39 = *v38;
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 66LL, v38, v39, 0LL);
        WdLogGlobalForLineNumber = 213;
LABEL_57:
        SysMmFreeLogicalMemory(*(struct SYSMM_ADAPTER **)(*((_QWORD *)this + 3) + 224LL), v23);
        goto LABEL_24;
      }
    }
    else
    {
      VIDMM_GLOBAL::DestroyCrossAdapterAllocation((VIDMM_GLOBAL *)v12, *((struct VIDMM_CROSSADAPTER_ALLOC **)a3 + 42));
    }
    *((_QWORD *)a3 + 42) = 0LL;
  }
  v15 = *((_QWORD *)a3 + 46);
  if ( *(_WORD *)(v15 + 8) && (byte_14008A201 & 1) != 0 )
  {
    LOBYTE(v41) = *((_BYTE *)a3 + 288);
    *(_BYTE *)&v40[0].0 = *(_BYTE *)(v15 + 8);
    McTemplateK0puu_EtwWriteTransfer(v12, &EventReportOfferAllocation, v13, a3, *(_QWORD *)&v40[0].0, v41);
  }
  AllocationHint = VidMmGetAllocationHint(a3);
  if ( (byte_14008A201 & 0x10) != 0 )
  {
    LOBYTE(v30) = (_BYTE)a2;
    v62 = *(_QWORD *)a3;
    SlicePitch = AllocationHint->v1.SlicePitch;
    Depth = AllocationHint->v1.Depth;
    Pitch = AllocationHint->v1.Pitch;
    Height = AllocationHint->v1.Height;
    Width = AllocationHint->v1.Width;
    ByteOffset = AllocationHint->v1.ByteOffset;
    SwizzledFormat = AllocationHint->v1.SwizzledFormat;
    v31 = (*((_DWORD *)a3 + 6) >> 2) & 1;
    v32 = (*(_DWORD *)(v4 + 52) >> 2) & 0x3F;
    Format = AllocationHint->v1.Format;
    v33 = (*((_DWORD *)a3 + 8) >> 1) & 1;
    Version = AllocationHint->Version;
    v63 = *((_QWORD *)a3 + 1);
    v55 = *(_DWORD *)(v4 + 48);
    v56 = *(_DWORD *)(v4 + 36);
    v57 = *(_DWORD *)(v4 + 44);
    v58 = *(_DWORD *)(v4 + 40);
    v59 = *(_DWORD *)(v4 + 32);
    v64 = *(_QWORD *)(v4 + 16);
    v60 = *v17;
    v65 = *((_QWORD *)this + 3);
    Value = AllocationHint->v1.Flags.Value;
    if ( a2 )
      v30 = *((_QWORD *)a2 + 3);
    CurrentProcessId = PsGetCurrentProcessId();
    McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtphtp_EtwWriteTransfer(
      v65,
      (const EVENT_DESCRIPTOR *)"\"",
      v35,
      (__int64)CurrentProcessId,
      v30,
      v65,
      v60,
      v64,
      v59,
      v42,
      v58,
      v57,
      v43,
      v56,
      v55,
      (char)a3,
      v63,
      v44,
      Version,
      Value,
      Format,
      SwizzledFormat,
      ByteOffset,
      Width,
      Height,
      Pitch,
      Depth,
      SlicePitch,
      v33,
      0,
      v32,
      v31,
      v62);
  }
  v18 = *(_QWORD *)(v4 + 16);
  _InterlockedIncrement((volatile signed __int32 *)this + 1904);
  _InterlockedAdd64((volatile signed __int64 *)this + 953, v18);
  v19 = *(_QWORD *)(v4 + 16);
  v20 = (char *)this + 7744;
  if ( (**((_DWORD **)a3 + 46) & 0x20000000) == 0 )
    v20 = (char *)this + 7760;
  _InterlockedIncrement((volatile signed __int32 *)v20);
  _InterlockedAdd64((volatile signed __int64 *)v20 + 1, v19);
  _InterlockedAdd64((volatile signed __int64 *)this + 5036, -*(_QWORD *)(v4 + 16));
  v21 = (struct VIDMM_GLOBAL_ALLOC_NONPAGED *)*((_QWORD *)a3 + 46);
  if ( v21 )
  {
    if ( *((_QWORD *)v21 + 4) )
    {
      VidSchiValidateAllocationNotDisplayed(*(struct _VIDSCH_GLOBAL **)(*((_QWORD *)this + 2) + 744LL), v21);
      for ( i = 0LL; i < 16; i += 8LL )
      {
        v37 = *(void **)(i + *(_QWORD *)(*((_QWORD *)a3 + 46) + 32LL));
        if ( v37 )
        {
          VidSchDestroySyncObject(v37);
          *(_QWORD *)(i + *(_QWORD *)(*((_QWORD *)a3 + 46) + 32LL)) = 0LL;
        }
      }
      operator delete(*(void **)(*((_QWORD *)a3 + 46) + 32LL));
      *(_QWORD *)(*((_QWORD *)a3 + 46) + 32LL) = 0LL;
    }
    v22 = *(int **)(*((_QWORD *)a3 + 46) + 24LL);
    if ( v22 )
    {
      VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference(v22);
      *(_QWORD *)(*((_QWORD *)a3 + 46) + 24LL) = 0LL;
    }
  }
  v23 = (void *)*((_QWORD *)a3 + 43);
  if ( v23 )
    goto LABEL_57;
LABEL_24:
  if ( *(_QWORD *)a3 )
  {
    v24 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8 * (((unsigned __int64)*(unsigned int *)(v4 + 52) >> 2) & 0x3F));
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 40LL))(v24);
    *(_QWORD *)a3 = 0LL;
  }
  if ( *((_DWORD *)a3 + 58) )
  {
    *((_DWORD *)a3 + 6) |= 0x40000u;
  }
  else
  {
    operator delete(*((void **)a3 + 46));
    *((_DWORD *)a3 + 6) |= 0x20000u;
    VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'(a3);
  }
}
