/*
 * XREFs of RtlpReportHeapFailure @ 0x1800CFA0C
 * Callers:
 *     RtlpHeapHandleError @ 0x180012590 (RtlpHeapHandleError.c)
 *     RtlpCreateHeap @ 0x18006B0B0 (RtlpCreateHeap.c)
 * Callees:
 *     RtlIsAnyDebuggerPresent @ 0x180091250 (RtlIsAnyDebuggerPresent.c)
 *     RtlpGetModifiedProcessCookie @ 0x1800CFEE4 (RtlpGetModifiedProcessCookie.c)
 *     RtlpPrintErrorInformation @ 0x180150304 (RtlpPrintErrorInformation.c)
 */

char __fastcall RtlpReportHeapFailure(int a1)
{
  int ModifiedProcessCookie; // eax
  unsigned int v3; // r8d

  ModifiedProcessCookie = RtlpGetModifiedProcessCookie();
  if ( RtlpDisableBreakOnFailureCookie == ModifiedProcessCookie )
  {
    if ( a1 <= RtlpHeapErrorHandlerThreshold )
    {
      RtlpPrintErrorInformation();
      LOBYTE(ModifiedProcessCookie) = RtlIsAnyDebuggerPresent();
      if ( (_BYTE)ModifiedProcessCookie )
      {
        if ( (RtlpHpHeapFeatures & 8) == 0 )
          __debugbreak();
      }
    }
  }
  else
  {
    LOBYTE(v3) = ~RtlpHpHeapFeatures;
    LOBYTE(ModifiedProcessCookie) = RtlReportCriticalFailure(-1073740940, (__int64)&RtlpHeapFailureInfo, (v3 >> 3) & 1);
  }
  return ModifiedProcessCookie;
}
