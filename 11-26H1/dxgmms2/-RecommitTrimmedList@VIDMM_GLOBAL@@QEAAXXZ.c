/*
 * XREFs of ?RecommitTrimmedList@VIDMM_GLOBAL@@QEAAXXZ @ 0x14011E6E0
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CFED0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1401138E8 (-AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecommitTrimmedList(VIDMM_GLOBAL *this)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rdi
  struct VIDMM_ALLOC *v4; // rsi
  _DWORD *v5; // rdx
  int v6; // eax
  __int64 v7; // rcx

  v1 = (_QWORD *)((char *)this + 3720);
  v3 = (_QWORD *)*((_QWORD *)this + 465);
  while ( v3 != v1 )
  {
    v4 = (struct VIDMM_ALLOC *)(v3 - 7);
    v3 = (_QWORD *)*v3;
    v5 = **(_DWORD ***)v4;
    v6 = v5[18];
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        v7 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * ((*(_DWORD *)(*(_QWORD *)v5 + 52LL) >> 2) & 0x3F));
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 248LL))(v7);
      }
      VIDMM_DEVICE::AddCommitment(*((VIDMM_DEVICE **)v4 + 1), v4);
    }
  }
  v1[1] = v1;
  *v1 = v1;
}
