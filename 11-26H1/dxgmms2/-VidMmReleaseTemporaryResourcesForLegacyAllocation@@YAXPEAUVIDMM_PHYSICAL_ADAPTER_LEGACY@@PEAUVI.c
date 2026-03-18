/*
 * XREFs of ?VidMmReleaseTemporaryResourcesForLegacyAllocation@@YAXPEAUVIDMM_PHYSICAL_ADAPTER_LEGACY@@PEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N@Z @ 0x1400B37E4
 * Callers:
 *     FlushTemporaryResources_0 @ 0x140114508 (FlushTemporaryResources_0.c)
 *     FlushTemporaryResourcesForAllocation_0 @ 0x140117CA8 (FlushTemporaryResourcesForAllocation_0.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAU_MDL@@_N@Z @ 0x14012B6B8 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAU_MDL@@_N@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_NPEAUVIDMM_LOCAL_ALLOC@@1@Z @ 0x14012C3C4 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_NPEAUVIDMM_LOCAL_.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14002C2E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140035B48 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140035F90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E71D0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x140105B64 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_RESET_BACKING_STORE_REASON@@@Z @ 0x14010FE30 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_RESET_BACKING_STORE_REASON.c)
 *     ?FlushPendingGPUAccess@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x14012A078 (-FlushPendingGPUAccess@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidMmReleaseTemporaryResourcesForLegacyAllocation(
        struct VIDMM_PHYSICAL_ADAPTER_LEGACY *a1,
        struct VIDMM_PHYSICAL_ALLOC_LEGACY *a2,
        char a3)
{
  _QWORD *v3; // rsi
  VIDMM_GLOBAL *v4; // r15
  __int64 v5; // rbp
  _QWORD *v9; // rax
  VIDMM_SEGMENT *v10; // r14
  __int64 v11; // r9
  __int64 v12; // r8
  _BYTE v13[16]; // [rsp+30h] [rbp-38h] BYREF

  v3 = (_QWORD *)((char *)a2 + 200);
  v4 = (VIDMM_GLOBAL *)*((_QWORD *)a1 + 7);
  v5 = *(_QWORD *)a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdTrace(a1);
    v9[3] = *v3;
    v9[4] = *((int *)a2 + 53);
    v9[5] = *((unsigned int *)a2 + 52);
    WdLogGlobalForLineNumber = 6718;
  }
  if ( *((_QWORD *)a2 + 19) || *((_QWORD *)a2 + 20) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 27LL, v5, a1, 0LL);
    WdLogGlobalForLineNumber = 213;
    JUMPOUT(0x1400B39A6LL);
  }
  VIDMM_GLOBAL::WaitForAllPagingEngines(v4, (struct VIDMM_GLOBAL_ALLOC *)v5);
  v10 = (VIDMM_SEGMENT *)*((_QWORD *)a2 + 27);
  if ( (*((_DWORD *)v10 + 16) & 0x1000) != 0 )
    VIDMM_GLOBAL::FlushScratchGpuVaRanges(v4, *((unsigned __int16 *)a1 + 36));
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (struct DXGFASTMUTEX *const)(v5 + 136), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  VIDMM_SEGMENT::FlushPendingGPUAccess(v10, a2);
  if ( (*((_DWORD *)a2 + 48) & 2) != 0 )
  {
    (*(void (__fastcall **)(VIDMM_SEGMENT *, struct VIDMM_PHYSICAL_ALLOC_LEGACY *, char *))(*(_QWORD *)v10 + 88LL))(
      v10,
      a2,
      (char *)a2 + 152);
    LOBYTE(v11) = 1;
    LOBYTE(v12) = a3;
    (*(void (__fastcall **)(VIDMM_SEGMENT *, struct VIDMM_PHYSICAL_ALLOC_LEGACY *, __int64, __int64))(*(_QWORD *)v10 + 72LL))(
      v10,
      a2,
      v12,
      v11);
  }
  (*(void (__fastcall **)(VIDMM_SEGMENT *, char *))(*(_QWORD *)v10 + 56LL))(v10, (char *)a2 + 152);
  *v3 = 0LL;
  *((_QWORD *)a2 + 27) = 0LL;
  if ( a3 )
    VIDMM_GLOBAL::ResetBackingStore(v4, v5, 2LL);
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)v13);
  *((_DWORD *)a2 + 14) &= ~0x40u;
  --*((_DWORD *)a1 + 456);
}
