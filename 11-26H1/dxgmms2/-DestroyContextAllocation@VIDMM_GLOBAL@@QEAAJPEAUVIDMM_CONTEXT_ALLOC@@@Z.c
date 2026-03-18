/*
 * XREFs of ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_CONTEXT_ALLOC@@@Z @ 0x140116600
 * Callers:
 *     VidMmDestroyContextAllocation @ 0x140042EB0 (VidMmDestroyContextAllocation.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@_NU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400D4C18 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@_NU_D3DDDICB_D.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400D51C0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     VidSchRemoveContextAllocation @ 0x1401166D8 (VidSchRemoveContextAllocation.c)
 */

__int64 __fastcall VIDMM_GLOBAL::DestroyContextAllocation(VIDMM_GLOBAL *this, struct VIDMM_CONTEXT_ALLOC *a2)
{
  struct VIDMM_ALLOC *v3; // rbx
  struct VIDMM_DEVICE *v4; // rsi
  struct VIDMM_GLOBAL_ALLOC *v5; // rdi
  __int64 v7; // rcx

  if ( a2 )
  {
    v3 = (struct VIDMM_ALLOC *)*((_QWORD *)a2 + 3);
    v4 = (struct VIDMM_DEVICE *)*((_QWORD *)v3 + 1);
    v5 = **(struct VIDMM_GLOBAL_ALLOC ***)v3;
    VidSchRemoveContextAllocation(a2);
    VIDMM_GLOBAL::CloseOneAllocation(this, v3, 0LL, 0, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1, 0LL);
    VIDMM_GLOBAL::DestroyOneAllocation(this, v4, v5, 0);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2317;
    DxgkLogInternalTriageEvent(v7, 0x40000LL);
    return 3221225485LL;
  }
}
