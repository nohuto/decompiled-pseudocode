/*
 * XREFs of IopLiveDumpStartMirroringCallback @ 0x1405D1950
 * Callers:
 *     <none>
 * Callees:
 *     IopLiveDumpIsTracingEnabled @ 0x14052F2C8 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTraceNoArgs @ 0x1405D7BE8 (IopLiveDumpTraceNoArgs.c)
 */

__int64 IopLiveDumpStartMirroringCallback()
{
  __int64 v0; // rcx
  bool v1; // zf
  __int64 *v2; // rcx

  if ( IopLiveDumpIsTracingEnabled() )
  {
    v1 = (*(_DWORD *)(v0 + 80) & 1) == 0;
    v2 = LIVEDUMP_EVENT_SIZING_WORKFLOW_MIRRORING_START;
    if ( v1 )
      v2 = LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_MIRRORING_START;
    IopLiveDumpTraceNoArgs(v2);
  }
  return 0LL;
}
