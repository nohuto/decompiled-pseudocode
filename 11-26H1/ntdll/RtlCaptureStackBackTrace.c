/*
 * XREFs of RtlCaptureStackBackTrace @ 0x180010460
 * Callers:
 *     RtlpHeapTrkTrackStack @ 0x180010860 (RtlpHeapTrkTrackStack.c)
 *     RtlActivateActivationContext @ 0x180011E50 (RtlActivateActivationContext.c)
 *     RtlActivateActivationContextEx @ 0x180011FC0 (RtlActivateActivationContextEx.c)
 *     sxsisol_SearchActCtxForDllName @ 0x180042600 (sxsisol_SearchActCtxForDllName.c)
 *     RtlReleaseActivationContext @ 0x18004DE10 (RtlReleaseActivationContext.c)
 *     RtlStdLogStackTrace @ 0x18007C2C0 (RtlStdLogStackTrace.c)
 *     RtlpHpStackTraceAddStack @ 0x1800C0100 (RtlpHpStackTraceAddStack.c)
 *     RtlpStackTraceDatabaseLogPrefix @ 0x1800EC0E0 (RtlpStackTraceDatabaseLogPrefix.c)
 *     RtlpHpPgContextFree @ 0x180101E64 (RtlpHpPgContextFree.c)
 *     RtlGetCallersAddress @ 0x180111380 (RtlGetCallersAddress.c)
 *     RtlpHpHeapHandleError @ 0x18011FB20 (RtlpHpHeapHandleError.c)
 *     LdrpCgLogFailure @ 0x18015CE90 (LdrpCgLogFailure.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x180010500 (RtlWalkFrameChain.c)
 */

USHORT __stdcall RtlCaptureStackBackTrace(
        ULONG FramesToSkip,
        ULONG FramesToCapture,
        PVOID *BackTrace,
        PULONG BackTraceHash)
{
  ULONG v4; // esi
  ULONG v7; // edi
  unsigned int i; // eax
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
