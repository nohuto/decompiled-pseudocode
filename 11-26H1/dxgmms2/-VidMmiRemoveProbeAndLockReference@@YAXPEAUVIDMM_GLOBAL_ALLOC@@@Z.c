/*
 * XREFs of ?VidMmiRemoveProbeAndLockReference@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010BB30
 * Callers:
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x14010B890 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVI.c)
 *     ?EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x14010B960 (-EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@PEAUVIDMM_LOCAL_A.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAU_MDL@@_N@Z @ 0x14012B6B8 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAU_MDL@@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VidMmiRemoveProbeAndLockReference(struct VIDMM_GLOBAL_ALLOC *a1)
{
  char v2; // [rsp+28h] [rbp-10h]

  if ( --*((_DWORD *)a1 + 47) < 0 )
  {
    v2 = 1;
    DxgCreateLiveDumpWithWdLogs(403LL, 2072LL, a1, 0LL, 0LL, v2);
  }
}
