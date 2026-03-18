/*
 * XREFs of ReleaseTemporaryResourcesForAllocation @ 0x1400AFF9C
 * Callers:
 *     FlushTemporaryResources @ 0x1400AF4C4 (FlushTemporaryResources.c)
 *     FlushTemporaryResourcesForAllocation @ 0x1400AF62C (FlushTemporaryResourcesForAllocation.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14002C2E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140035B48 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140035F90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?VidMmFlushPendingGpuAccess@@YAXPEBUVIDMM_SEGMENT_BASE@@PEAUVIDMM_GLOBAL_ALLOC@@_K2@Z @ 0x1400A31E0 (-VidMmFlushPendingGpuAccess@@YAXPEBUVIDMM_SEGMENT_BASE@@PEAUVIDMM_GLOBAL_ALLOC@@_K2@Z.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400D8DB4 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E71D0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x140105B64 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall ReleaseTemporaryResourcesForAllocation(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r13
  struct VIDMM_GLOBAL_ALLOC *v6; // r15
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdi
  unsigned __int64 LogicalAddress; // rax
  int v14; // [rsp+20h] [rbp-48h]
  char v15; // [rsp+20h] [rbp-48h]
  _BYTE v16[16]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a1 + 56);
  v6 = *(struct VIDMM_GLOBAL_ALLOC **)a2;
  if ( *a3 || a3[1] )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 27LL, v6, a1, 0LL);
    WdLogGlobalForLineNumber = 213;
    JUMPOUT(0x1400B0198LL);
  }
  VIDMM_GLOBAL::WaitForAllPagingEngines(*(VIDMM_GLOBAL **)(a1 + 56), *(struct VIDMM_GLOBAL_ALLOC **)a2);
  v8 = a3 + 6;
  v9 = a3[6];
  if ( *(_QWORD **)(v9 + 8) != a3 + 6 || (v10 = (_QWORD *)a3[7], (_QWORD *)*v10 != v8) )
    __fastfail(3u);
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  *v8 = 0LL;
  a3[7] = 0LL;
  VIDMM_GLOBAL::FlushScratchGpuVaRanges((VIDMM_GLOBAL *)v4, *(unsigned __int16 *)(a1 + 72));
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (struct VIDMM_GLOBAL_ALLOC *)((char *)v6 + 136), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  VidMmFlushPendingGpuAccess(
    (const struct VIDMM_SEGMENT_BASE *)((*(_QWORD *)(a1 + 1880) + 8LL) & -(__int64)(*(_QWORD *)(a1 + 1880) != 0LL)),
    *(struct VIDMM_GLOBAL_ALLOC **)a2,
    a3[3],
    a3[4]);
  if ( *(_BYTE *)(v4 + 40098) && (a3[5] & 1) == 0 )
  {
    v11 = a3[2];
    v12 = a3[4] >> 12;
    LogicalAddress = VidMmiGetLogicalAddress(*(void **)(*(_QWORD *)a2 + 344LL), a3[3]);
    v15 = 0;
    SysMmUnmapPagesFromIommu(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 224LL), LogicalAddress, v11, v12, v15, 3, a2);
  }
  if ( (a3[5] & 2) != 0 )
  {
    LOBYTE(v14) = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(**((_QWORD **)v6 + 27) + 24LL))(
      *((_QWORD *)v6 + 27),
      *((_QWORD *)v6 + 28),
      a3[3],
      a3[4],
      v14);
  }
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)v16);
  *(_DWORD *)(a2 + 56) = *(_DWORD *)(a2 + 56) & 0xFFFFFFBF | (a2 + 96 != *(_QWORD *)(a2 + 96) ? 0x40 : 0);
  --*(_DWORD *)(a1 + 1824);
  operator delete(a3);
}
