/*
 * XREFs of ?RemoveAllocationFromOfferList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010DAD4
 * Callers:
 *     ?VidMmOpCloseAllocationCommand@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@AEAE@Z @ 0x1400D198C (-VidMmOpCloseAllocationCommand@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@AEAE@Z.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400D51C0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x14010CF0C (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?ProcessPendingOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x14010D82C (-ProcessPendingOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_GLOBAL::RemoveAllocationFromOfferList(VIDMM_GLOBAL *this, struct VIDMM_GLOBAL_ALLOC *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r9
  _QWORD *v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = (_QWORD *)((char *)a2 + 256);
  v3 = *((_QWORD *)a2 + 32);
  if ( *(struct VIDMM_GLOBAL_ALLOC **)(v3 + 8) != (struct VIDMM_GLOBAL_ALLOC *)((char *)a2 + 256)
    || (v4 = (_QWORD *)*((_QWORD *)a2 + 33), (_QWORD *)*v4 != v2) )
  {
    __fastfail(3u);
  }
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  v5 = *(_QWORD *)a2;
  *v2 = 0LL;
  v6 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * ((*(_DWORD *)(v5 + 52) >> 2) & 0x3F));
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 384LL))(v6);
}
