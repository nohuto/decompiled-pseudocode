/*
 * XREFs of ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_N@Z @ 0x1400F5BF0
 * Callers:
 *     ?CloseLocalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_N@Z @ 0x1400F5CF0 (-CloseLocalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_N@Z.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x14010CF0C (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010E090 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@_N@Z @ 0x140127C48 (-OpenLocalAllocation@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_.c)
 * Callees:
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400F57D0 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400F57F0 (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::UncommitLocalBackingStore(VIDMM_GLOBAL *this, struct VIDMM_LOCAL_ALLOC *a2, char a3)
{
  __int64 v3; // rdi
  __int64 v5; // rsi
  VIDMM_PROCESS *v7; // rcx
  struct _KAPC_STATE v8; // [rsp+38h] [rbp-60h] BYREF
  __int64 v9; // [rsp+68h] [rbp-30h]

  v3 = *(_QWORD *)a2;
  v5 = *((_QWORD *)a2 + 1);
  if ( *(_QWORD *)(*(_QWORD *)a2 + 216LL) && a3 )
  {
    v9 = *((_QWORD *)a2 + 1);
    VIDMM_PROCESS::SafeAttach((PRKPROCESS *)v5, &v8);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(v3 + 216) + 152LL))(
      *(_QWORD *)(v3 + 216),
      *(_QWORD *)(v3 + 224),
      *((_QWORD *)a2 + 9),
      *((_QWORD *)a2 + 2));
    *((_QWORD *)a2 + 9) = 0LL;
    *((_QWORD *)a2 + 2) = 0LL;
    VIDMM_PROCESS::SafeDetach(v7, &v8);
  }
  _InterlockedAdd64(
    (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 32)
                                                      + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL))
                                          + 8LL)
                              + 304LL * ((*(_DWORD *)(*(_QWORD *)v3 + 52LL) >> 2) & 0x3F)
                              + 232),
    -*(_QWORD *)(*(_QWORD *)v3 + 16LL));
}
