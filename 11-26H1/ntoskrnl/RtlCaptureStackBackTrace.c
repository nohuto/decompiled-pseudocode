/*
 * XREFs of RtlCaptureStackBackTrace @ 0x140261920
 * Callers:
 *     PsBoostThreadIoEx @ 0x1402468A0 (PsBoostThreadIoEx.c)
 *     RtlStdLogStackTrace @ 0x140260BE8 (RtlStdLogStackTrace.c)
 *     MiCaptureStackTraceCallout @ 0x140260E6C (MiCaptureStackTraceCallout.c)
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     SepGetStackTraceHash @ 0x140260EE8 (SepGetStackTraceHash.c)
 *     RtlGetCallersAddress @ 0x140261030 (RtlGetCallersAddress.c)
 *     ObpPushStackInfo @ 0x1402659F0 (ObpPushStackInfo.c)
 *     PsBoostThreadIo @ 0x1402BA700 (PsBoostThreadIo.c)
 *     MiShowBadMapper @ 0x1403669CC (MiShowBadMapper.c)
 *     RtlpHpHeapHandleError @ 0x140526918 (RtlpHpHeapHandleError.c)
 *     RtlpHpPgContextFree @ 0x14063A300 (RtlpHpPgContextFree.c)
 *     CarInitializeTelemetryData @ 0x140649C90 (CarInitializeTelemetryData.c)
 *     UcOnUnexpectedCodePath @ 0x140712950 (UcOnUnexpectedCodePath.c)
 *     CmpLogDirtyVectorUse @ 0x1408B71E8 (CmpLogDirtyVectorUse.c)
 *     HvpMarkDirty @ 0x1408DAF50 (HvpMarkDirty.c)
 *     VfPendingFinishLogging @ 0x140C2FEE0 (VfPendingFinishLogging.c)
 *     ViFaultsTracesLog @ 0x140C34FF0 (ViFaultsTracesLog.c)
 *     VfDeadlockInitializeResource @ 0x140C36320 (VfDeadlockInitializeResource.c)
 *     ViIrqlLogCRStackTrace @ 0x140C3C6E8 (ViIrqlLogCRStackTrace.c)
 *     VfDeadlockReleaseResource @ 0x140C4493C (VfDeadlockReleaseResource.c)
 *     ViPtCaptureStackTraceCallout @ 0x140C45180 (ViPtCaptureStackTraceCallout.c)
 *     IovpLogStackCallout @ 0x140C45EB0 (IovpLogStackCallout.c)
 *     VfDeadlockAcquireResource @ 0x140C47314 (VfDeadlockAcquireResource.c)
 *     ViKeIrqlLogCommon @ 0x140C479D8 (ViKeIrqlLogCommon.c)
 *     VfCheckUserHandle @ 0x140C47C38 (VfCheckUserHandle.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x140262D70 (RtlWalkFrameChain.c)
 */

USHORT __stdcall RtlCaptureStackBackTrace(
        ULONG FramesToSkip,
        ULONG FramesToCapture,
        PVOID *BackTrace,
        PULONG BackTraceHash)
{
  ULONG v4; // edi
  ULONG v7; // ebx
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
