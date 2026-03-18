/*
 * XREFs of ?ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x14010D768
 * Callers:
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x14010CF0C (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 * Callees:
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1400E53F0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x14010DB3C (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::ForceDecommitOffer(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD v8[12]; // [rsp+30h] [rbp-68h] BYREF

  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    WdLogGlobalForLineNumber = 6708;
  }
  VIDMM_GLOBAL::ForceDiscardOffer(this, a2);
  v4 = **(__int64 ***)a2;
  memset(v8, 0, 0x58uLL);
  v5 = *v4;
  v8[1] = *((_QWORD *)a2 + 1);
  LODWORD(v8[0]) = 215;
  v6 = *(_QWORD *)(v8[1] + 80LL);
  v7 = (*(_DWORD *)(v5 + 52) >> 2) & 0x3F;
  v8[4] = v4;
  VIDMM_GLOBAL::QueueDeferredCommand(
    (struct VIDMM_WORKER_THREAD **)this,
    *(struct VIDMM_PAGING_QUEUE **)(32 * v7 + v6),
    (struct _VIDMM_DEFERRED_COMMAND *)v8,
    1,
    0LL);
}
