/*
 * XREFs of ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x14012A910
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x140037CA4 (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     ?VidMmGetFullPfnArray@@YAPEB_KPEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14003E1A4 (-VidMmGetFullPfnArray@@YAPEB_KPEBUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     Feature_NotifyResidency2__private_ReportDeviceUsage @ 0x14004F254 (Feature_NotifyResidency2__private_ReportDeviceUsage.c)
 *     ?NotifyResidency2@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@_N2III_KPEB_K@Z @ 0x1400A1848 (-NotifyResidency2@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@_N2II.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1400D1900 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?MapApertureRange@VIDMM_APERTURE_SEGMENT@@AEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K11PEBU_MDL@@_N3@Z @ 0x1400D7D00 (-MapApertureRange@VIDMM_APERTURE_SEGMENT@@AEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K11PEBU_MDL@@_N.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z @ 0x1400D941C (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1400ECCA4 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400ECEC4 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x14010B890 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVI.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z @ 0x1401119B4 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?VidMmiEnsureSystemCommitMdl@@YAJPEAVVIDMM_SEGMENT@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14011B8A8 (-VidMmiEnsureSystemCommitMdl@@YAJPEAVVIDMM_SEGMENT@@PEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushPendingCPUAccess@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x14011C2B8 (-FlushPendingCPUAccess@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 *     ?MapAllocationToIoMmu@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140125340 (-MapAllocationToIoMmu@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::CommitResource(VIDMM_GLOBAL **this, struct VIDMM_PHYSICAL_ALLOC_LEGACY *a2)
{
  struct VIDMM_GLOBAL_ALLOC *v2; // rdi
  __int64 v5; // rax
  __int64 result; // rax
  char v7; // r12
  char v8; // r15
  int v9; // ebp
  __int64 v10; // rcx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 *v15; // rbx
  VIDMM_SEGMENT *v16; // rcx
  __int64 v17; // rax
  _DWORD *v18; // rax
  VIDMM_GLOBAL *v19; // rbp
  struct VIDMM_PHYSICAL_ADAPTER *v20; // rbx
  unsigned __int64 *FullPfnArray; // rax
  unsigned __int16 v22; // ax
  unsigned __int64 BugCheckOnFailure; // [rsp+20h] [rbp-58h]

  v2 = *(struct VIDMM_GLOBAL_ALLOC **)a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    v5 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v5 + 24) = v2;
    *(_QWORD *)(v5 + 32) = *((int *)v2 + 47);
    WdLogGlobalForLineNumber = 386;
  }
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(this[1], v2, 1);
  if ( VIDMM_GLOBAL::IsTdrPending(this[1]) )
  {
    WdLogSingleEntry1(4LL, v2);
    result = 3221226166LL;
    WdLogGlobalForLineNumber = 425;
    return result;
  }
  v7 = 0;
  v8 = 0;
  if ( (*((_DWORD *)v2 + 7) & 2) != 0 )
  {
    v15 = (__int64 *)((char *)a2 + 120);
  }
  else
  {
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
    v9 = VidMmiEnsureSystemCommitMdl(this, v2);
    if ( v9 < 0 )
    {
LABEL_17:
      if ( v8 )
        VIDMM_SEGMENT::UnlockAllocationBackingStore(this[1], v2, 0LL);
      return (unsigned int)v9;
    }
    if ( (**((_DWORD **)v2 + 46) & 0x4000) != 0 )
    {
      v10 = *((_QWORD *)v2 + 7);
      if ( !((*(_BYTE *)(v10 + 10) & 5) != 0
           ? *(PVOID *)(v10 + 24)
           : MmMapLockedPagesSpecifyCache((PMDL)v10, 0, MmCached, 0LL, 0, 0x40000010u)) )
      {
        WdLogSingleEntry1(1LL, v2);
        WdLogGlobalForLineNumber = 495;
        DxgkLogInternalTriageEvent(v12, 0x40000LL);
        v9 = -1073741801;
        goto LABEL_17;
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
        WdLogGlobalForLineNumber = 510;
        DxgkLogInternalTriageEvent(v14, 262145LL);
        goto LABEL_17;
      }
    }
    VIDMM_SEGMENT::FlushPendingCPUAccess((VIDMM_SEGMENT *)this, (struct VIDMM_GLOBAL_ALLOC **)a2);
    v15 = (__int64 *)((char *)a2 + 120);
    VIDMM_APERTURE_SEGMENT::MapApertureRange(
      (VIDMM_APERTURE_SEGMENT *)this,
      (struct VIDMM_GLOBAL_ALLOC **)a2,
      *((_QWORD *)a2 + 2) >> 12,
      *((_QWORD *)a2 + 15) / 4096LL,
      BugCheckOnFailure,
      *((struct _MDL **)v2 + 7),
      0,
      (**((_DWORD **)v2 + 46) & 0x800004) == 4);
  }
  v16 = (VIDMM_SEGMENT *)*((_QWORD *)a2 + 16);
  v17 = *v15;
  *((_QWORD *)a2 + 8) = v16;
  *((_QWORD *)a2 + 9) = v17;
  *(_WORD *)(*((_QWORD *)v2 + 46) + 10LL) = VIDMM_SEGMENT::DriverId(v16);
  *(_QWORD *)(*((_QWORD *)v2 + 46) + 40LL) = *((_QWORD *)a2 + 9) + *(_QWORD *)(*((_QWORD *)a2 + 8) + 24LL);
  *((_QWORD *)a2 + 16) = 0LL;
  *v15 = 0LL;
  v18 = (_DWORD *)*((_QWORD *)v2 + 46);
  *((_DWORD *)v2 + 8) &= ~8u;
  if ( (*v18 & 0x10000) != 0 )
  {
    Feature_NotifyResidency2__private_ReportDeviceUsage();
    v19 = this[1];
    if ( *(_QWORD *)(*((_QWORD *)v19 + 3) + 1776LL) )
    {
      v20 = *(struct VIDMM_PHYSICAL_ADAPTER **)(*((_QWORD *)v19 + 5040) + 8LL * ((*((_DWORD *)a2 + 13) >> 2) & 0x3F));
      FullPfnArray = (unsigned __int64 *)VidMmGetFullPfnArray(v2);
      VIDMM_GLOBAL::NotifyResidency2(
        v19,
        v20,
        (void ***)a2,
        1u,
        1,
        0,
        (*((_QWORD *)a2 + 2) >> 12) + ((*((_QWORD *)a2 + 2) & 0xFFFLL) != 0),
        *((unsigned __int16 *)this + 35),
        (*((__int64 *)a2 + 9) >> 12) + ((*((_QWORD *)a2 + 9) & 0xFFFLL) != 0),
        FullPfnArray);
    }
    else
    {
      v22 = VIDMM_SEGMENT::DriverId((VIDMM_SEGMENT *)this);
      VIDMM_GLOBAL::NotifyResidency((ADAPTER_RENDER **)v19, v2, 1u, v22, *((_QWORD *)a2 + 9));
    }
  }
  if ( v7 )
  {
    VIDMM_GLOBAL::ReturnPinnedBackingStore(this[1], *((_QWORD *)a2 + 2));
    *((_DWORD *)v2 + 8) &= ~2u;
  }
  return 0LL;
}
