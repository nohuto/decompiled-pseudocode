/*
 * XREFs of ?VidMmFlushAllocationRangeFromProcessorCache@@YAXPEAUVIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1400A2F6C
 * Callers:
 *     ?VidMmFlushPendingGpuAccess@@YAXPEBUVIDMM_SEGMENT_BASE@@PEAUVIDMM_GLOBAL_ALLOC@@_K2@Z @ 0x1400A31E0 (-VidMmFlushPendingGpuAccess@@YAXPEBUVIDMM_SEGMENT_BASE@@PEAUVIDMM_GLOBAL_ALLOC@@_K2@Z.c)
 *     FlushDmaBufferProcessCacheCB @ 0x1400A4000 (FlushDmaBufferProcessCacheCB.c)
 *     ?FlushPendingCPUAccess@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x14011C2B8 (-FlushPendingCPUAccess@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 * Callees:
 *     ??0VIDMM_PROCESS_AUTOATTACH@@QEAA@PEAVVIDMM_PROCESS@@_N@Z @ 0x14003B56C (--0VIDMM_PROCESS_AUTOATTACH@@QEAA@PEAVVIDMM_PROCESS@@_N@Z.c)
 *     ??1VIDMM_PROCESS_AUTOATTACH@@QEAA@XZ @ 0x14003BA5C (--1VIDMM_PROCESS_AUTOATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     VidMmFlushCpuCacheWorker @ 0x1400A2FFC (VidMmFlushCpuCacheWorker.c)
 */

void __fastcall VidMmFlushAllocationRangeFromProcessorCache(struct VIDMM_GLOBAL_ALLOC *a1, __int64 a2, ULONG a3)
{
  __int64 v5; // rdx
  char v6; // r8
  __int64 v7; // rbx
  _BYTE v8[64]; // [rsp+20h] [rbp-68h] BYREF

  v5 = *((_QWORD *)a1 + 6);
  v6 = 1;
  if ( !v5 || (**((_DWORD **)a1 + 46) & 8) != 0 )
  {
    v7 = *((_QWORD *)a1 + 26);
    v6 = 0;
  }
  else
  {
    v7 = *(_QWORD *)(v5 + 16);
  }
  if ( v7 )
  {
    VIDMM_PROCESS_AUTOATTACH::VIDMM_PROCESS_AUTOATTACH(
      (VIDMM_PROCESS_AUTOATTACH *)v8,
      *(struct VIDMM_PROCESS **)(v5 + 8),
      v6);
    VidMmFlushCpuCacheWorker((PVOID)(a2 + v7), a3);
    VIDMM_PROCESS_AUTOATTACH::~VIDMM_PROCESS_AUTOATTACH((VIDMM_PROCESS_AUTOATTACH *)v8);
  }
}
