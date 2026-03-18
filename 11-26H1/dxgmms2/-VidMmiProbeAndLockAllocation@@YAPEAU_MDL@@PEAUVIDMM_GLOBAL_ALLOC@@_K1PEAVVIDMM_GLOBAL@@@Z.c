/*
 * XREFs of ?VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_GLOBAL@@@Z @ 0x1400A4C5C
 * Callers:
 *     ?EnsureLockedPages@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1@Z @ 0x14009DCD4 (-EnsureLockedPages@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1@Z.c)
 *     ?LockHeapAllocation@VIDMM_PROCESS_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_GLOBAL@@_N@Z @ 0x1400BB3C0 (-LockHeapAllocation@VIDMM_PROCESS_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2W4.c)
 *     ?LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K1_N2PEA_N@Z @ 0x1400BD5B0 (-LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K1_N2PEA_N@Z.c)
 *     ?VidMmiEnsureSystemCommitMdl@@YAJPEAVVIDMM_SEGMENT@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14011B8A8 (-VidMmiEnsureSystemCommitMdl@@YAJPEAVVIDMM_SEGMENT@@PEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x140037998 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140038394 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1400417C8 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x140044EC8 (McTemplateK0dq_EtwWriteTransfer.c)
 *     ?VidMmValidateLockedPages@@YAJPEAVVIDMM_LOCKED_PAGE_HISTORY@@T_LARGE_INTEGER@@PEBU_MDL@@_KPEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400F7330 (-VidMmValidateLockedPages@@YAJPEAVVIDMM_LOCKED_PAGE_HISTORY@@T_LARGE_INTEGER@@PEBU_MDL@@_KPEBUVI.c)
 *     ?VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z @ 0x140110AF8 (-VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAPEAX@Z @ 0x14011BB3C (-VidMmMapViewOfAllocation@@YAPEAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAPEAX@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAUVIDMM_GLOBAL_ALLOC@@PEAX@Z @ 0x14011EAA4 (-VidMmUnmapViewOfAllocation@@YAXPEAUVIDMM_GLOBAL_ALLOC@@PEAX@Z.c)
 */

struct _MDL *__fastcall VidMmiProbeAndLockAllocation(
        struct VIDMM_GLOBAL_ALLOC *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        struct VIDMM_GLOBAL *a4)
{
  struct _MDL *Mdl; // rdi
  void *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  void *v11; // r15
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r8
  LOCK_OPERATION v18; // esi
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned __int64 v23; // r9
  struct VIDMM_GLOBAL_ALLOC *v25; // [rsp+20h] [rbp-78h]
  void *v26[2]; // [rsp+50h] [rbp-48h] BYREF
  int v27; // [rsp+60h] [rbp-38h] BYREF
  __int64 v28; // [rsp+68h] [rbp-30h]
  char v29; // [rsp+70h] [rbp-28h]

  v26[0] = 0LL;
  Mdl = 0LL;
  v8 = VidMmMapViewOfAllocation(a1, a2, a3, v26);
  v11 = v8;
  if ( !v8 )
  {
    if ( (byte_14008A201 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer(v9, &EventPerformanceWarning, v10, 14);
    _InterlockedIncrement(&dword_14008A80C);
    WdLogSingleEntry0(6LL);
    v13 = 1083;
    goto LABEL_5;
  }
  Mdl = VidMmiAllocateMdl(v8, a3);
  v26[1] = Mdl;
  if ( !Mdl )
  {
    _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
    WdLogSingleEntry0(6LL);
    v13 = 1095;
LABEL_5:
    WdLogGlobalForLineNumber = v13;
    DxgkLogInternalTriageEvent(v12, 262145LL);
LABEL_28:
    if ( Mdl )
    {
      if ( (Mdl->MdlFlags & 2) != 0 )
        MmUnlockPages(Mdl);
      ExFreePoolWithTag(Mdl, 0);
    }
    if ( v26[0] )
      VidMmUnmapViewOfAllocation(a1, v26[0]);
    return 0LL;
  }
  v27 = -1;
  v28 = 0LL;
  if ( (qword_14008A010 & 2) != 0 )
  {
    v29 = 1;
    v27 = 8000;
    if ( (byte_14008A202 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerEnter, v15, 8000);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  if ( g_Feature_Largify64KBPrototype && (byte_14008A201 & 1) != 0 )
  {
    LODWORD(v25) = (_DWORD)v11;
    McTemplateK0dq_EtwWriteTransfer(v16, &VidMmUpgradeAllocationProbeAndLockChunkStart, v17, a3, (__int64)v25);
  }
  v18 = ~(unsigned __int8)(*((_DWORD *)a1 + 6) >> 5) & 2;
  if ( (*((_DWORD *)a1 + 6) & 0x80u) != 0 && (unsigned __int8)MmIsUserAddress(v11) )
    v18 = IoReadAccess;
  MmProbeAndLockPages(Mdl, 0, v18);
  if ( g_Feature_Largify64KBPrototype && (byte_14008A201 & 1) != 0 )
    McTemplateK0_EtwWriteTransfer(v19, &VidMmUpgradeAllocationProbeAndLockChunkEnd, v20);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( v29 && (byte_14008A202 & 1) != 0 )
    McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v27);
  if ( (int)VidMmValidateLockedPages(
              (struct VIDMM_GLOBAL *)((char *)a4 + 45256),
              *(union _LARGE_INTEGER *)(*((_QWORD *)a4 + 3) + 2440LL),
              Mdl,
              v23,
              a1) < 0 )
    goto LABEL_28;
  if ( v26[0] )
    VidMmUnmapViewOfAllocation(a1, v26[0]);
  return Mdl;
}
