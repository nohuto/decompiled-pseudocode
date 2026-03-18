/*
 * XREFs of ?VidMmUpgradeAllocation@@YAJPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400A8668
 * Callers:
 *     ?DoUpgrade64KPages@@YAXPEAUVIDMM_WORKER_THREAD@@@Z @ 0x140099884 (-DoUpgrade64KPages@@YAXPEAUVIDMM_WORKER_THREAD@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14001D9F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0ppxx_EtwWriteTransfer @ 0x14003886C (McTemplateK0ppxx_EtwWriteTransfer.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1400417C8 (McTemplateK0_EtwWriteTransfer.c)
 *     ?VidMmEndFaultAndStall@@YAXPEAVVIDMM_GLOBAL@@@Z @ 0x14004EC3C (-VidMmEndFaultAndStall@@YAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?VidMmStartFaultAndStall@@YAXPEAVVIDMM_GLOBAL@@@Z @ 0x14004EE34 (-VidMmStartFaultAndStall@@YAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     McTemplateK0pxxxt_EtwWriteTransfer @ 0x14004EED4 (McTemplateK0pxxxt_EtwWriteTransfer.c)
 *     McTemplateK0xxxxq_EtwWriteTransfer @ 0x14004F004 (McTemplateK0xxxxq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memmove @ 0x14005B8C0 (memmove.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?MakeOneVirtualAddressRangeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_K1PEAPEAU2@PEA_N@Z @ 0x14009FFB8 (-MakeOneVirtualAddressRangeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_K1PEAPEAU2@PEA_N@Z.c)
 *     ?MakeVirtualAddressRangeNotResidentSubrange@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1E@Z @ 0x1400A01D4 (-MakeVirtualAddressRangeNotResidentSubrange@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1E@Z.c)
 *     GetContiguousChunkData @ 0x1400A77BC (GetContiguousChunkData.c)
 *     ?GetNumAvailable64KPages@@YA_KXZ @ 0x1400A78C8 (-GetNumAvailable64KPages@@YA_KXZ.c)
 *     ?StopUpgradingAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400A7EAC (-StopUpgradingAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ValidateAllocationZeroed @ 0x1400A8220 (ValidateAllocationZeroed.c)
 *     ValidateGpuPtes @ 0x1400A8308 (ValidateGpuPtes.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400CF280 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z @ 0x1400CF620 (-StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D1528 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400D1928 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x14011379C (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 */

__int64 __fastcall VidMmUpgradeAllocation(struct VIDMM_WORKER_THREAD *a1, struct VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r12
  char *v9; // r13
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // r13d
  unsigned __int64 NumAvailable64KPages; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // r8
  const EVENT_DESCRIPTOR *v40; // rdx
  __int64 v41; // [rsp+38h] [rbp-110h]
  unsigned int v42; // [rsp+38h] [rbp-110h]
  int v43; // [rsp+40h] [rbp-108h] BYREF
  int v44; // [rsp+44h] [rbp-104h] BYREF
  unsigned int v45; // [rsp+48h] [rbp-100h] BYREF
  int v46; // [rsp+4Ch] [rbp-FCh] BYREF
  char *v47; // [rsp+50h] [rbp-F8h]
  CVirtualAddressAllocator *VirtualAddressAllocator; // [rsp+58h] [rbp-F0h]
  union _LARGE_INTEGER Interval; // [rsp+60h] [rbp-E8h] BYREF
  int v50; // [rsp+68h] [rbp-E0h] BYREF
  unsigned __int64 v51; // [rsp+70h] [rbp-D8h]
  unsigned __int64 v52; // [rsp+78h] [rbp-D0h]
  VIDMM_PROCESS *v53; // [rsp+80h] [rbp-C8h]
  char *v54; // [rsp+88h] [rbp-C0h]
  __int64 v55; // [rsp+90h] [rbp-B8h]
  unsigned __int64 v56; // [rsp+98h] [rbp-B0h]
  VIDMM_PROCESS *v57; // [rsp+A0h] [rbp-A8h]
  union _LARGE_INTEGER v58; // [rsp+A8h] [rbp-A0h]
  __int64 v59; // [rsp+B0h] [rbp-98h]
  unsigned __int64 v60; // [rsp+B8h] [rbp-90h]
  struct VIDMM_GLOBAL_ALLOC *v61; // [rsp+C0h] [rbp-88h]
  unsigned __int64 v62; // [rsp+C8h] [rbp-80h]
  unsigned __int64 v63; // [rsp+D0h] [rbp-78h] BYREF
  char *v64; // [rsp+D8h] [rbp-70h]
  struct _KAPC_STATE ApcState; // [rsp+E0h] [rbp-68h] BYREF

  v61 = a2;
  v3 = *(_QWORD *)a1;
  v55 = v3;
  v59 = v3 + 44560;
  v4 = *(_QWORD *)(v3 + 44560);
  v52 = v4;
  v62 = v4;
  v5 = *(_QWORD *)(v3 + 44568) - v4;
  v51 = v5;
  v60 = v5;
  v6 = v4 + *(_QWORD *)(*((_QWORD *)a2 + 6) + 16LL);
  v7 = v6 + v5;
  if ( (byte_14008A201 & 1) != 0 )
    McTemplateK0ppxx_EtwWriteTransfer((__int64)a1, &VidMmUpgradeAllocationChunkStart, v4, a2, v5, v6, v4);
  v8 = (v6 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v56 = v8;
  v9 = (char *)(v7 & 0xFFFFFFFFFFFF0000uLL);
  v54 = v9;
  if ( v8 >= (unsigned __int64)v9 )
  {
    *(_QWORD *)(v3 + 44560) = *(_QWORD *)(v3 + 44568);
    VIDMM_GLOBAL::StopUpgradingAllocation((VIDMM_GLOBAL *)v3, *(struct VIDMM_GLOBAL_ALLOC **)(v3 + 44632));
    return 0LL;
  }
  memset(&ApcState, 0, sizeof(ApcState));
  v53 = *(VIDMM_PROCESS **)(*((_QWORD *)a2 + 6) + 8LL);
  v57 = v53;
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                              v53,
                              *(_DWORD *)(*(_QWORD *)(v3 + 24) + 240LL),
                              (*(_DWORD *)(*(_QWORD *)a2 + 52LL) >> 2) & 0x3F);
  KeStackAttachProcess(*((PRKPROCESS *)v53 + 2), &ApcState);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 27) + 88LL))(*((_QWORD *)a2 + 27));
  if ( !*(_BYTE *)(v3 + 44697) )
  {
    if ( (byte_14008A201 & 1) != 0 )
      McTemplateK0_EtwWriteTransfer(v11, &LargePageUpgrade_LargifyStartSuspend, v12);
    VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(v53, *(_DWORD *)(*(_QWORD *)(v3 + 24) + 240LL), 1);
  }
  VidMmStartFaultAndStall((struct VIDMM_GLOBAL *)v3);
  if ( !*(_BYTE *)(v3 + 44697) )
  {
    if ( (byte_14008A201 & 1) == 0 )
      goto LABEL_14;
    McTemplateK0_EtwWriteTransfer(v13, &LargePageUpgrade_LargifyEndSuspend, v14);
  }
  if ( (byte_14008A201 & 1) != 0 )
    McTemplateK0_EtwWriteTransfer(v13, &LargePageUpgrade_LargifySelect, v14);
