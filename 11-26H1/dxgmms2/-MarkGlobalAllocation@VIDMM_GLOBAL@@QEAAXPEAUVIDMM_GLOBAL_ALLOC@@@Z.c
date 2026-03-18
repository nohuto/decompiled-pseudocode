/*
 * XREFs of ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010E9E4
 * Callers:
 *     ?TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1400B7A28 (-TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@U_VIDMM_TRIM_PROCESS_FLAGS@.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010E090 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ProcessSystemMemoryOfferList @ 0x14010E534 (ProcessSystemMemoryOfferList.c)
 *     ?OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x14011B414 (-OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14002BFF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14002C1F0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400D3B70 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::MarkGlobalAllocation(VIDMM_GLOBAL *this, struct VIDMM_GLOBAL_ALLOC *a2)
{
  struct _KTHREAD **v2; // r15
  _QWORD **v4; // r14
  __int64 v5; // rcx
  _QWORD *v6; // rbx
  _QWORD *v7; // rsi
  _QWORD **v8; // rsi
  _QWORD *v9; // rdi
  VIDMM_DEVICE **v10; // rbp

  v2 = (struct _KTHREAD **)((char *)a2 + 136);
  v4 = (_QWORD **)((char *)a2 + 112);
  DXGFASTMUTEX::Acquire((struct VIDMM_GLOBAL_ALLOC *)((char *)a2 + 136));
  v6 = *v4;
  while ( v6 != v4 )
  {
    v7 = v6;
    v6 = (_QWORD *)*v6;
    v8 = (_QWORD **)(v7 - 2);
    v9 = *v8;
    while ( v9 != v8 )
    {
      v10 = (VIDMM_DEVICE **)(v9 - 5);
      v9 = (_QWORD *)*v9;
      if ( (*((_BYTE *)v10 + 28) & 3) == 2 )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v5) + 24) = v10;
          WdLogGlobalForLineNumber = 26487;
        }
        VIDMM_GLOBAL::NotifyAllocationEviction(this, v10, 0);
      }
    }
  }
  DXGFASTMUTEX::Release(v2);
}
