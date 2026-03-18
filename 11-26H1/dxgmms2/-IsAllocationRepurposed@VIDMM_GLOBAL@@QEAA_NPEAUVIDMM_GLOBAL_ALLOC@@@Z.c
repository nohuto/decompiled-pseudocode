/*
 * XREFs of ?IsAllocationRepurposed@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010DFB8
 * Callers:
 *     ?IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x14010DEE4 (-IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14002BFF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14002C1F0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     ?QueryLocalAllocationResidency@VIDMM_GLOBAL@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEBUVIDMM_LOCAL_ALLOC@@@Z @ 0x14011B07C (-QueryLocalAllocationResidency@VIDMM_GLOBAL@@QEAA-AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEBUVIDM.c)
 */

bool __fastcall VIDMM_GLOBAL::IsAllocationRepurposed(VIDMM_GLOBAL *this, struct VIDMM_GLOBAL_ALLOC *a2)
{
  struct _KTHREAD **v2; // rdi
  bool v5; // bl
  __int64 v7; // rbx
  __int64 v8; // rcx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-58h] BYREF

  v2 = (struct _KTHREAD **)((char *)a2 + 136);
  v5 = 0;
  DXGFASTMUTEX::Acquire((struct VIDMM_GLOBAL_ALLOC *)((char *)a2 + 136));
  if ( *(_WORD *)(*((_QWORD *)a2 + 46) + 8LL) == 3 )
  {
    v7 = *((_QWORD *)a2 + 6);
    v8 = *(_QWORD *)(v7 + 8);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*(PRKPROCESS *)(v8 + 16), &ApcState);
    LODWORD(v7) = VIDMM_GLOBAL::QueryLocalAllocationResidency(this, (const struct VIDMM_LOCAL_ALLOC *)v7);
    KeUnstackDetachProcess(&ApcState);
    v5 = (_DWORD)v7 == 3;
  }
  DXGFASTMUTEX::Release(v2);
  return v5;
}