LABEL_14:
  if ( (*((_DWORD *)DXGGLOBAL::GetGlobal() + 64) & 4) != 0 )
    ValidateGpuPtes((char *)v8, VirtualAddressAllocator, v3 + 44560, 0);
  VIDMM_GLOBAL::StartPreparation(v3, 0xFFFFFFFFLL, 0LL, 0LL, 121);
  VIDMM_GLOBAL::MakeVirtualAddressRangeNotResidentSubrange((VIDMM_GLOBAL *)v3, a2, v52, v51);
  VIDMM_GLOBAL::EndPreparation((VIDMM_GLOBAL *)v3, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
  if ( (byte_14008A201 & 1) != 0 )
    McTemplateK0_EtwWriteTransfer(v15, &VidMmUpgradeAllocationGpuVaUnmapped, v16);
  VIDMM_GLOBAL::WaitForAllPagingEnginesIdle((VIDMM_GLOBAL *)v3, 0xFFFFFFFF);
  if ( (byte_14008A201 & 1) != 0 )
    McTemplateK0_EtwWriteTransfer(v17, &VidMmUpgradeAllocationEnginesIdle, v18);
  if ( (*((_DWORD *)DXGGLOBAL::GetGlobal() + 64) & 4) != 0 )
    ValidateGpuPtes((char *)v8, VirtualAddressAllocator, v3 + 44560, 1);
  if ( (*((_DWORD *)DXGGLOBAL::GetGlobal() + 64) & 2) != 0 )
  {
    memset((void *)v8, 0, (size_t)&v9[-v8]);
    ValidateAllocationZeroed(
      (char *)v8,
      (unsigned __int64)v9,
      (__int64)a2,
      (__int64)VirtualAddressAllocator,
      v3 + 44560);
    Interval.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &Interval);
    ValidateAllocationZeroed(
      (char *)v8,
      (unsigned __int64)v9,
      (__int64)a2,
      (__int64)VirtualAddressAllocator,
      v3 + 44560);
  }
  Interval = *(union _LARGE_INTEGER *)(*(_QWORD *)(v3 + 44672) + 8LL * *(unsigned int *)(v3 + 44648));
  v58 = Interval;
  MmUnlockPages((PMDL)Interval.QuadPart);
  if ( (byte_14008A201 & 1) != 0 )
    McTemplateK0_EtwWriteTransfer(v19, &VidMmUpgradeAllocationChunkUnlocked, v20);
  v50 = 16;
  v63 = v8;
  v47 = &v9[-v8];
  v64 = &v9[-v8];
  v44 = 0;
  v45 = 0;
  v43 = 0;
  v46 = 0;
  GetContiguousChunkData((char *)v8, v9, &v44, &v45);
  if ( (byte_14008A201 & 1) != 0 )
  {
    McTemplateK0_EtwWriteTransfer(v21, &VidMmUpgradeAllocationLargifyStart, v22);
    if ( (byte_14008A201 & 1) != 0 )
    {
      v42 = (**((_DWORD **)a2 + 46) >> 2) & 1;
      McTemplateK0pxxxt_EtwWriteTransfer(v42, &LargePageUpgrade_LargifyStart, v23, a2, v47, 0LL, 0LL, v42);
    }
  }
  v26 = NtSetInformationVirtualMemory(-1LL, 5LL, 1LL, &v63, &v50, 4);
  LODWORD(v47) = v26;
  if ( v26 < 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 800;
    NumAvailable64KPages = GetNumAvailable64KPages();
    if ( (byte_14008A201 & 1) == 0 )
      goto LABEL_34;
    LODWORD(v41) = v26;
    McTemplateK0xxxxq_EtwWriteTransfer(
      v29,
      v28,
      v30,
      v64,
      *(_QWORD *)(v3 + 44704),
      *(_QWORD *)(v3 + 44712),
      NumAvailable64KPages,
      v41);
  }
  if ( (byte_14008A201 & 1) != 0 )
    McTemplateK0_EtwWriteTransfer(v24, &VidMmUpgradeAllocationLargifyEnd, v25);
