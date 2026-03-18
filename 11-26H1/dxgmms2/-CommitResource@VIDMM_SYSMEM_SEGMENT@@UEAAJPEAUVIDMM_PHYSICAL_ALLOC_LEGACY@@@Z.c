/*
 * XREFs of ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x14012A3F0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?VidMmGetFullPfnArray@@YAPEB_KPEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14003E1A4 (-VidMmGetFullPfnArray@@YAPEB_KPEBUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     McTemplateK0ppq_EtwWriteTransfer @ 0x14003F8FC (McTemplateK0ppq_EtwWriteTransfer.c)
 *     Feature_NotifyResidency2__private_ReportDeviceUsage @ 0x14004F254 (Feature_NotifyResidency2__private_ReportDeviceUsage.c)
 *     ?NotifyResidency2@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@_N2III_KPEB_K@Z @ 0x1400A1848 (-NotifyResidency2@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@_N2II.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1400D1900 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1400ECCA4 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400ECEC4 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x14010B890 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVI.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z @ 0x1401119B4 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?VidMmiEnsureSystemCommitMdl@@YAJPEAVVIDMM_SEGMENT@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14011B8A8 (-VidMmiEnsureSystemCommitMdl@@YAJPEAVVIDMM_SEGMENT@@PEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushPendingCPUAccess@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x14011C2B8 (-FlushPendingCPUAccess@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 *     ?MapAllocationToIoMmu@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140125340 (-MapAllocationToIoMmu@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SYSMEM_SEGMENT::CommitResource(VIDMM_GLOBAL **this, struct VIDMM_PHYSICAL_ALLOC_LEGACY *a2)
{
  struct VIDMM_GLOBAL_ALLOC *v2; // rdi
  __int64 v5; // rax
  __int64 result; // rax
  char v7; // r15
  char v8; // r14
  int v9; // ebp
  __int64 v10; // rcx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  _WORD *v16; // r14
  unsigned __int16 v17; // ax
  _DWORD *v18; // rax
  VIDMM_GLOBAL *v19; // rbp
  unsigned __int64 *FullPfnArray; // rax
  ULONG Priority[2]; // [rsp+28h] [rbp-50h]

  v2 = *(struct VIDMM_GLOBAL_ALLOC **)a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    v5 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v5 + 24) = v2;
    *(_QWORD *)(v5 + 32) = *((int *)v2 + 47);
    WdLogGlobalForLineNumber = 207;
  }
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(this[1], v2, 1);
  if ( VIDMM_GLOBAL::IsTdrPending(this[1]) )
  {
    WdLogSingleEntry1(4LL, v2);
    result = 3221226166LL;
    WdLogGlobalForLineNumber = 246;
    return result;
  }
  v7 = 0;
  v8 = 0;
  if ( (*((_DWORD *)v2 + 8) & 2) != 0 )
  {
    v7 = 1;
  }
  else
  {
    v9 = VIDMM_SEGMENT::LockAllocationBackingStore((VIDMM_SEGMENT *)this, v2);
    if ( v9 < 0 )
      return (unsigned int)v9;
    v8 = 1;
  }
  if ( (**((_DWORD **)v2 + 46) & 0x4000) != 0 )
  {
    v9 = VidMmiEnsureSystemCommitMdl(this, v2);
    if ( v9 < 0 )
      goto LABEL_19;
    v10 = *((_QWORD *)v2 + 7);
    if ( !((*(_BYTE *)(v10 + 10) & 5) != 0
         ? *(PVOID *)(v10 + 24)
         : MmMapLockedPagesSpecifyCache((PMDL)v10, 0, MmCached, 0LL, 0, 0x40000010u)) )
    {
      WdLogSingleEntry1(1LL, v2);
      WdLogGlobalForLineNumber = 296;
      DxgkLogInternalTriageEvent(v12, 0x40000LL);
      v9 = -1073741801;
      goto LABEL_19;
    }
  }
  if ( *((_BYTE *)this[1] + 40098) )
  {
    v13 = VIDMM_SEGMENT::MapAllocationToIoMmu((VIDMM_SEGMENT *)this, v2);
    v9 = v13;
    if ( v13 < 0 )
    {
      _InterlockedAdd(&dword_14008A878, 1u);
      WdLogSingleEntry2(6LL, v2, v13);
      WdLogGlobalForLineNumber = 312;
      DxgkLogInternalTriageEvent(v14, 262145LL);
LABEL_19:
      if ( v8 )
        VIDMM_SEGMENT::UnlockAllocationBackingStore(this[1], v2, 0LL);
      return (unsigned int)v9;
    }
  }
  VIDMM_SEGMENT::FlushPendingCPUAccess((VIDMM_SEGMENT *)this, (struct VIDMM_GLOBAL_ALLOC **)a2);
  v16 = (_WORD *)this + 35;
  if ( (byte_14008A201 & 0x10) != 0 )
  {
    v17 = *v16 + 1;
    Priority[0] = v17;
    McTemplateK0ppq_EtwWriteTransfer(
      v17,
      &EventPagingOpSysmemCommit,
      v15,
      *((_QWORD *)this[1] + 3),
      v2,
      *(_QWORD *)Priority);
  }
  *((_QWORD *)a2 + 8) = *((_QWORD *)a2 + 16);
  *((_QWORD *)a2 + 9) = *((_QWORD *)a2 + 15);
  *((_QWORD *)a2 + 16) = 0LL;
  *((_QWORD *)a2 + 15) = 0LL;
  v18 = (_DWORD *)*((_QWORD *)v2 + 46);
  *((_DWORD *)v2 + 8) &= ~8u;
  if ( (*v18 & 0x10000) != 0 )
  {
    Feature_NotifyResidency2__private_ReportDeviceUsage();
    v19 = this[1];
    if ( *(_QWORD *)(*((_QWORD *)v19 + 3) + 1776LL) )
    {
      FullPfnArray = (unsigned __int64 *)VidMmGetFullPfnArray(v2);
      VIDMM_GLOBAL::NotifyResidency2(
        v19,
        this[2],
        (void ***)a2,
        1u,
        1,
        0,
        (*((_QWORD *)a2 + 2) >> 12) + ((*((_QWORD *)a2 + 2) & 0xFFFLL) != 0),
        (unsigned __int16)*v16,
        (*((__int64 *)a2 + 9) >> 12) + ((*((_QWORD *)a2 + 9) & 0xFFFLL) != 0),
        FullPfnArray);
    }
  }
  if ( v7 )
  {
    VIDMM_GLOBAL::ReturnPinnedBackingStore(this[1], *((_QWORD *)a2 + 2));
    *((_DWORD *)v2 + 8) &= ~2u;
  }
  return 0LL;
}
