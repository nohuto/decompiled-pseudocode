/*
 * XREFs of IopLiveDumpEndMirroringCallback @ 0x1405CEFA0
 * Callers:
 *     <none>
 * Callees:
 *     IopLiveDumpIsTracingEnabled @ 0x14052F2C8 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpCollectPages @ 0x1405CE958 (IopLiveDumpCollectPages.c)
 *     IopLiveDumpEnterCorralledState @ 0x1405CF050 (IopLiveDumpEnterCorralledState.c)
 *     IopLiveDumpValidateProtectedProcessExclusions @ 0x1405D2F6C (IopLiveDumpValidateProtectedProcessExclusions.c)
 *     IopLiveDumpTraceNoArgs @ 0x1405D7BE8 (IopLiveDumpTraceNoArgs.c)
 */

__int64 __fastcall IopLiveDumpEndMirroringCallback(int a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  __int64 *v3; // rcx
  __int64 *v5; // rcx

  v1 = IopLiveDumpContext;
  v2 = 0;
  if ( a1 )
  {
    if ( a1 != 1 )
      return (unsigned int)-1073741595;
    if ( IopLiveDumpIsTracingEnabled() )
    {
      v3 = LIVEDUMP_EVENT_SIZING_WORKFLOW_MIRRORING_PHASE1_END;
      if ( (*(_DWORD *)(v1 + 80) & 1) == 0 )
        v3 = LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_MIRRORING_PHASE1_END;
      IopLiveDumpTraceNoArgs(v3);
    }
    return (unsigned int)IopLiveDumpCollectPages(v1);
  }
  if ( IopLiveDumpIsTracingEnabled() )
  {
    v5 = LIVEDUMP_EVENT_SIZING_WORKFLOW_MIRRORING_PHASE0_END;
    if ( (*(_DWORD *)(v1 + 80) & 1) == 0 )
      v5 = LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_MIRRORING_PHASE0_END;
    IopLiveDumpTraceNoArgs(v5);
  }
  IopLiveDumpEnterCorralledState(v1);
  if ( (*(_DWORD *)(v1 + 80) & 0x8000) != 0 )
    return (unsigned int)IopLiveDumpValidateProtectedProcessExclusions(v1);
  return v2;
}