LABEL_34:
  GetContiguousChunkData((char *)v8, v54, &v43, &v46);
  if ( (byte_14008A201 & 1) != 0 )
  {
    LODWORD(v41) = (**((_DWORD **)a2 + 46) >> 2) & 1;
    McTemplateK0pxxxt_EtwWriteTransfer(
      (unsigned __int64)(unsigned int)(v43 - v44) << 16,
      &LargePageUpgrade_LargifyEnd,
      (__int64)&v54[-v8],
      a2,
      &v54[-v8],
      (unsigned __int64)v45 << 16,
      (unsigned __int64)(unsigned int)(v43 - v44) << 16,
      v41);
  }
  if ( !v46 )
    *((_DWORD *)a2 + 6) |= 0x40000000u;
  if ( v26 >= 0 )
    ++*(_DWORD *)(v3 + 44768);
  MmProbeAndLockPages((PMDL)Interval.QuadPart, 0, (LOCK_OPERATION)(~(unsigned __int8)(*((_DWORD *)a2 + 6) >> 5) & 2));
  memmove(
    (void *)(*(_QWORD *)(v3 + 44616) + 48LL + 8LL * (*(_QWORD *)(v3 + 44560) >> 12)),
    (const void *)(Interval.QuadPart + 48),
    8 * ((unsigned __int64)*(unsigned int *)(Interval.QuadPart + 40) >> 12));
  if ( (byte_14008A201 & 1) != 0 )
    McTemplateK0_EtwWriteTransfer(v31, &VidMmUpgradeAllocationChunkLocked, v32);
  v33 = *(_QWORD *)(*((_QWORD *)a2 + 6) + 32LL);
  VIDMM_GLOBAL::StartPreparation(v3, 0xFFFFFFFFLL, 0LL, 0LL, 206);
  LODWORD(v47) = VIDMM_GLOBAL::MakeOneVirtualAddressRangeResident((VIDMM_GLOBAL *)v3, (__int64 ***)(v33 - 40), v52, v51);
  VIDMM_GLOBAL::EndPreparation((VIDMM_GLOBAL *)v3, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
  if ( (byte_14008A201 & 1) != 0 )
    McTemplateK0_EtwWriteTransfer(v34, &VidMmUpgradeAllocationGpuVaMapped, v35);
  if ( (int)v47 >= 0 )
  {
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle((VIDMM_GLOBAL *)v3, 0xFFFFFFFF);
    if ( (*((_DWORD *)DXGGLOBAL::GetGlobal() + 64) & 4) != 0 )
      ValidateGpuPtes((char *)v8, VirtualAddressAllocator, v3 + 44560, 0);
    if ( (byte_14008A201 & 1) != 0 )
      McTemplateK0_EtwWriteTransfer(v36, &VidMmUpgradeAllocationEnginesIdle, v37);
    VidMmEndFaultAndStall((struct VIDMM_GLOBAL *)v3);
    if ( !*(_BYTE *)(v3 + 44697) )
      VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(v53, *(_DWORD *)(*(_QWORD *)(v3 + 24) + 240LL), 0);
  }
  KeUnstackDetachProcess(&ApcState);
  if ( v26 < 0 )
  {
    if ( (byte_14008A201 & 1) != 0 )
    {
      v40 = (const EVENT_DESCRIPTOR *)&VidMmUpgradeAllocationChunkFailed;
      goto LABEL_56;
    }
  }
  else if ( (byte_14008A201 & 1) != 0 )
  {
    v40 = (const EVENT_DESCRIPTOR *)&VidMmUpgradeAllocationChunkEnd;
LABEL_56:
    McTemplateK0_EtwWriteTransfer(v38, v40, v39);
  }
  return (unsigned int)v26;
}
