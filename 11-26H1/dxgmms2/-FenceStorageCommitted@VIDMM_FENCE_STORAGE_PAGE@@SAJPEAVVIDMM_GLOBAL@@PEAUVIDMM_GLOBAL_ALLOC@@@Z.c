/*
 * XREFs of ?FenceStorageCommitted@VIDMM_FENCE_STORAGE_PAGE@@SAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400A5124
 * Callers:
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x14012AEC0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::FenceStorageCommitted(
        struct VIDMM_GLOBAL *a1,
        struct VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v2; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v9; // rcx

  v2 = *((_QWORD *)a2 + 8);
  v5 = *(_QWORD *)a2;
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 5040) + 8LL * ((*(_DWORD *)(v5 + 52) >> 2) & 0x3F));
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v6 + 16LL))(v6, v5, v2 + 168);
  if ( v7 )
  {
    *(_QWORD *)(v2 + 192) = v7;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(1LL, a1, a2);
    WdLogGlobalForLineNumber = 613;
    DxgkLogInternalTriageEvent(v9, 0x40000LL);
    return 3221225473LL;
  }
}
