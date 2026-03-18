/*
 * XREFs of ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1400CDAE8
 * Callers:
 *     ?PageInFaultedAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1400CEA6C (-PageInFaultedAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CFED0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400CDBD4 (-BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1400CEDF8 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NP.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitContextAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_ALLOC *a2,
        char a3,
        bool *a4,
        struct VIDMM_ALLOC **a5)
{
  __int64 v9; // rbp
  int v10; // eax
  unsigned int v11; // edi
  __int64 result; // rax

  *a5 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v9 = **(_QWORD **)a2;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = v9;
    WdLogGlobalForLineNumber = 15141;
  }
  if ( a3 && (v10 = VIDMM_GLOBAL::PageInOneAllocation(this, a2, 0LL, 0LL, a4, a5, 0, -1LL), v11 = v10, v10 < 0) )
  {
    WdLogSingleEntry2(4LL, a2, v10);
    result = v11;
    WdLogGlobalForLineNumber = 15148;
  }
  else
  {
    VIDMM_GLOBAL::BuildInitContextAllocation(this, a2, 1);
    return 0LL;
  }
  return result;
}
