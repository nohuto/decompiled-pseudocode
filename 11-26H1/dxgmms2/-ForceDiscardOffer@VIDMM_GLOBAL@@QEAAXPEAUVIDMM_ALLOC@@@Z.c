/*
 * XREFs of ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x14010DB3C
 * Callers:
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x14010CF0C (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x14010D768 (-ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14002C2E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140035B48 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140035F90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1400E53F0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010E984 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z @ 0x140122454 (-FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z.c)
 */

void __fastcall VIDMM_GLOBAL::ForceDiscardOffer(VIDMM_GLOBAL *this, __int64 **a2)
{
  __int64 v4; // rbx
  VIDMM_GLOBAL *v5; // rcx
  struct VIDMM_PAGING_QUEUE *v6; // r15
  char v7; // si
  _BYTE v8[16]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v9[12]; // [rsp+40h] [rbp-78h] BYREF

  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    WdLogGlobalForLineNumber = 6610;
  }
  v4 = **a2;
  v5 = (VIDMM_GLOBAL *)a2[1][10];
  v6 = (struct VIDMM_PAGING_QUEUE *)*((_QWORD *)v5 + 4 * ((*(_DWORD *)(*(_QWORD *)v4 + 52LL) >> 2) & 0x3F));
  if ( *((int *)a2[12] + 3) > 0 )
    VIDMM_GLOBAL::FlushPendingAllocationAccess(v5, (struct VIDMM_GLOBAL_ALLOC *)**a2, 0LL, 0);
  v7 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (struct DXGFASTMUTEX *const)(v4 + 136), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  if ( (*(_DWORD *)(*(_QWORD *)v4 + 56LL) & 1) != 0 )
    v7 = 1;
  else
    VIDMM_GLOBAL::DiscardOfferedAllocation(this, (struct VIDMM_GLOBAL_ALLOC *)v4);
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)v8);
  if ( v7 )
  {
    memset(v9, 0, 0x58uLL);
    v9[1] = a2[1];
    LODWORD(v9[0]) = 211;
    v9[4] = v4;
    VIDMM_GLOBAL::QueueDeferredCommand(
      (struct VIDMM_WORKER_THREAD **)this,
      v6,
      (struct _VIDMM_DEFERRED_COMMAND *)v9,
      1,
      0LL);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (struct DXGFASTMUTEX *const)(v4 + 136), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)v8);
}
