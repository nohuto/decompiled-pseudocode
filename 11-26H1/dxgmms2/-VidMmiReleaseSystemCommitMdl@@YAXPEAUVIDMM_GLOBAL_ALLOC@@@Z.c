/*
 * XREFs of ?VidMmiReleaseSystemCommitMdl@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010BC7C
 * Callers:
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x14010B890 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVI.c)
 *     ?EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x14010B960 (-EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@PEAUVIDMM_LOCAL_A.c)
 *     ?VidMmiEnsureSystemCommitMdl@@YAJPEAVVIDMM_SEGMENT@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14011B8A8 (-VidMmiEnsureSystemCommitMdl@@YAJPEAVVIDMM_SEGMENT@@PEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?VidMmiUnlockAllocation@@YAXPEAU_MDL@@@Z @ 0x14010BCAC (-VidMmiUnlockAllocation@@YAXPEAU_MDL@@@Z.c)
 */

void __fastcall VidMmiReleaseSystemCommitMdl(struct VIDMM_GLOBAL_ALLOC *a1)
{
  PVOID *v1; // rbx

  v1 = (PVOID *)((char *)a1 + 56);
  if ( (*((_DWORD *)a1 + 7) & 0x50) == 0 )
    VidMmiUnlockAllocation(*v1);
  *v1 = 0LL;
}
