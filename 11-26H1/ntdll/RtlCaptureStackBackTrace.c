/*
 * XREFs of RtlCaptureStackBackTrace @ 0x18005BB90
 * Callers:
 *     sxsisol_SearchActCtxForDllName @ 0x18002CB70 (sxsisol_SearchActCtxForDllName.c)
 *     RtlReleaseActivationContext @ 0x180038390 (RtlReleaseActivationContext.c)
 *     RtlpHeapTrkTrackStack @ 0x18005BF90 (RtlpHeapTrkTrackStack.c)
 *     RtlActivateActivationContext @ 0x18005D580 (RtlActivateActivationContext.c)
 *     RtlActivateActivationContextEx @ 0x18005D6F0 (RtlActivateActivationContextEx.c)
 *     RtlStdLogStackTrace @ 0x18006AAE0 (RtlStdLogStackTrace.c)
 *     RtlpHpStackTraceAddStack @ 0x1800BD890 (RtlpHpStackTraceAddStack.c)
 *     RtlpStackTraceDatabaseLogPrefix @ 0x1800EB2B0 (RtlpStackTraceDatabaseLogPrefix.c)
 *     RtlpHpPgContextFree @ 0x1801015B4 (RtlpHpPgContextFree.c)
 *     RtlGetCallersAddress @ 0x180110F00 (RtlGetCallersAddress.c)
 *     RtlpHpHeapHandleError @ 0x18011F8D0 (RtlpHpHeapHandleError.c)
 *     LdrpCgLogFailure @ 0x18015CD50 (LdrpCgLogFailure.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x18005BC30 (RtlWalkFrameChain.c)
 */

USHORT __stdcall RtlCaptureStackBackTrace(
        ULONG FramesToSkip,
        ULONG FramesToCapture,
        PVOID *BackTrace,
        PULONG BackTraceHash)
{
  ULONG v4; // esi
  ULONG v7; // edi
  ULONG i; // eax
  unsigned int v9; // r8d
  ULONG v10; // edx
  __int64 v11; // rcx

  v4 = 0xFFFF;
  if ( FramesToCapture <= 0xFFFF )
    v4 = FramesToCapture;
  if ( FramesToSkip > 0xFE
    || (v7 = FramesToSkip + 1, i = RtlWalkFrameChain(BackTrace, v4 + v7, v7 << 8), v9 = i, i <= v7) )
  {
    LOWORD(i) = 0;
  }
  else if ( BackTraceHash )
  {
    v10 = 0;
    for ( i = 0; i < v4; v10 += LODWORD(BackTrace[v11]) )
    {
      if ( i + v7 >= v9 )
        break;
      v11 = i++;
    }
    *BackTraceHash = v10;
  }
  else
  {
    LOWORD(i) = i - v7;
  }
  return i;
}
