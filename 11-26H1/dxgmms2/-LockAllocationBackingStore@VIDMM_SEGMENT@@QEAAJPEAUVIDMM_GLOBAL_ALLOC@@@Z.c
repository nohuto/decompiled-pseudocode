/*
 * XREFs of ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400ECEC4
 * Callers:
 *     ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x14012A3F0 (-CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x14012A910 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_NPEAUVIDMM_LOCAL_ALLOC@@1@Z @ 0x14012C3C4 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_NPEAUVIDMM_LOCAL_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??0VIDMM_PROCESS_AUTOATTACH@@QEAA@PEAVVIDMM_PROCESS@@_N@Z @ 0x14003B56C (--0VIDMM_PROCESS_AUTOATTACH@@QEAA@PEAVVIDMM_PROCESS@@_N@Z.c)
 *     ??1VIDMM_PROCESS_AUTOATTACH@@QEAA@XZ @ 0x14003BA5C (--1VIDMM_PROCESS_AUTOATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2_N@Z @ 0x1400A2004 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2_N@.c)
 *     ?VidMmiAddProbeAndLockReference@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400ED0A8 (-VidMmiAddProbeAndLockReference@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     LogLockAllocationBackingStoreToEtw @ 0x1400ED0F4 (LogLockAllocationBackingStoreToEtw.c)
 */

__int64 __fastcall VIDMM_SEGMENT::LockAllocationBackingStore(VIDMM_SEGMENT *this, struct VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v2; // rbp
  VIDMM_GLOBAL **v3; // rsi
  struct VIDMM_LOCAL_ALLOC *v5; // rdx
  int v6; // esi
  __int64 v7; // rcx
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-88h] BYREF
  _BYTE v10[64]; // [rsp+80h] [rbp-58h] BYREF

  v2 = *(_QWORD *)a2;
  v3 = (VIDMM_GLOBAL **)((char *)this + 8);
  v5 = (struct VIDMM_LOCAL_ALLOC *)*((unsigned int *)a2 + 7);
  memset(&ApcState, 0, sizeof(ApcState));
  if ( ((unsigned __int16)v5 & 0x4000) == 0
    && ((*(_DWORD *)(*((_QWORD *)*v3 + 3) + 444LL) & 4) != 0 && (**((_DWORD **)a2 + 46) & 0x4000) == 0
     || ((unsigned __int8)v5 & 0x10) != 0) )
  {
    if ( *((_QWORD *)a2 + 28) )
    {
      VIDMM_PROCESS_AUTOATTACH::VIDMM_PROCESS_AUTOATTACH(
        (VIDMM_PROCESS_AUTOATTACH *)v10,
        *(struct VIDMM_PROCESS **)(*((_QWORD *)a2 + 6) + 8LL),
        1);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a2 + 27) + 104LL))(
        *((_QWORD *)a2 + 27),
        *((_QWORD *)a2 + 28));
      VIDMM_PROCESS_AUTOATTACH::~VIDMM_PROCESS_AUTOATTACH((VIDMM_PROCESS_AUTOATTACH *)v10);
    }
  }
  else
  {
    if ( !*((_DWORD *)a2 + 47) )
    {
      if ( (**((_DWORD **)a2 + 46) & 8) == 0 )
        KeStackAttachProcess(*(PRKPROCESS *)(*(_QWORD *)(*((_QWORD *)a2 + 6) + 8LL) + 16LL), &ApcState);
      v6 = VIDMM_GLOBAL::ProbeAndLockAllocation(*v3, v5, a2, 0LL, *(_QWORD *)(v2 + 16), 0);
      if ( (**((_DWORD **)a2 + 46) & 8) == 0 )
        KeUnstackDetachProcess(&ApcState);
      if ( v6 < 0 )
      {
        _InterlockedIncrement(&dword_14008A6E4);
        WdLogSingleEntry2(6LL, a2, *(_QWORD *)(v2 + 16));
        WdLogGlobalForLineNumber = 2602;
        DxgkLogInternalTriageEvent(v7, 262145LL);
        return 3223191809LL;
      }
      LogLockAllocationBackingStoreToEtw(a2);
    }
    VidMmiAddProbeAndLockReference(a2);
  }
  return 0LL;
}
