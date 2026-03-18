/*
 * XREFs of ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14011C0EC
 * Callers:
 *     UpdateAllocationProperty @ 0x1400B2A2C (UpdateAllocationProperty.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CFED0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ReferenceAllocationForPreparation @ 0x1400D3624 (ReferenceAllocationForPreparation.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14002BFF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14002C1F0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400D3B70 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::EvictAllocation(VIDMM_GLOBAL *this, struct VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v3; // r12
  struct VIDMM_GLOBAL_ALLOC *v5; // rbx
  struct VIDMM_GLOBAL_ALLOC *v6; // r15
  _QWORD **v7; // r15
  _QWORD *v8; // rsi
  __int64 v9; // rbx
  VIDMM_DEVICE **v10; // rdx

  v3 = *(_QWORD *)a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    WdLogGlobalForLineNumber = 16306;
  }
  DXGFASTMUTEX::Acquire((struct VIDMM_GLOBAL_ALLOC *)((char *)a2 + 136));
  v5 = (struct VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 14);
  while ( v5 != (struct VIDMM_GLOBAL_ALLOC *)((char *)a2 + 112) )
  {
    v6 = v5;
    v5 = *(struct VIDMM_GLOBAL_ALLOC **)v5;
    v7 = (_QWORD **)((char *)v6 - 16);
    v8 = *v7;
    while ( v8 != v7 )
    {
      v10 = (VIDMM_DEVICE **)(v8 - 5);
      v8 = (_QWORD *)*v8;
      if ( (*((_BYTE *)v10 + 28) & 3) == 2 )
        VIDMM_GLOBAL::NotifyAllocationEviction(this, v10, 0);
    }
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2 + 17);
  v9 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * ((*(_DWORD *)(*(_QWORD *)a2 + 52LL) >> 2) & 0x3F));
  (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 232LL))(
    v9,
    v3,
    *(_QWORD *)(v3 + 16),
    **((_QWORD **)a2 + 41));
  *((_DWORD *)a2 + 18) = 1;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 264LL))(v9, v3);
}
